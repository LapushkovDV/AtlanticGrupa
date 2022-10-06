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

# TEST
$circuitServiceID          = "mercury-g2b.service" 
$circuitendpointUrl        = "https://api2.vetrf.ru:8002/platform/services/2.1/ApplicationManagementService" 
$circuitlogin              = "atlanticgrupa-180401"
$circuitpassword           = "Gi95LgXm4" 
$circuitapiKey             = "NTI5OTE1ZDUtNGY2MC00YzZmLTkxNjktYmNkY2ViZTg2Y2YzZmRiYTdhZWYtMjE4YS0xMWUyLWE2OWItYjQ5OWJhYmFlN2Vh" 
$circuitissureId           = "fdba7aef-218a-11e2-a69b-b499babae7ea"
$circuitsysLogin           = "topolov_ns_190626"  
$circuitenterpriseGuid     = "a251c4dd-3b79-4088-9787-51c77bc7ab71" 
$circuitbusinessEntityGuid = "fdba7aef-218a-11e2-a69b-b499babae7ea"


# PROD
$circuitserviceID="mercury-g2b.service" 
$circuitendpointUrl="https://api.vetrf.ru/platform/services/2.1/ApplicationManagementService"
$circuitlogin="atlanticgrupa-180410"
$circuitpassword="F5jD7gn4Z" 
$circuitapiKey="N2ZhYTYxOTktMTJjZi00Yzc3LWE4OTAtODcxOWJlYmFmZTg2ZmRiYTdhZWYtMjE4YS0xMWUyLWE2OWItYjQ5OWJhYmFlN2Vh" 
$circuitissureId="fdba7aef-218a-11e2-a69b-b499babae7ea"
$circuitsysLogin="ordynec_el_200114"  
$circuitenterpriseGuid="9f0bca9c-d927-4676-8969-248b3e724701" 
$circuitbusinessEntityGuid ="fdba7aef-218a-11e2-a69b-b499babae7ea" 

$circuitCountTry           = 70
$circuitPause              = 5

$ReportPath = "D:\_\ATL\VetisAPI\temp\RQST\"
$fileLog =    "D:\_\ATL\VetisAPI\temp\VetisAPI_GetStockList_20200517_151601.log"
$conStrinGal  = 'Server=STEND-ERPDB\ERP;Database=ERPDB_STEND;Trusted_Connection=True;'

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
<SOAP-ENV:Envelope xmlns:dt="http://api.vetrf.ru/schema/cdm/dictionary/v2" 
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
                            <apl:issueDate>2019-12-12T09:00:00+03:00</apl:issueDate>
                            <apl:data>
                                  <merc:getVetDocumentListRequest>
                                    <merc:localTransactionId>a110f03</merc:localTransactionId>
                                    <merc:initiator>
                                      <vd:login>{3}</vd:login>
                                    </merc:initiator>
                                    <bs:listOptions>
                                    <bs:count>1000</bs:count>
                                    </bs:listOptions>
                                     <vd:vetDocumentType>TRANSPORT</vd:vetDocumentType>
                                     <vd:issueDateInterval>
                                        <bs:beginDate>2020-09-01T00:00:00+03:00</bs:beginDate>
                                        <bs:endDate>2020-09-17T23:59:59+03:00</bs:endDate>
                                      </vd:issueDateInterval>
                                    <dt:enterpriseGuid>{4}</dt:enterpriseGuid>
                                  </merc:getVetDocumentListRequest>                              
        </apl:data>
      </apl:application>
    </apldef:submitApplicationRequest>
  </SOAP-ENV:Body>
</SOAP-ENV:Envelope>
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
    write-host "Запрос списка документов. Прослушивание ответа API. Запрос $CountTRy из $circuitCountTry. Получен ответ: $currentStatus"  -ForegroundColor Green
    if ($circuitCountTry -lt $CountTRy )
     {
      $isContinue = $false
     }
  }
 $result
}



