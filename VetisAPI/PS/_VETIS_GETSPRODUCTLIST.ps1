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
$circuitendpointUrl        = "https://api2.vetrf.ru:8002/platform/services/2.1/ProductService" 
$circuitlogin              = "atlanticgrupa-180401"
$circuitpassword           = "Gi95LgXm4" 
$circuitapiKey             = "NTI5OTE1ZDUtNGY2MC00YzZmLTkxNjktYmNkY2ViZTg2Y2YzZmRiYTdhZWYtMjE4YS0xMWUyLWE2OWItYjQ5OWJhYmFlN2Vh" 
$circuitissureId           = "fdba7aef-218a-11e2-a69b-b499babae7ea"
$circuitsysLogin           = "topolov_ns_190626"  
$circuitenterpriseGuid     = "a251c4dd-3b79-4088-9787-51c77bc7ab71" 
$circuitbusinessEntityGuid = "fdba7aef-218a-11e2-a69b-b499babae7ea"


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
                xmlns:soapenv="http://schemas.xmlsoap.org/soap/envelope/" 
                xmlns:ws="http://api.vetrf.ru/schema/cdm/registry/ws-definitions/v2" 
                xmlns:bs="http://api.vetrf.ru/schema/cdm/base" 
                xmlns:dt="http://api.vetrf.ru/schema/cdm/dictionary/v2">		
             <soapenv:Header/>
               <soapenv:Body>
                  <ws:getProductItemListRequest>
                  <dt:businessEntity>
                  <bs:guid>{0}</bs:guid>
                  </dt:businessEntity>
                  </ws:getProductItemListRequest>
               </soapenv:Body>
            </soapenv:Envelope>
'@

#            webRequest.Credentials = credentials;

$fnc_RqstBody = $template -f $circuitbusinessEntityGuid


[xml] $XmlPrepare = $fnc_RqstBody

$response = GetDataFromWeb -fnXML $XmlPrepare -URL $circuitendpointUrl
  
    If ( ($response.StatusCode -eq 200) -and ($response -ne $null))
    {    
     #write-host $response.content
     $response.Content
    }
    else
    {
     $null
    }
}


[xml]$stockEntryElementList = $null


 write-host "Запрос GetProductLIst. Отправка запроса"  -ForegroundColor Green
[xml]$stockEntryElementList = GetResponse


if ($stockEntryElementList -ne $null)
{
 if ($stockEntryElementList.Envelope.Body.getProductItemListResponse.productItemList.count -ne 0)
  {
   [System.Collections.ArrayList] $FinalReport = @();

   write-host "Запрос GetProductLIst. Разбор XML ответа"  -ForegroundColor Green


    foreach($productItem in $stockEntryElementList.Envelope.Body.getProductItemListResponse.productItemList.productItem)
    {

     $item = New-Object PSObject
     $item | Add-Member -type NoteProperty -Name "Глобальный идентификатор номенклатуры" -value $productItem.Guid;
     $item | Add-Member -type NoteProperty -Name "Активная" -value $productItem.Active;
     $item | Add-Member -type NoteProperty -Name "Trade Identification Number (GTIN)" -value $productItem.GlobalID;
     $item | Add-Member -type NoteProperty -Name "Наименование продукции" -value $productItem.Name;
     $item | Add-Member -type NoteProperty -Name "Артикул" -value $productItem.Code;
     $item | Add-Member -type NoteProperty -Name "Тип продукции" -value $productItem.ProductType;
     $item | Add-Member -type NoteProperty -Name "Глобальный идентификатор продукции" -value $productItem.Product.Guid;
     $item | Add-Member -type NoteProperty -Name "Глобальный идентификатор вида продукции"  -value $productItem.SubProduct.Guid;
     $item | Add-Member -type NoteProperty -Name "Глобальный идентификатор упаковки" -value $productItem.Packaging.PackagingType.Guid;
     $item | Add-Member -type NoteProperty -Name "Количество единиц упаковки"  -value $productItem.Packaging.Quantity;
     $item | Add-Member -type NoteProperty -Name "Объём единицы упаковки товара"  -value $productItem.Packaging.Volume;
     $item | Add-Member -type NoteProperty -Name "Глобальный идентификатор еиницы измерения" -value $productItem.Packaging.Unit.Guid;
     write-host $productItem.Name -ForegroundColor Cyan
     $FinalReport +=,$item     
    }

 write-host "Запрос GetProductLIst. Выгрузка в EXCEL" -ForegroundColor Green
 $ReportPath = $ReportPath+"GetProductLIst_.xlsx"
 $FinalReport | Export-Excel -Path $ReportPath -AutoSize
}
}


