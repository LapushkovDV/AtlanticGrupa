
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
$circuitendpointUrl        = "https://api2.vetrf.ru:8002/platform/services/2.1/ApplicationManagementService"
$circuitlogin              = "atlanticgrupa-180401"
$circuitpassword           = "Gi95LgXm4"
$circuitapiKey             = "NTI5OTE1ZDUtNGY2MC00YzZmLTkxNjktYmNkY2ViZTg2Y2YzZmRiYTdhZWYtMjE4YS0xMWUyLWE2OWItYjQ5OWJhYmFlN2Vh"
$circuitissureId           = "fdba7aef-218a-11e2-a69b-b499babae7ea"
$circuitsysLogin           = "topolov_ns_190626"
$circuitenterpriseGuid     = "a251c4dd-3b79-4088-9787-51c77bc7ab71"
$circuitbusinessEntityGuid = "fdba7aef-218a-11e2-a69b-b499babae7ea"


<# PROD
$circuitserviceID="mercury-g2b.service"
$circuitendpointUrl="https://api.vetrf.ru/platform/services/2.1/ApplicationManagementService"
$circuitlogin="atlanticgrupa-180410"
$circuitpassword="F5jD7gn4Z"
$circuitapiKey="N2ZhYTYxOTktMTJjZi00Yzc3LWE4OTAtODcxOWJlYmFmZTg2ZmRiYTdhZWYtMjE4YS0xMWUyLWE2OWItYjQ5OWJhYmFlN2Vh"
$circuitissureId="fdba7aef-218a-11e2-a69b-b499babae7ea"
$circuitsysLogin="ordynec_el_200114"
$circuitenterpriseGuid="9f0bca9c-d927-4676-8969-248b3e724701"
$circuitbusinessEntityGuid ="fdba7aef-218a-11e2-a69b-b499babae7ea"
#>
$circuitCountTry           = 100
$circuitPause              = 3

$StockUUID             = 'f2a8fca2-a608-48cf-bfe2-986a700535a'
$productType           = '5'
$ProductGuid           = 'e3bdc46d-707a-a75c-33f6-c280c162927f'
$subProductGuid        = 'acca0e11-2c9a-c180-f1e4-446c33d8b746'
$productItemGlobalGUID = '3838975566811'
$productItemNAME       = 'Паштет "Argeta" Junior куриный 95г.'
$volume                = '13680'
$UnitGuid              = '21ed96c9-337b-4a27-8761-c6e6ad3c9f5b'
$FirstDateYear         = '2019'
$FirstDateMonth        = '5'
$FirstDateDay          = '16'
$ExpiryDateYear        = '2022'
$ExpiryDateMonth       = '6'
$ExpiryDateDay         = '16'
$batchID               = '220516'
$perishable            = 'false'
$countryGUID           = '36ab2a92-058c-b2cf-5fc0-5a9659c23b4e'
$producerGUID          = 'f8356553-f1af-3603-13be-b0a8f0b95578'
$producerROLE          = 'PRODUCER'
$LowGradeCargo         = 'false'
$packageLevel4         = '4'
$packingTypeGUID4      = 'fedf4328-053c-11e1-99b4-d8d385fbc9e8'
$Quantity4             = '1200'
$EAN4128               = '(01)03838471028264(11)190516(10)220516'
$EAN413                = '3838471028264'
$packageLevel2         = '2'
$packingTypeGUID2      = 'fedf422e-053c-11e1-99b4-d8d385fbc9e8'
$Quantity2             = '1444'
$EAN213                = '3838471028264'
$ReasonName            = 'Сопоставление фактически имеющейся продукции с учетными данными (выявление отклонений)'


$ReportPath = "C:\Galaktika\_Vetis_PS\RQST\"

[String]$GlobError
$GlobError = ''

function ToUTF8([string]$strSRC)
{
 $defaultEncoding = [System.Text.Encoding]::GetEncoding('ISO-8859-1')
 $value = $strSRC
 $utf8Bytes = [System.Text.Encoding]::UTf8.GetBytes($value)
 $defaultEncoding.GetString($utf8bytes)
}

