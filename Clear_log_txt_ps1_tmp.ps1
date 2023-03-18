$limit = (Get-Date).AddDays(-30)
$paths = @("C:\Gal_ABM_tmp\"
,"C:\Galaktika\_CRPT"
,"C:\Galaktika\_CRPT_API_InfoToolsLoader"
,"C:\Galaktika\_CRPT_PICKINGREPORT_IMPORT"
,"C:\Galaktika\_EmailPaymentDate"
,"C:\Galaktika\_helpDesk"
,"C:\Galaktika\_ImportWMS"
,"C:\Galaktika\_LoadOrder"
,"C:\Galaktika\_Mercury"
,"C:\Galaktika\_PraData"
,"C:\Galaktika\_RecalcSaldoMC"
,"C:\Galaktika\_tempGalTasks"
)

# Delete files older than the $limit.
foreach($path in $paths) {
  Get-ChildItem -Path $path -Recurse -Force -Include *.log,*.ps1,*.txt,*.tmp | Where-Object { !$_.PSIsContainer -and $_.LastWriteTime -lt $limit }  | Remove-Item -Force
  }

