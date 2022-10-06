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

# TEST
$circuitServiceID          = "mercury-g2b.service" 
$circuitendpointUrl        = "https://api2.vetrf.ru:8002/platform/services/2.0/ApplicationManagementService" 
$circuitlogin              = "atlanticgrupa-180401"
$circuitpassword           = "Gi95LgXm4" 
$circuitapiKey             = "NTI5OTE1ZDUtNGY2MC00YzZmLTkxNjktYmNkY2ViZTg2Y2YzZmRiYTdhZWYtMjE4YS0xMWUyLWE2OWItYjQ5OWJhYmFlN2Vh" 
$circuitissureId           = "fdba7aef-218a-11e2-a69b-b499babae7ea"
$circuitsysLogin           = "topolov_ns_190626"  
$circuitenterpriseGuid     = "a251c4dd-3b79-4088-9787-51c77bc7ab71" 
$circuitbusinessEntityGuid = "fdba7aef-218a-11e2-a69b-b499babae7ea"


# PROD
$circuitserviceID="mercury-g2b.service" 
$circuitendpointUrl="https://api.vetrf.ru/platform/services/2.0/ApplicationManagementService" 
$circuitlogin="atlanticgrupa-180410"
$circuitpassword="F5jD7gn4Z" 
$circuitapiKey="N2ZhYTYxOTktMTJjZi00Yzc3LWE4OTAtODcxOWJlYmFmZTg2ZmRiYTdhZWYtMjE4YS0xMWUyLWE2OWItYjQ5OWJhYmFlN2Vh" 
$circuitissureId="fdba7aef-218a-11e2-a69b-b499babae7ea"
$circuitsysLogin="ordynec_el_200114"  
$circuitenterpriseGuid="9f0bca9c-d927-4676-8969-248b3e724701" 
$circuitbusinessEntityGuid ="fdba7aef-218a-11e2-a69b-b499babae7ea" 

$circuitCountTry           = 70
$circuitPause              = 5

$ReportPath = "C:\Galaktika\_Vetis_PS\RQST\"

[String]$GlobError
$GlobError = ''

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
<soapenv:Envelope 
                    xmlns:dt="http://api.vetrf.ru/schema/cdm/dictionary/v2"
                    xmlns:bs="http://api.vetrf.ru/schema/cdm/base"
                    xmlns:merc="http://api.vetrf.ru/schema/cdm/mercury/g2b/applications/v2"
                    xmlns:apldef="http://api.vetrf.ru/schema/cdm/application/ws-definitions"
                    xmlns:apl="http://api.vetrf.ru/schema/cdm/application"
                    xmlns:vd="http://api.vetrf.ru/schema/cdm/mercury/vet-document/v2"
                    xmlns:soapenv="http://schemas.xmlsoap.org/soap/envelope/">
                <soapenv:Header/>
                <soapenv:Body>
                    <apldef:submitApplicationRequest>
                      <apldef:apiKey>{0}</apldef:apiKey>
                        <apl:application>
                            <apl:serviceId>{1}</apl:serviceId>
                            <apl:issuerId>{2}</apl:issuerId>
                            <apl:issueDate>2019-12-12T09:00:00+03:00</apl:issueDate>
                            <apl:data>
                                <merc:getStockEntryListRequest>
                                    <merc:localTransactionId>a10f03</merc:localTransactionId>
                                    <merc:initiator>
                                        <vd:login>{3}</vd:login>
                                        </merc:initiator>
                                        <dt:enterpriseGuid>{4}</dt:enterpriseGuid>
                                        <merc:searchPattern>
                                    <vd:blankFilter>NOT_BLANK</vd:blankFilter>
                                    </merc:searchPattern>
                                </merc:getStockEntryListRequest>
                            </apl:data>
                        </apl:application>
                    </apldef:submitApplicationRequest>
                </soapenv:Body>
</soapenv:Envelope>
'@

#            webRequest.Credentials = credentials;

