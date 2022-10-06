#Сначала надо импортировать модуль 1 раз для работы с EXCEL
# Если есть инет, то запускаем оболочку от имени админа и запускаем
# [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.SecurityProtocolType]::Tls11 -bor [System.Net.SecurityProtocolType]::Tls12
# Install-Module -Name ImportExcel
# Set-Executionpolicy -Scope CurrentUser -ExecutionPolicy ByPass
# Import-Module ImportExcel
#
# если нет на машине инета, то идем https://www.powershellgallery.com/packages/ImportExcel/7.1.0 и качаем вручную все
#
#name="test"
#Set-Executionpolicy -Scope CurrentUser -ExecutionPolicy ByPass
#Import-Module ImportExcel

Get-ChildItem -Path $PSScriptRoot -Include @("*.ps1","*.log", "*.xls*") -Recurse | Where-Object -Property CreationTime -lt (Get-Date).AddDays(-8) | Remove-Item -Force -ErrorAction SilentlyContinue
$circuitserviceID="mercury-g2b.service:2.0"
$circuitendpointUrl="https://api.vetrf.ru/platform/services/2.1/ApplicationManagementService"
$circuitlogin="atlanticgrupa-180410"
$circuitpassword="F5jD7gn4Z"
$circuitapiKey="N2ZhYTYxOTktMTJjZi00Yzc3LWE4OTAtODcxOWJlYmFmZTg2ZmRiYTdhZWYtMjE4YS0xMWUyLWE2OWItYjQ5OWJhYmFlN2Vh"
$circuitissureId="fdba7aef-218a-11e2-a69b-b499babae7ea"
$circuitsysLogin="ordynec_el_200114"
$circuitenterpriseGuid="9f0bca9c-d927-4676-8969-248b3e724701"

$circuitbusinessEntityGuid ="fdba7aef-218a-11e2-a69b-b499babae7ea"

$circuitCountTry           = 150
$circuitPause              = 2

$StockGUID = 'c9678fa9-9377-425a-82e1-3d9dbad519d1'

$ReportPath = "D:\GAL9\Gal\exe\dsk\out\vetis_GetStockList_20200716_115741.xlsx"
$fileLog =    "D:\GAL9\Gal\exe\dsk\out\VetisAPI_GetStockList_20200716_115741.log"

[String]$GlobError
$GlobError = ""
$RQST_GUID = "950DEDF6-746B-4AEA-A238-B70538A1B8DB"
$conStrinGal  = 'Server=STEND-ERPDB\ERP;Database=ERPDB_STEND;Trusted_Connection=True;'