[xml]$DocumentList = $null
 write-host "Запрос списка документов. Отправка запроса"  -ForegroundColor Green 
$requestAplId = GetResponse
if ($GlobError -eq '')
{
 write-host "Запрос списка документов. Прослушивание ответа API"  -ForegroundColor Green
 $DocumentList = RecieveApplRqst($requestAplId)

}
else
{
 $GlobError
}



#$DocumentList.Envelope.Body.receiveApplicationResultResponse.application.result.getVetDocumentListResponse.vetDocumentList

if ($DocumentList -ne $null)
{
[System.Collections.ArrayList] $FinalReport = @();
    #$stockEntryElementList.save("C:\Users\lapus\OneDrive\Desktop\_WORK\stockEntryElementList.xml")

    #$stockEntryElementList.GetElementsByTagName('application')
    #$stockEntryElementList.GetElementsByTagName('result')
   write-host "Запрос списка документов. Разбор XML ответа"  -ForegroundColor Green

#    $ns = new-object Xml.XmlNamespaceManager $stockEntryElementList.NameTable
#    $ns.AddNamespace("soap", $stockEntryElementList.DocumentElement.NamespaceURI)
#    $ns.AddNamespace("vd", $stockEntryElementList.DocumentElement.NamespaceURI)
#    $ns.AddNamespace("ns1", $stockEntryElementList.DocumentElement.NamespaceURI)
#    $ns.AddNamespace("dt", $stockEntryElementList.DocumentElement.NamespaceURI)
#    $ns.AddNamespace("bs", $stockEntryElementList.DocumentElement.NamespaceURI)
#    $stockEntryElementList.SelectNodes("//soap:Envelope/soap:Body", $ns)
#    $stockEntryElementList.SelectNodes("//soap:Envelope/soap:Body/ns1:getStockEntryListResponse", $ns)


    # пошлда спецификация
    foreach($Document in $DocumentList.Envelope.Body.receiveApplicationResultResponse.application.result.getVetDocumentListResponse.vetDocumentList.vetDocument)
    {
      $item = New-Object PSObject
     # для вставки в основную таблицу
      $item | Add-Member -type NoteProperty -Name "APPLICATIONID" -Value $DocumentList.Envelope.Body.receiveApplicationResultResponse.application.applicationId.tostring() #APPLICATIONID
      $item | Add-Member -type NoteProperty -Name "REQUESTSTATUS" -Value $DocumentList.Envelope.Body.receiveApplicationResultResponse.application.status.ToString()        #REQUESTSTATUS
  
      $item | Add-Member -type NoteProperty -Name "UUID ЭВСД" -value $Document.uuid       # UUID ЭВСД
      
      $item | Add-Member -type NoteProperty -Name "дата оформления ЭВСД" -value $Document.issueDate  # дата оформления ЭВСД

      $item | Add-Member -type NoteProperty -Name "Статус" -value $Document.vetDStatus # Статус

      $item | Add-Member -type NoteProperty -Name "consignee.businessEntity.guid" -value $Document.certifiedConsignment.consignee.businessEntity.guid # consignee.businessEntity.guid // щначением атрибута VETIS_BusinessEntity, выводим НЕТОЧНО + "Наименование клиента"
      $item | Add-Member -type NoteProperty -Name "consignee.enterprise.guid" -value $Document.certifiedConsignment.consignee.enterprise.guid     # consignee.enterprise.guid     // внешнего атрибута VETIS_Enterprise совпадает
      $item | Add-Member -type NoteProperty -Name "Тип транспортного средства" -value $Document.certifiedConsignment.transportInfo.transportType   # Тип транспортного средства
      $item | Add-Member -type NoteProperty -Name "Автомобиль" -value $Document.certifiedConsignment.transportInfo.transportNumber.vehicleNumber # Автомобиль
      $item | Add-Member -type NoteProperty -Name "Наименование продукции" -value $Document.certifiedConsignment.batch.productItem.name        # Наименование продукции
      $item | Add-Member -type NoteProperty -Name "Объем" -value $Document.certifiedConsignment.batch.volume                  # Объем
      $item | Add-Member -type NoteProperty -Name "Единица объема" -value $Document.certifiedConsignment.batch.unit.guid               # Единица объема

      $YEAR  = $Document.certifiedConsignment.batch.dateOfProduction.firstDate.year
      $MONTH = $Document.certifiedConsignment.batch.dateOfProduction.firstDate.month 
      $DAY   = $Document.certifiedConsignment.batch.dateOfProduction.firstDate.day
      $DataProizv = Get-Date -Year $YEAR -Month $MONTH -Day $DAY -Hour 0 -Minute 0 -Second 0
      $item | Add-Member -type NoteProperty -Name "Дата производства" -value $($DataProizv.tostring("dd.MM.yyyy")) # Дата производства
            
      $YEAR  = $Document.certifiedConsignment.batch.expiryDate.firstDate.year         # Срок годности 
      $MONTH = $Document.certifiedConsignment.batch.expiryDate.firstDate.month        # Срок годности 
      $DAY   = $Document.certifiedConsignment.batch.expiryDate.firstDate.day          # Срок годности
      $DataProizv = Get-Date -Year $YEAR -Month $MONTH -Day $DAY -Hour 0 -Minute 0 -Second 0
      $item | Add-Member -type NoteProperty -Name "Срок годности" -value $($DataProizv.tostring("dd.MM.yyyy")) # Срок годности

      $item | Add-Member -type NoteProperty -Name "batchID" -value $Document.certifiedConsignment.batch.batchID       # batchID
      foreach($package in $Document.certifiedConsignment.batch.packageList.package)
       {
        if ($Package.level -eq 2) # Уровень	2
         {
          $item | Add-Member -type NoteProperty -Name "Уровень упаковки(2)" -value $package.level                 # "Уровень упаковки(2)"
          $item | Add-Member -type NoteProperty -Name "Идентификатор упаковки(2)" -value $package.packingType.globalID  # "Идентификатор упаковки(2)"
          $item | Add-Member -type NoteProperty -Name "Количество штук" -value $package.quantity              # "Количество штук"

            foreach($productMark in  $package.productMarks)
             {
              if ($ProductMarks.Class -eq "EAN13")
               {
                #$productMark.class
                $item | Add-Member -type NoteProperty -Name "EAN13(2)" -value $productMark.'#text'  #"EAN13(2)"
               }
             }
         }

        if ($Package.level -eq 4) # Уровень	4
         {
          $item | Add-Member -type NoteProperty -Name "Уровень упаковки(4)" -value $package.level                 # "Уровень упаковки(4)"
          $item | Add-Member -type NoteProperty -Name "Идентификатор упаковки(4)" -value $package.packingType.globalID  # "Идентификатор упаковки(4)"
          $item | Add-Member -type NoteProperty -Name "Количество коробок" -value $package.quantity              # "Количество коробок"

            foreach($productMark in  $package.productMarks)
             {
              if ($ProductMarks.Class -eq "EAN13")
               {
                #$productMark.class
                $item | Add-Member -type NoteProperty -Name "EAN13(4)" -value $productMark.'#text'  # "EAN13(4)"
               }
              if ($ProductMarks.Class -eq "EAN128")
               {
                $item | Add-Member -type NoteProperty -Name "EAN128(4)" -value $productMark.'#text' # "EAN128(4)"
               }
             }
         }

       }

    #  $Document.authentication
    #  $FinalReport +=,$item  
    [string]$nameField = ''
      foreach($referencedDocument in $Document.referencedDocument)
       {
       # в название колонки/описателя будем добавлять тип документа, перебирать тут из кейсом не хочу, лучше в коде на випе
        $nameField = 'referencedDocumentIssueNumber_'+$referencedDocument.issueNumber 
        $item | Add-Member -type NoteProperty -Name $nameField -value $referencedDocument.issueNumber  # referencedDocumentIssueNumber_*
        
        $nameField = 'referencedDocumentissueDate_'+$referencedDocument.issueNumber
        $item | Add-Member -type NoteProperty -Name $nameField -value $referencedDocument.issueDate    # referencedDocumentissueDate_*
        
        $nameField = 'referencedDocumentissuetype_'+$referencedDocument.issueNumber
        $item | Add-Member -type NoteProperty -Name $nameField -value $referencedDocument.type         # referencedDocumentissuetype_*   
        
        $nameField = 'referencedDocumentissuerelationshipType_'+$referencedDocument.cissueNumber
        $item | Add-Member -type NoteProperty -Name $nameField -value $referencedDocument.relationshipType # referencedDocumentissuerelationshipType_*
       }
     foreach($statusChange in $Document.statusChange)
     {
       # в название колонки/описателя будем добавлять статус, перебирать тут из кейсом не хочу, лучше в коде на випе
       $nameField = 'DocumentstatusChange.status_'+$statusChange.status
       $item | Add-Member -type NoteProperty -Name $nameField -value $statusChange.status              # DocumentstatusChange.status_*

       $nameField = 'DocumentstatusChange.specifiedPerson.fio_'+$statusChange.status
       $item | Add-Member -type NoteProperty -Name $nameField -value $statusChange.specifiedPerson.fio # DocumentstatusChange.specifiedPerson.fio_*

       $nameField = 'DocumentstatusChange.actualDateTime_'+$statusChange.status
       $item | Add-Member -type NoteProperty -Name $nameField -value $statusChange.actualDateTime      # DocumentstatusChange.actualDateTime_
     }

     write-host $Document.certifiedConsignment.batch.productItem.name -ForegroundColor Cyan
     Add-Content -Path $fileLog -Value $($(Get-Date).ToString("yyyy-MM-dd HH:mm:ss") + " "+ $Document.certifiedConsignment.batch.productItem.name) -Encoding Oem
     $FinalReport +=,$item      
    }

  write-host "Запрос стока. Выгрузка в EXCEL" -ForegroundColor Green
 $ReportPath = $ReportPath
 $FinalReport | Export-Excel -Path $ReportPath -AutoSize -WorksheetName "GetStockList"

 
 [int]$npp = 1
 write-host "Запрос стока. Запись в буферную таблицу" -ForegroundColor Green
 foreach($item in $FinalReport)
  {
   if([math]::Truncate($npp/7) -eq $npp/7)
    {
     write-host "Запись в буферную таблицу" $npp.tostring() " из " $FinalReport.Count.toString()  -ForegroundColor Cyan
     Add-Content -Path $fileLog -Value $($(Get-Date).ToString("yyyy-MM-dd HH:mm:ss") + " Запись в буферную таблицу" +$npp.tostring() +" из " +$FinalReport.Count.toString()) -Encoding Oem
    }
   foreach( $property in $item.psobject.properties.name )
    {
      if ($item.$property -eq $null)
        {
         $itemproperty = ""
        }
        else
         {
          $itemproperty = $item.$property
         }
      $sqlQuery = 'Insert t$ATL_RQSTAPIVALUES (f$RQST_GUID, f$RSQT_PROVIDER, f$NROW, f$COLUMNNAME, f$VALUE)
                   values ('''+$RQST_GUID+''','''+$circuitserviceID+''','+$npp.tostring()+','''+$property.Replace("'","''")+''','''+$itemproperty.Replace("'","''")+''')'

      $res = Invoke-DatabaseQuery -connectionString $conStrinGal -query $sqlQuery -isSQLServer
    }
    $npp = $npp + 1
  }
 Add-Content -Path $fileLog -Value $($(Get-Date).ToString("yyyy-MM-dd HH:mm:ss") + " Запись в буферную таблицу" +$($npp-1).tostring() +" из " +$FinalReport.Count.toString()) -Encoding Oem
}
