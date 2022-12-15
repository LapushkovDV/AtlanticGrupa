[Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12
$tokenPath = 'C:\Galaktika\_CRPT\Token\token.txt';


    $token = Get-Content -Path $tokenPath
    $headers = @{ Authorization = "Bearer $token"
               #Host = "markirovka.crpt.ru"
                ContentType ="application / json"
    }
    $response = $null
    try
    {
     $response = Invoke-WebRequest  -Uri "https://markirovka.crpt.ru/api/v3/true-api/cises/history?cis=0103838600041157215I4C8AEVDIV0E" -Method post -Headers $headers -ContentType "application/json" 

     $responseObject = ConvertFrom-Json $response.Content 
    }
    catch {
    $errorMessage = $_.Exception.Message
    if (Get-Member -InputObject $_.Exception -Name 'Response') {
        try {
            $result = $_.Exception.Response.GetResponseStream()
            $reader = New-Object System.IO.StreamReader($result)
            $reader.BaseStream.Position = 0
            $reader.DiscardBufferedData()
            $responseBody = $reader.ReadToEnd();
        } catch {
     #       Throw "An error occurred while calling REST method at: $url. Error: $errorMessage. Cannot get more information."
            $responseObject = $errorMessage
        }
    }
    #Throw "An error occurred while calling REST method at: $url. Error: $errorMessage. Response body: $responseBody"
    $responseObject = $responseBody

   }   
$filename = "c:\tmp\"+ $(Get-Date -format "yyyMMdd-HHmmss") + ".xlsx"
$responseObject | Export-Excel $filename -AutoSize
& $filename