$fnc_RqstBody = $template -f $circuitapiKey, $circuitserviceID, $circuitissureId, $circuitsysLogin, $circuitenterpriseGuid


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
   [string] $currentStatus = ''
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
    }
    else
    {
     $null
    }
    #write-host "try number $CountTRy of $circuitCountTry | Curent state: $currentStatus"
    write-host "Запрос стока. Прослушивание ответа API. Запрос $CountTRy из $circuitCountTry. Получен ответ: $currentStatus"  -ForegroundColor Green
    if ($circuitCountTry -lt $CountTRy )
     {
      $isContinue = $false
     }
  }
 $result
}
[xml]$stockEntryElementList = $null
 write-host "Запрос стока. Отправка запроса"  -ForegroundColor Green 
$requestAplId = GetResponse
if ($GlobError -eq '')
{
 write-host "Запрос стока. Прослушивание ответа API"  -ForegroundColor Green
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

#    $ns = new-object Xml.XmlNamespaceManager $stockEntryElementList.NameTable
#    $ns.AddNamespace("soap", $stockEntryElementList.DocumentElement.NamespaceURI)
#    $ns.AddNamespace("vd", $stockEntryElementList.DocumentElement.NamespaceURI)
#    $ns.AddNamespace("ns1", $stockEntryElementList.DocumentElement.NamespaceURI)
#    $ns.AddNamespace("dt", $stockEntryElementList.DocumentElement.NamespaceURI)
#    $ns.AddNamespace("bs", $stockEntryElementList.DocumentElement.NamespaceURI)
#    $stockEntryElementList.SelectNodes("//soap:Envelope/soap:Body", $ns)
#    $stockEntryElementList.SelectNodes("//soap:Envelope/soap:Body/ns1:getStockEntryListResponse", $ns)


    # пошлда спецификация
    foreach($stockEntry in $stockEntryElementList.Envelope.Body.receiveApplicationResultResponse.application.result.getStockEntryListResponse.stockEntryList.stockEntry)
    {
    $item = New-Object PSObject
    # для вставки в основную таблицу
    $item | Add-Member -type NoteProperty -Name 'APPLICATIONID' -Value $stockEntryElementList.Envelope.Body.receiveApplicationResultResponse.application.applicationId.ToString() #APPLICATIONID
    $item | Add-Member -type NoteProperty -Name 'REQUESTSTATUS' -Value $stockEntryElementList.Envelope.Body.receiveApplicationResultResponse.application.status.ToString()        #REQUESTSTATUS 

    #$stockEntry
    #$stockEntry.batch
    #$stockEntry.batch.product


    $item | Add-Member -type NoteProperty -Name 'GUID записи складского журнала' -value $stockEntry.Guid                    # 
    $item | Add-Member -type NoteProperty -Name 'Номер записи складского журнала' -value $stockEntry.EntryNumber             # Номер записи складского журнала
    $item | Add-Member -type NoteProperty -Name 'Наименование продукции' -value $stockEntry.Batch.ProductItem.Name  # Наименование продукции
    $item | Add-Member -type NoteProperty -Name 'Объём в КГ' -value $stockEntry.Batch.Volume            # Объём в КГ
    $item | Add-Member -type NoteProperty -Name 'Статус версии записи журнала' -value $stockEntry.Status                  # Статус версии записи журнала
    $item | Add-Member -type NoteProperty -Name 'Дата создания записи журнала' -value $stockEntry.CreateDate              # Дата создания записи журнала
    $item | Add-Member -type NoteProperty -Name 'Дата изменения записи журнала' -value $stockEntry.UpdateDate              # Дата изменения записи журнала

    $item | Add-Member -type NoteProperty -Name 'Тип продукции' -value $stockEntry.Batch.ProductType          #Тип продукции
    $item | Add-Member -type NoteProperty -Name 'GUID продукции' -value $stockEntry.Batch.Product.Guid         # GUID продукции
    $item | Add-Member -type NoteProperty -Name 'GUID вида продукции' -value $stockEntry.Batch.SubProduct.Guid      # GUID вида продукции
    $item | Add-Member -type NoteProperty -Name 'GTIN' -value $stockEntry.Batch.ProductItem.GlobalID      # GTIN
    $item | Add-Member -type NoteProperty -Name 'BatchNumber' -value $stockEntry.Batch.BatchID             # BatchNumber
    
    $DataProizv = Get-Date -Year $stockEntry.Batch.DateOfProduction.FirstDate.year -Month $stockEntry.Batch.DateOfProduction.FirstDate.month -Day $stockEntry.Batch.DateOfProduction.FirstDate.day -Hour 0 -Minute 0 -Second 0

    $item | Add-Member -type NoteProperty -Name 'Дата производства' -value $($DataProizv.tostring('yyyy-MM-dd')) # Дата производства
#    $item | Add-Member -type NoteProperty -Name '' -value $stockEntry.Batch.DateOfProduction.FirstDate.month
#    $item | Add-Member -type NoteProperty -Name '' -value $stockEntry.Batch.DateOfProduction.FirstDate.day
    $SrokGodn = Get-Date -Year $stockEntry.Batch.ExpiryDate.FirstDate.year -month $stockEntry.Batch.ExpiryDate.FirstDate.month -Day $stockEntry.Batch.ExpiryDate.FirstDate.day -Hour 0 -Minute 0 -Second 0
    $item | Add-Member -type NoteProperty -Name 'Срок годности' -value $($SrokGodn.tostring('yyyy-MM-dd'))              # "Срок годности"
#    $item | Add-Member -type NoteProperty -Name '' -value $stockEntry.Batch.ExpiryDate.FirstDate.month
#    $item | Add-Member -type NoteProperty -Name '' -value $stockEntry.Batch.ExpiryDate.FirstDate.day
    #$stockEntry.Batch.Perishable
    if ($stockEntry.Batch.Perishable -eq $true ) #"true" ? "Скоропортящаяся" : "Не скоропортящаяся";
    {
    $item | Add-Member -type NoteProperty -Name 'Скоропорт' -value   "Скоропортящаяся" 
    }
    else
    {
    $item | Add-Member -type NoteProperty -Name 'Скоропорт' -value  "Не скоропортящаяся"
    }

     foreach ($Package in  $stockEntry.Batch.PackageList.Package)
     {
        if ($Package.level -eq 2)
         {
          $item | Add-Member -type NoteProperty -Name 'Количество штук' -value $Package.Quantity # "Количество штук"
          $item | Add-Member -type NoteProperty -Name 'Уровень упаковки(2)' -value $Package.Level    # "Уровень упаковки(2)"
          $item | Add-Member -type NoteProperty -Name 'Идентификатор упаковки' -value $Package.PackingType.GlobalID # "Идентификатор упаковки"
           foreach ($ProductMarks in $Package.ProductMarks)
           {
             #$ProductMarks
             if ($ProductMarks.Class -eq "EAN13")
              {
               $item | Add-Member -type NoteProperty -Name 'EAN13' -value $ProductMarks.'#text' #"EAN13"] = pm.Text
              }
           }                                      
         }
        if ($Package.level -eq 4)
         {

          $item | Add-Member -type NoteProperty -Name 'Количество коробок' -value $Package.Quantity # "Количество коробок"
          $item | Add-Member -type NoteProperty -Name 'Уровень упаковки(4)' -value $Package.Level    # "Уровень упаковки(4)"
          $item | Add-Member -type NoteProperty -Name 'Идентификатор упаковки по классификатору ЕК 013 - 2010(ред.1)' -value $Package.PackingType.GlobalID # "Идентификатор упаковки по классификатору ЕК 013 - 2010(ред.1)"
           foreach ($ProductMarks in $Package.ProductMarks)
           {
             #$ProductMarks
             if ($ProductMarks.Class -eq "EAN13")
              {
               $item | Add-Member -type NoteProperty -Name 'EAN13(4)' -value $ProductMarks.'#text' #"EAN13(4)"
              }
             if ($ProductMarks.Class -eq "EAN128")
              {
               $item | Add-Member -type NoteProperty -Name 'EAN128(4)' -value $ProductMarks.'#text' #"EAN128(4)"
              }
           }      
         }
     }
    $FinalReport +=,$item     
  }

 write-host "Запрос стока. Выгрузка в EXCEL" -ForegroundColor Green 
 $ReportPath = $ReportPath+"StockLIst_PROD_"+$stockEntryElementList.Envelope.Body.receiveApplicationResultResponse.application.applicationId.ToString()+".xlsx"
 $FinalReport | Export-Excel -Path $ReportPath -AutoSize -WorksheetName 'StockList'

}