function Invoke-DatabaseQuery {
        [CmdletBinding()]
        param (
                [string]$connectionString,
                [string]$query,
                [switch]$isSQLServer
        )
        if ($isSQLServer) {
                Write-Verbose 'in SQL Server mode'
                $connection = New-Object -TypeName System.Data.SqlClient.SqlConnection
        } else {
                Write-Verbose 'in OleDB mode'
                $connection = New-Object -TypeName System.Data.OleDb.OleDbConnection
        }
        $connection.ConnectionString = $connectionString
        $command = $connection.CreateCommand()
        $command.CommandText = $query
        $connection.Open()
        $command.ExecuteNonQuery()
        $connection.close()
}
Function GetDataFromWeb([xml]$fnXML, [string]$URL)
{

$headers = @{}
$headers.add("SOAPAction","GetResponse")
$headers.add("Accept","text/xml")

$credentials = New-Object System.Management.Automation.PSCredential -ArgumentList @($circuitlogin,(ConvertTo-SecureString -String $circuitpassword -AsPlainText -Force))
   try
    {
     Invoke-WebRequest -URI $URL -Headers $headers -Method Post -Body $fnXML -ContentType 'text/xml;charset="utf-8"' -Credential $credentials -UseBasicParsing
    }
    catch
    {
      $GlobError = $error[0]
      $null
    }
}
Function GetResponse()
{
 $template = @'
<SOAP-ENV:Envelope 
             xmlns:dt="http://api.vetrf.ru/schema/cdm/dictionary/v2" 
             xmlns:bs="http://api.vetrf.ru/schema/cdm/base" 
             xmlns:merc="http://api.vetrf.ru/schema/cdm/mercury/g2b/applications/v2" 
             xmlns:apldef="http://api.vetrf.ru/schema/cdm/application/ws-definitions" 
             xmlns:apl="http://api.vetrf.ru/schema/cdm/application" 
             xmlns:vd="http://api.vetrf.ru/schema/cdm/mercury/vet-document/v2" 
             xmlns:SOAP-ENV="http://schemas.xmlsoap.org/soap/envelope/">
  <SOAP-ENV:Header/>
  <SOAP-ENV:Body>
    <apldef:submitApplicationRequest>
      <apldef:apiKey>{0}</apldef:apiKey>
      <apl:application>
        <apl:serviceId>{1}</apl:serviceId>
        <apl:issuerId>{2}</apl:issuerId>
        <apl:issueDate>2019-08-19T17:24:45+03:00</apl:issueDate>
        <apl:data>
          <merc:getStockEntryVersionListRequest>
            <merc:localTransactionId>a110f03</merc:localTransactionId>
            <merc:initiator>
             <vd:login>{3}</vd:login>
            </merc:initiator>
                <bs:listOptions>
              <bs:count>1000</bs:count>
              <bs:offset>0</bs:offset>
            </bs:listOptions>
             <bs:guid>{4}</bs:guid>
             <dt:enterpriseGuid>{5}</dt:enterpriseGuid>
          </merc:getStockEntryVersionListRequest>
        </apl:data>
      </apl:application>
    </apldef:submitApplicationRequest>
  </SOAP-ENV:Body>
</SOAP-ENV:Envelope>
'@

#            webRequest.Credentials = credentials;

$fnc_RqstBody = $template -f $circuitapiKey, $circuitserviceID, $circuitissureId, $circuitsysLogin, $StockGUID, $circuitenterpriseGuid


[xml] $XmlPrepare = $fnc_RqstBody

$response = GetDataFromWeb -fnXML $XmlPrepare -URL $circuitendpointUrl

    If ( ($response.StatusCode -eq 200) -and ($response -ne $null))
    {
     [xml] $XmlResponse = $response.content
     #write-host $response.content
     $XmlResponse.GetElementsByTagName('applicationId').Item(0).FirstChild.data
    }
    else
    {
     $null
    }
}


Function RecieveApplRqst([string]$requestAplId)
{
$template=@'
<SOAP-ENV:Envelope
                    xmlns:dt="http://api.vetrf.ru/schema/cdm/dictionary/v2"
                    xmlns:bs="http://api.vetrf.ru/schema/cdm/base"
                    xmlns:merc="http://api.vetrf.ru/schema/cdm/mercury/g2b/applications/v2"
                    xmlns:apldef="http://api.vetrf.ru/schema/cdm/application/ws-definitions"
                    xmlns:apl="http://api.vetrf.ru/schema/cdm/application"
                    xmlns:vd="http://api.vetrf.ru/schema/cdm/mercury/vet-document/v2"
                    xmlns:SOAP-ENV="http://schemas.xmlsoap.org/soap/envelope/"
                    xmlns:ws="http://api.vetrf.ru/schema/cdm/application/ws-definitions">
                <SOAP-ENV:Header/>
                <SOAP-ENV:Body>
                    <ws:receiveApplicationResultRequest>
                        <ws:apiKey>{0}</ws:apiKey>
                        <ws:issuerId>{1}</ws:issuerId>
                        <ws:applicationId>{2}</ws:applicationId>
                    </ws:receiveApplicationResultRequest>
                </SOAP-ENV:Body>
</SOAP-ENV:Envelope>
'@
#            webRequest.Credentials = credentials;

$fnc_RqstBody = $template -f $circuitapiKey, $circuitissureId, $requestAplId
  $isContinue = $true
  $CountTRy = 0
[xml] $XmlPrepare = $fnc_RqstBody
[xml] $result = $null


  while ($isContinue -eq $true)
  {
    Wait-Event -Timeout $circuitPause
   $CountTRy = $CountTRy + 1
   $response = GetDataFromWeb -fnXML $XmlPrepare -URL $circuitendpointUrl
   [string] $currentStatus = ""
    If ( ($response.StatusCode -eq 200) -and ($response -ne $null))
    {
     [xml] $XmlResponse = $response.content
     $currentStatus = $XmlResponse.GetElementsByTagName('status').Item(0).FirstChild.data
     if ($currentStatus -eq 'COMPLETED')
      {
       $isContinue = $false
       $result = $XmlResponse
       # write-host $response.content
      }
     if ($currentStatus -eq "")
     {
      $isContinue = $false
      $result  = $null
     }
    }
    else
    {
     $isContinue = $false
     $result  = $null
    }
    #write-host "try number $CountTRy of $circuitCountTry | Curent state: $currentStatus"
    write-host "Запрос стока. Прослушивание ответа API. Запрос $CountTRy из $circuitCountTry. Получен ответ: $currentStatus"  -ForegroundColor Green
Add-Content -Path $fileLog -Value $($(Get-Date).ToString("yyyy-MM-dd HH:mm:ss") + " Запрос стока. Прослушивание ответа API. Запрос $CountTRy из $circuitCountTry. Получен ответ: $currentStatus") -Encoding Oem
    if ($circuitCountTry -lt $CountTRy )
     {
      $isContinue = $false
     }
  }
 $result
}
[xml]$stockEntryElementList = $null
 write-host "Запрос стока. Отправка запроса"  -ForegroundColor Green
    Add-Content -Path $fileLog -Value $($(Get-Date).ToString("yyyy-MM-dd HH:mm:ss") + " Запрос стока. Отправка запроса") -Encoding Oem
