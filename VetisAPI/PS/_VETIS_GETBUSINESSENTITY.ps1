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
$circuitendpointUrl        = "https://api2.vetrf.ru:8002/platform/services/2.1/EnterpriseService" 
$circuitlogin              = "atlanticgrupa-180401"
$circuitpassword           = "Gi95LgXm4" 
$circuitapiKey             = "NTI5OTE1ZDUtNGY2MC00YzZmLTkxNjktYmNkY2ViZTg2Y2YzZmRiYTdhZWYtMjE4YS0xMWUyLWE2OWItYjQ5OWJhYmFlN2Vh" 
$circuitissureId           = "fdba7aef-218a-11e2-a69b-b499babae7ea"
$circuitsysLogin           = "topolov_ns_190626"  
$circuitenterpriseGuid     = "a251c4dd-3b79-4088-9787-51c77bc7ab71" 
$circuitbusinessEntityGuid = "fdba7aef-218a-11e2-a69b-b499babae7ea"


# PROD
$circuitserviceID="mercury-g2b.service" 
$circuitendpointUrl="https://api.vetrf.ru/platform/services/2.1/EnterpriseService" 
$circuitlogin="atlanticgrupa-180410"
$circuitpassword="F5jD7gn4Z" 
$circuitapiKey="N2ZhYTYxOTktMTJjZi00Yzc3LWE4OTAtODcxOWJlYmFmZTg2ZmRiYTdhZWYtMjE4YS0xMWUyLWE2OWItYjQ5OWJhYmFlN2Vh" 
$circuitissureId="fdba7aef-218a-11e2-a69b-b499babae7ea"
$circuitsysLogin="ordynec_el_200114"  
$circuitenterpriseGuid="9f0bca9c-d927-4676-8969-248b3e724701" 
$circuitbusinessEntityGuid ="fdba7aef-218a-11e2-a69b-b499babae7ea" 

$circuitCountTry           = 70
$circuitPause              = 5


[String]$GlobError
$GlobError = ''

$INN = "23120103045"
$ReportPath = "C:\Galaktika\_Vetis_PS\RQST\GETBUSINESSENTITY$INN.xlsx"

Function GetDataFromWeb([xml]$fnXML, [string]$URL)
{

$headers = @{}
$headers.add("SOAPAction","GetResponse")
$headers.add("Accept","text/xml")
$resultValue = $null
$credentials = New-Object System.Management.Automation.PSCredential -ArgumentList @($circuitlogin,(ConvertTo-SecureString -String $circuitpassword -AsPlainText -Force))
#write-host "try Invoke-WebRequest"
   try
    {
     $resultValue = Invoke-WebRequest -URI $URL -Headers $headers -Method Post -Body $fnXML -ContentType 'text/xml;charset="utf-8"' -Credential $credentials -UseBasicParsing
    # write-host "Invoke-WebRequest OK"
    }
    catch
    {
     # write-host "Invoke-WebRequest error"
      $GlobError = $error[0].ToString()
      #write-host $error[0].ToString()
    }  
    #write-host $resultValue
 $resultValue
}
Function GetResponse()
{
 $template = @'
<soapenv:Envelope xmlns:soapenv="http://schemas.xmlsoap.org/soap/envelope/" 
  xmlns:ws="http://api.vetrf.ru/schema/cdm/registry/ws-definitions/v2" 
  xmlns:bs="http://api.vetrf.ru/schema/cdm/base" 
  xmlns:dt="http://api.vetrf.ru/schema/cdm/dictionary/v2">
   <soapenv:Header/>
   <soapenv:Body>
      <ws:getBusinessEntityListRequest>
         <dt:businessEntity>
            <dt:inn>{0}</dt:inn>
         </dt:businessEntity>
      </ws:getBusinessEntityListRequest>
   </soapenv:Body>
</soapenv:Envelope>

'@

#            webRequest.Credentials = credentials;

$fnc_RqstBody = $template -f $INN

[xml] $XmlPrepare = $fnc_RqstBody

$response = GetDataFromWeb -fnXML $XmlPrepare -URL $circuitendpointUrl
     #write-host $response.content
  
    If ( ($response.StatusCode -eq 200) -and ($response -ne $null))
    {
     #$response.content
     #write-host $response.content
     #$XmlResponse.GetElementsByTagName('applicationId').Item(0).FirstChild.data
     $response.content
    }
    else
    {
     $null
    }
}
$Response = GetResponse{}

if ($Response -ne $null)
{
[xml] $XmlResponse = $Response
[System.Collections.ArrayList] $FinalReport = @();
if ($XmlResponse.Envelope.Body.getBusinessEntityListResponse.businessEntityList.count -ne 0)
{
foreach($businessEntity in $XmlResponse.Envelope.Body.getBusinessEntityListResponse.businessEntityList.businessEntity)
 {
    $item = New-Object PSObject
    # для вставки в основную таблицу
    $item | Add-Member -type NoteProperty -Name 'uuid' -Value $businessEntity.uuid
    $item | Add-Member -type NoteProperty -Name 'guid' -Value $businessEntity.guid
    $item | Add-Member -type NoteProperty -Name 'active' -Value $businessEntity.active
    $item | Add-Member -type NoteProperty -Name 'name' -Value $businessEntity.name
    $item | Add-Member -type NoteProperty -Name 'Fullname' -Value $businessEntity.Fullname
#$XmlResponse.Envelope.Body.getBusinessEntityListResponse.businessEntityList.businessEntity.incorporationForm.name
    $item | Add-Member -type NoteProperty -Name 'inn' -Value $businessEntity.inn
    $item | Add-Member -type NoteProperty -Name 'kpp' -Value $businessEntity.kpp
    $item | Add-Member -type NoteProperty -Name 'ogrn' -Value $businessEntity.ogrn
#$XmlResponse.Envelope.Body.getBusinessEntityListResponse.businessEntityList.businessEntity.juridicalAddress.country.name
#$XmlResponse.Envelope.Body.getBusinessEntityListResponse.businessEntityList.businessEntity.juridicalAddress.region.name
#$XmlResponse.Envelope.Body.getBusinessEntityListResponse.businessEntityList.businessEntity.juridicalAddress.locality.name
#$XmlResponse.Envelope.Body.getBusinessEntityListResponse.businessEntityList.businessEntity.juridicalAddress.street.name
#$XmlResponse.Envelope.Body.getBusinessEntityListResponse.businessEntityList.businessEntity.juridicalAddress.house
#$XmlResponse.Envelope.Body.getBusinessEntityListResponse.businessEntityList.businessEntity.juridicalAddress.building
#$XmlResponse.Envelope.Body.getBusinessEntityListResponse.businessEntityList.businessEntity.juridicalAddress.room
#$XmlResponse.Envelope.Body.getBusinessEntityListResponse.businessEntityList.businessEntity.juridicalAddress.postIndex
    $item | Add-Member -type NoteProperty -Name 'addressView' -Value $businessEntity.juridicalAddress.addressView
    $FinalReport +=,$item
    write-host "++99"
  }

 write-host "Запрос стока. Выгрузка в EXCEL" -ForegroundColor Green
 
 $FinalReport | Export-Excel -Path $ReportPath -AutoSize -WorksheetName 'StockList'
 }
}