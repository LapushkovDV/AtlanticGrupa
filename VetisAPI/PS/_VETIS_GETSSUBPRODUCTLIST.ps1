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



# PROD
$circuitserviceID="mercury-g2b.service" 
$circuitendpointUrl="https://api.vetrf.ru/platform/services/2.1/ProductService" 
$circuitlogin="atlanticgrupa-180410"
$circuitpassword="F5jD7gn4Z" 
$circuitapiKey="N2ZhYTYxOTktMTJjZi00Yzc3LWE4OTAtODcxOWJlYmFmZTg2ZmRiYTdhZWYtMjE4YS0xMWUyLWE2OWItYjQ5OWJhYmFlN2Vh" 
$circuitissureId="fdba7aef-218a-11e2-a69b-b499babae7ea"
$circuitsysLogin="ordynec_el_200114"  
$circuitenterpriseGuid="9f0bca9c-d927-4676-8969-248b3e724701" 
$circuitbusinessEntityGuid ="fdba7aef-218a-11e2-a69b-b499babae7ea" 

$circuitCountTry           = 100
$circuitPause              = 5

$ReportPath = "C:\Galaktika\_Vetis_PS\RQST\"

[String]$GlobError
$GlobError = ''

$GUID_PRODUCTARRAY = @(
 "6a46be63-a23c-4ea9-97d5-c0b958c0cd90"
,"7a39b04c-2c50-4424-804c-8db590202560"
,"e964d42e-b4a9-48fc-b778-afeece1a2484"
)

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
Function GetResponse([string]$productGuid, [string]$offset)
{
 $template = @'
  <soapenv:Envelope 
                  xmlns:soapenv="http://schemas.xmlsoap.org/soap/envelope/" 
                  xmlns:ws="http://api.vetrf.ru/schema/cdm/registry/ws-definitions/v2"
                  xmlns:bs="http://api.vetrf.ru/schema/cdm/base"
                  xmlns:dt="http://api.vetrf.ru/schema/cdm/dictionary/v2">
                    <soapenv:Header/>
                    <soapenv:Body>
                      <ws:getSubProductByProductListRequest>
      	                 <bs:listOptions>
                            <bs:count>1000</bs:count>
                            <bs:offset>{0}</bs:offset>
                         </bs:listOptions>
                         <dt:productGuid>{1}</dt:productGuid>
                      </ws:getSubProductByProductListRequest>
                    </soapenv:Body>
                </soapenv:Envelope>
'@

#            webRequest.Credentials = credentials;

$fnc_RqstBody = $template -f $offset, $productGuid


[xml] $XmlPrepare = $fnc_RqstBody

$response = GetDataFromWeb -fnXML $XmlPrepare -URL $circuitendpointUrl
  
    If ( ($response.StatusCode -eq 200) -and ($response -ne $null))
    {
     $response.content
    }
    else
    {
     $null
    }
}

foreach($GUID_PRODUCT in $GUID_PRODUCTARRAY)
{
    [xml]$stockEntryElementList = $null
    [int]$npp = 0
     write-host "Запрос GETPSUBRODUCTLIST. Отправка запроса GETPSUBRODUCTLIST " $NPP.ToString()  -ForegroundColor Green
    [xml]$stockEntryElementList = GetResponse -productGuid $GUID_PRODUCT -offset $npp.ToString()
    [System.Collections.ArrayList] $FinalReport = @();
    while ($stockEntryElementList -ne $null)
    {  

        foreach($subProduct in $stockEntryElementList.Envelope.Body.getSubProductByProductListResponse.subProductList.subProduct)
        {
          $item = New-Object PSObject
          $item | Add-Member -type NoteProperty -Name "GUID_PRODUCT" -Value  $GUID_PRODUCT;
          $item | Add-Member -type NoteProperty -Name "Глобальный идентификатор вида продукции" -Value  $subProduct.Guid;
          $item | Add-Member -type NoteProperty -Name "Активная" -Value  $subProduct.Active;
          $item | Add-Member -type NoteProperty -Name "Название вида продукции" -Value  $subProduct.Name;
          $item | Add-Member -type NoteProperty -Name "Код ТН ВЭД вида продукции" -Value  $subProduct.Code;
          write-host $subproduct.Name  -ForegroundColor Cyan
          $FinalReport +=,$item
        }
     [int]$npp = $npp + 1000
     write-host "Запрос GETPSUBRODUCTLIST. Отправка запроса GETPSUBRODUCTLIST " $NPP.ToString()  -ForegroundColor Green
     [xml]$stockEntryElementList = GetResponse -productGuid $GUID_PRODUCT -offset $npp.ToString()
    }
}