$requestAplId = GetResponse
if ($GlobError -eq '')
{
 write-host "Запрос стока. Прослушивание ответа API"  -ForegroundColor Green
    Add-Content -Path $fileLog -Value $($(Get-Date).ToString("yyyy-MM-dd HH:mm:ss") + " Запрос стока. Прослушивание ответа API") -Encoding Oem
 $stockEntryElementList = RecieveApplRqst($requestAplId)

}
else
{
 $GlobError
}

if ($stockEntryElementList -ne $null)
{
[System.Collections.ArrayList] $FinalReport = @();
    #$stockEntryElementList.save("C:\Users\lapus\OneDrive\Desktop\_WORK\stockEntryElementList.xml")

    #$stockEntryElementList.GetElementsByTagName('application')
    #$stockEntryElementList.GetElementsByTagName('result')
   write-host "Запрос стока. Разбор XML ответа"  -ForegroundColor Green
    Add-Content -Path $fileLog -Value $($(Get-Date).ToString("yyyy-MM-dd HH:mm:ss") + " Запрос стока. Разбор XML ответа") -Encoding Oem


    # пошлда спецификация
    foreach($stockEntry in $stockEntryElementList.Envelope.Body.receiveApplicationResultResponse.application.result.getStockEntryVersionListResponse.stockEntryList.stockEntry)
    {

    $ExistPackage = $null
     foreach( $package in $stockEntry.batch.packageList.package)
     {
       $ExistPackage = 'YES'
       $item = New-Object PSObject
        # для вставки в основную таблицу
        # $item | Add-Member -type NoteProperty -Name "APPLICATIONID" -Value $stockEntryElementList.Envelope.Body.receiveApplicationResultResponse.application.applicationId.ToString() #APPLICATIONID
       $item | Add-Member -type NoteProperty -Name "uuid" -Value $stockEntry.uuid.ToString() 
       $item | Add-Member -type NoteProperty -Name "status" -Value $stockEntry.status.ToString() 
       $item | Add-Member -type NoteProperty -Name "createDate" -Value $stockEntry.createDate.ToString() 
       $item | Add-Member -type NoteProperty -Name "updateDate" -Value $stockEntry.updateDate.ToString()                         
       if ($stockEntry.next -ne $null)
        {
         $item | Add-Member -type NoteProperty -Name "next" -Value $stockEntry.next.ToString() 
        }
        else
         {
          $item | Add-Member -type NoteProperty -Name "next" -Value ""
         }
       $item | Add-Member -type NoteProperty -Name "batch.productType" -value $stockEntry.batch.productType
       $item | Add-Member -type NoteProperty -Name "batch.product.uuid" -value $stockEntry.batch.product.uuid
       $item | Add-Member -type NoteProperty -Name "batch.product.guid" -value $stockEntry.batch.product.guid
       $item | Add-Member -type NoteProperty -Name "batch.subProduct.uuid" -value $stockEntry.batch.subProduct.uuid
       $item | Add-Member -type NoteProperty -Name "batch.subProduct.guid" -value $stockEntry.batch.subProduct.guid
       $item | Add-Member -type NoteProperty -Name "batch.productItem.name" -value $stockEntry.batch.productItem.name
       $item | Add-Member -type NoteProperty -Name "batch.volume" -value $stockEntry.batch.volume
       $item | Add-Member -type NoteProperty -Name "batch.unit.uuid" -value $stockEntry.batch.unit.uuid
       $item | Add-Member -type NoteProperty -Name "batch.unit.guid" -value $stockEntry.batch.unit.guid
       $item | Add-Member -type NoteProperty -Name "batch.dateOfProduction.firstDate.year" -value $stockEntry.batch.dateOfProduction.firstDate.year
       $item | Add-Member -type NoteProperty -Name "batch.dateOfProduction.firstDate.month" -value $stockEntry.batch.dateOfProduction.firstDate.month
       $item | Add-Member -type NoteProperty -Name "batch.dateOfProduction.firstDate.day" -value $stockEntry.batch.dateOfProduction.firstDate.day
       $item | Add-Member -type NoteProperty -Name "batch.expiryDate.firstDate.year" -value $stockEntry.batch.expiryDate.firstDate.year
       $item | Add-Member -type NoteProperty -Name "batch.expiryDate.firstDate.month" -value $stockEntry.batch.expiryDate.firstDate.month
       $item | Add-Member -type NoteProperty -Name "batch.expiryDate.firstDate.day" -value $stockEntry.batch.expiryDate.firstDate.day
       $item | Add-Member -type NoteProperty -Name "batch.batchID" -value $stockEntry.batch.batchID
       $item | Add-Member -type NoteProperty -Name "batch.perishable" -value $stockEntry.batch.perishable
       $item | Add-Member -type NoteProperty -Name "batch.origin.productItem.name" -value $stockEntry.batch.origin.productItem.name
       $item | Add-Member -type NoteProperty -Name "batch.origin.country.uuid" -value $stockEntry.batch.origin.country.uuid
       $item | Add-Member -type NoteProperty -Name "batch.origin.country.guid" -value $stockEntry.batch.origin.country.guid
       $item | Add-Member -type NoteProperty -Name "batch.origin.producer.enterprise.uuid" -value $stockEntry.batch.origin.producer.enterprise.uuid
       $item | Add-Member -type NoteProperty -Name "batch.origin.producer.enterprise.guid" -value $stockEntry.batch.origin.producer.enterprise.guid
       $item | Add-Member -type NoteProperty -Name "batch.origin.producer.role" -value $stockEntry.batch.origin.producer.role
       $item | Add-Member -type NoteProperty -Name "batch.lowGradeCargo" -value $stockEntry.batch.lowGradeCargo
       $item | Add-Member -type NoteProperty -Name "package.level" -value $package.level
       $item | Add-Member -type NoteProperty -Name "package.packingType.uuid" -value $package.packingType.uuid
       $item | Add-Member -type NoteProperty -Name "package.packingType.guid" -value $package.packingType.guid
       $item | Add-Member -type NoteProperty -Name "package.packingType.globalID" -value $package.packingType.globalID
       $item | Add-Member -type NoteProperty -Name "package.packingType.name" -value $package.packingType.name
       $item | Add-Member -type NoteProperty -Name "package.quantity" -value $package.quantity
       $item | Add-Member -type NoteProperty -Name "batch.owner.uuid" -value $stockEntry.batch.owner.uuid
       $item | Add-Member -type NoteProperty -Name "batch.owner.guid" -value $stockEntry.batch.owner.guid
       $item | Add-Member -type NoteProperty -Name "vetEventList.laboratoryResearch" -value $stockEntry.vetEventList.laboratoryResearch
       $FinalReport +=,$item
       
     }
     if ($ExistPackage -eq $null)
     {
       $item = New-Object PSObject
        # для вставки в основную таблицу
        # $item | Add-Member -type NoteProperty -Name "APPLICATIONID" -Value $stockEntryElementList.Envelope.Body.receiveApplicationResultResponse.application.applicationId.ToString() #APPLICATIONID
       $item | Add-Member -type NoteProperty -Name "uuid" -Value $stockEntry.uuid.ToString() 
       $item | Add-Member -type NoteProperty -Name "status" -Value $stockEntry.status.ToString() 
       $item | Add-Member -type NoteProperty -Name "createDate" -Value $stockEntry.createDate.ToString() 
       $item | Add-Member -type NoteProperty -Name "updateDate" -Value $stockEntry.updateDate.ToString()                         
       if ($stockEntry.next -ne $null)
        {
         $item | Add-Member -type NoteProperty -Name "next" -Value $stockEntry.next.ToString() 
        }
        else
         {
          $item | Add-Member -type NoteProperty -Name "next" -Value ""
         }
       $item | Add-Member -type NoteProperty -Name "batch.productType" -value $stockEntry.batch.productType
       $item | Add-Member -type NoteProperty -Name "batch.product.uuid" -value $stockEntry.batch.product.uuid
       $item | Add-Member -type NoteProperty -Name "batch.product.guid" -value $stockEntry.batch.product.guid
       $item | Add-Member -type NoteProperty -Name "batch.subProduct.uuid" -value $stockEntry.batch.subProduct.uuid
       $item | Add-Member -type NoteProperty -Name "batch.subProduct.guid" -value $stockEntry.batch.subProduct.guid
       $item | Add-Member -type NoteProperty -Name "batch.productItem.name" -value $stockEntry.batch.productItem.name
       $item | Add-Member -type NoteProperty -Name "batch.volume" -value $stockEntry.batch.volume
       $item | Add-Member -type NoteProperty -Name "batch.unit.uuid" -value $stockEntry.batch.unit.uuid
       $item | Add-Member -type NoteProperty -Name "batch.unit.guid" -value $stockEntry.batch.unit.guid
       $item | Add-Member -type NoteProperty -Name "batch.dateOfProduction.firstDate.year" -value $stockEntry.batch.dateOfProduction.firstDate.year
       $item | Add-Member -type NoteProperty -Name "batch.dateOfProduction.firstDate.month" -value $stockEntry.batch.dateOfProduction.firstDate.month
       $item | Add-Member -type NoteProperty -Name "batch.dateOfProduction.firstDate.day" -value $stockEntry.batch.dateOfProduction.firstDate.day
       $item | Add-Member -type NoteProperty -Name "batch.expiryDate.firstDate.year" -value $stockEntry.batch.expiryDate.firstDate.year
       $item | Add-Member -type NoteProperty -Name "batch.expiryDate.firstDate.month" -value $stockEntry.batch.expiryDate.firstDate.month
       $item | Add-Member -type NoteProperty -Name "batch.expiryDate.firstDate.day" -value $stockEntry.batch.expiryDate.firstDate.day
       $item | Add-Member -type NoteProperty -Name "batch.batchID" -value $stockEntry.batch.batchID
       $item | Add-Member -type NoteProperty -Name "batch.perishable" -value $stockEntry.batch.perishable
       $item | Add-Member -type NoteProperty -Name "batch.origin.productItem.name" -value $stockEntry.batch.origin.productItem.name
       $item | Add-Member -type NoteProperty -Name "batch.origin.country.uuid" -value $stockEntry.batch.origin.country.uuid
       $item | Add-Member -type NoteProperty -Name "batch.origin.country.guid" -value $stockEntry.batch.origin.country.guid
       $item | Add-Member -type NoteProperty -Name "batch.origin.producer.enterprise.uuid" -value $stockEntry.batch.origin.producer.enterprise.uuid
       $item | Add-Member -type NoteProperty -Name "batch.origin.producer.enterprise.guid" -value $stockEntry.batch.origin.producer.enterprise.guid
       $item | Add-Member -type NoteProperty -Name "batch.origin.producer.role" -value $stockEntry.batch.origin.producer.role
       $item | Add-Member -type NoteProperty -Name "batch.lowGradeCargo" -value $stockEntry.batch.lowGradeCargo
       $item | Add-Member -type NoteProperty -Name "package.level" -value ""
       $item | Add-Member -type NoteProperty -Name "package.packingType.uuid" -value ""
       $item | Add-Member -type NoteProperty -Name "package.packingType.guid" -value ""
       $item | Add-Member -type NoteProperty -Name "package.packingType.globalID" -value ""
       $item | Add-Member -type NoteProperty -Name "package.packingType.name" -value ""
       $item | Add-Member -type NoteProperty -Name "package.quantity" -value ""
       $item | Add-Member -type NoteProperty -Name "batch.owner.uuid" -value $stockEntry.batch.owner.uuid
       $item | Add-Member -type NoteProperty -Name "batch.owner.guid" -value $stockEntry.batch.owner.guid
       $item | Add-Member -type NoteProperty -Name "vetEventList.laboratoryResearch" -value $stockEntry.vetEventList.laboratoryResearch
       $FinalReport +=,$item
     }

    write-host $stockEntry.Batch.ProductItem.Name -ForegroundColor Cyan
    Add-Content -Path $fileLog -Value $($(Get-Date).ToString("yyyy-MM-dd HH:mm:ss") + " "+ $stockEntry.Batch.ProductItem.Name) -Encoding Oem
    $FinalReport +=,$item
  }

 write-host "Запрос стока. Выгрузка в EXCEL" -ForegroundColor Green
 $ReportPath = $ReportPath
 $FinalReport | Export-Excel -Path $ReportPath -AutoSize -WorksheetName "GetStockList"

}
