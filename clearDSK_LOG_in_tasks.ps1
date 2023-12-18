
$Path = @("C:\Galaktika\_CRPT_API_InfoToolsLoader\GALAKTIKATASKS\out\" # Path where the file is located
, "C:\Galaktika\_CRPT_PICKINGREPORT_IMPORT\galaktikatasks\out\"
, "C:\Galaktika\_EmailPaymentDate\GALAKTIKATASKS\out\"
, "C:\Galaktika\_ImportWMS\dmitry.lapushkov\out\"
, "C:\Galaktika\_RecalcSaldoMC\dmitry.lapushkov\out\"
)
$Days = "3" # Number of days before current date
 
#Calculate Cutoff date
$CutoffDate = (Get-Date).AddDays(-$Days)
 
#Get All Files modified more than the last days
foreach ($folder in $path){
 Get-ChildItem -Path $folder -Recurse -File | Where-Object { $_.LastWriteTime -lt $CutoffDate } | Remove-Item –Force -Verbose
}