Function GetDataFromWeb([xml]$fnXML, [string]$URL)
{

#write-host $URL

#write-host $fnXML.FirstChild.dt

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
<SOAP-ENV:Envelope xmlns:dt="http://api.vetrf.ru/schema/cdm/dictionary/v2" xmlns:bs="http://api.vetrf.ru/schema/cdm/base" xmlns:merc="http://api.vetrf.ru/schema/cdm/mercury/g2b/applications/v2" xmlns:apldef="http://api.vetrf.ru/schema/cdm/application/ws-definitions" xmlns:apl="http://api.vetrf.ru/schema/cdm/application" xmlns:vd="http://api.vetrf.ru/schema/cdm/mercury/vet-document/v2" xmlns:SOAP-ENV="http://schemas.xmlsoap.org/soap/envelope/">
<SOAP-ENV:Header/>
<SOAP-ENV:Body>
<apldef:submitApplicationRequest>
<apldef:apiKey>{0}</apldef:apiKey>
<apl:application>
<apl:serviceId>{1}</apl:serviceId>
<apl:issuerId>{2}</apl:issuerId>
<apl:issueDate>2020-01-22T10:29:49+03:00</apl:issueDate>
<apl:data>
<merc:resolveDiscrepancyRequest>
<merc:localTransactionId>transaction123456_lap</merc:localTransactionId>
<merc:initiator>
<vd:login>{3}</vd:login>
</merc:initiator>
<merc:enterprise>
<bs:guid>{4}</bs:guid>
</merc:enterprise>
<merc:inventoryDate>2020-01-22T10:29:49+03:00</merc:inventoryDate>
<merc:responsible>
<vd:login>{3}</vd:login>
</merc:responsible>
<merc:stockDiscrepancy id="inventory">
<vd:resultingList>
<vd:stockEntry>
<bs:uuid>{5}</bs:uuid>
<vd:batch>
<vd:productType>{6}</vd:productType>
<vd:product>
<bs:guid>{7}</bs:guid>
</vd:product>
<vd:subProduct>
<bs:guid>{8}</bs:guid>
</vd:subProduct>
<vd:productItem>
<dt:globalID>{9}</dt:globalID>
<dt:name>{10}</dt:name>
</vd:productItem>
<vd:volume>{11}</vd:volume>
<vd:unit>
<bs:guid>{12}</bs:guid>
</vd:unit>
<vd:dateOfProduction>
<vd:firstDate>
<dt:year>{13}</dt:year>
<dt:month>{14}</dt:month>
<dt:day>{15}</dt:day>
</vd:firstDate>
</vd:dateOfProduction>
<vd:expiryDate>
<vd:firstDate>
<dt:year>{16}</dt:year>
<dt:month>{17}</dt:month>
<dt:day>{18}</dt:day>
</vd:firstDate>
</vd:expiryDate>
<vd:batchID>{19}</vd:batchID>
<vd:perishable>{20}</vd:perishable>
<vd:origin>
<vd:productItem>
<dt:globalID>{9}</dt:globalID>
<dt:name>{10}</dt:name>
</vd:productItem>
<vd:country>
<bs:guid>{21}</bs:guid>
</vd:country>
<vd:producer>
<dt:enterprise>
<bs:guid>{22}</bs:guid>
</dt:enterprise>
<dt:role>{23}</dt:role>
</vd:producer>
</vd:origin>
<vd:lowGradeCargo>{24}</vd:lowGradeCargo>
<vd:packageList>
<dt:package>
<dt:level>{25}</dt:level>
<dt:packingType>
<bs:guid>{26}</bs:guid>
</dt:packingType>
<dt:quantity>{27}</dt:quantity>
<dt:productMarks class="EAN128">{28}</dt:productMarks>
<dt:productMarks class="EAN13">{29}</dt:productMarks>
</dt:package>
<dt:package>
<dt:level>{30}</dt:level>
<dt:packingType>
<bs:guid>{31}</bs:guid>
</dt:packingType>
<dt:quantity>{32}</dt:quantity>
<dt:productMarks class="EAN13">{33}</dt:productMarks>
</dt:package>
</vd:packageList>
</vd:batch>
</vd:stockEntry>
 </vd:resultingList>
</merc:stockDiscrepancy>
<merc:discrepancyReport for="inventory">
<vd:reason>
<vd:name>{34}</vd:name>
</vd:reason>
</merc:discrepancyReport>
</merc:resolveDiscrepancyRequest>
</apl:data>
</apl:application>
</apldef:submitApplicationRequest>
</SOAP-ENV:Body>
</SOAP-ENV:Envelope>
'@

#            webRequest.Credentials = credentials;

$fnc_RqstBody = $template -f  $circuitapiKey, $circuitserviceID, $circuitissureId, $circuitsysLogin, $circuitenterpriseGuid`
                            , $StockUUID, $productType, $ProductGuid, $subProductGuid, $productItemGlobalGUID`
                            , $productItemNAME,$volume, $UnitGuid, $FirstDateYear, $FirstDateMonth, $FirstDateDay`
                            , $ExpiryDateYear, $ExpiryDateMonth, $ExpiryDateDay,$batchID, $perishable, $countryGUID`
                            , $producerGUID, $producerROLE, $LowGradeCargo, $packageLevel4, $packingTypeGUID4,$Quantity4`
                            , $EAN4128, $EAN413, $packageLevel2, $packingTypeGUID2, $Quantity2, $EAN213, $ReasonName


#$enc = [System.Text.Encoding]::Default.GetBytes($fnc_RqstBody)
#$fnc_RqstBody = [System.Text.Encoding]::utf8.GetString($enc)
$fnc_RqstBody = ToUTF8 -strSRC $fnc_RqstBody



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
    if ($currentStatus -eq 'REJECTED')
      {
       $isContinue = $false
       $result = $null
       if ($XmlResponse.Envelope.Body.receiveApplicationResultResponse.application.errors.error.'#text' -ne $null)
       {
        write-host $XmlResponse.Envelope.Body.receiveApplicationResultResponse.application.errors.error.'#text' -ForegroundColor Red
       }
       else
        {
         write-host 'Запрос отклонен' -ForegroundColor Red
        }
       Wait-Event -Timeout 5
      }
    }
    else
    {
     $null
    }
    #write-host "try number $CountTRy of $circuitCountTry | Curent state: $currentStatus"
    write-host "Запрос Discrepancy. Прослушивание ответа API. Запрос $CountTRy из $circuitCountTry. Получен ответ: $currentStatus"  -ForegroundColor Green
    if ($circuitCountTry -lt $CountTRy )
     {
      $isContinue = $false
     }
  }
 $result
}
[xml]$stockEntryElementList = $null
 write-host "Запрос Discrepancy. Отправка запроса Application ID"  -ForegroundColor Green
$requestAplId = GetResponse
write-host "Запрос Discrepancy. Application ID = " $requestAplId  -ForegroundColor Green

if ($GlobError -eq '')
{
 write-host "Запрос Discrepancy. Прослушивание ответа API"  -ForegroundColor Green
 $stockEntryElementList = RecieveApplRqst($requestAplId)

}
else
{
 $GlobError
}

 $FinalReport  = $null
if ($stockEntryElementList -ne $null)
{

    #$stockEntryElementList.save("C:\Users\lapus\OneDrive\Desktop\_WORK\stockEntryElementList.xml")

    #$stockEntryElementList.GetElementsByTagName('application')
    #$stockEntryElementList.GetElementsByTagName('result')
   write-host "Запрос Discrepancy. Разбор XML ответа"  -ForegroundColor Green

#    $ns = new-object Xml.XmlNamespaceManager $stockEntryElementList.NameTable
#    $ns.AddNamespace("soap", $stockEntryElementList.DocumentElement.NamespaceURI)
#    $ns.AddNamespace("vd", $stockEntryElementList.DocumentElement.NamespaceURI)
#    $ns.AddNamespace("ns1", $stockEntryElementList.DocumentElement.NamespaceURI)
#    $ns.AddNamespace("dt", $stockEntryElementList.DocumentElement.NamespaceURI)
#    $ns.AddNamespace("bs", $stockEntryElementList.DocumentElement.NamespaceURI)
#    $stockEntryElementList.SelectNodes("//soap:Envelope/soap:Body", $ns)
#    $stockEntryElementList.SelectNodes("//soap:Envelope/soap:Body/ns1:getStockEntryListResponse", $ns)



    # пошлда спецификация


    foreach($stockEntry in $stockEntryElementList.Envelope.Body.receiveApplicationResultResponse.application.result.resolveDiscrepancyResponse.stockEntryList.stockEntry)
    {
    $item = New-Object PSObject
    # для вставки в основную таблицу
    $item | Add-Member -type NoteProperty -Name 'APPLICATIONID' -Value $stockEntryElementList.Envelope.Body.receiveApplicationResultResponse.application.applicationId.ToString() #APPLICATIONID
    $item | Add-Member -type NoteProperty -Name 'REQUESTSTATUS' -Value $stockEntryElementList.Envelope.Body.receiveApplicationResultResponse.application.status.ToString()        #REQUESTSTATUS

    #$stockEntry
    #$stockEntry.batch
    #$stockEntry.batch.product

    $item | Add-Member -type NoteProperty -Name 'UUID записи складского журнала' -value $stockEntry.uuid                    #
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

 write-host "Запрос Discrepancy. Выгрузка в EXCEL" -ForegroundColor Green
 $ReportPath = $ReportPath+"Discrepacy_TEST_"+$stockEntryElementList.Envelope.Body.receiveApplicationResultResponse.application.applicationId.ToString()+".xlsx"
 $FinalReport | Export-Excel -Path $ReportPath -AutoSize

}





# a
