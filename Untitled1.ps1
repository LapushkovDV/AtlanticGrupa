Import-Module RemoteDesktopServices
$sessions = Get-RDUserSession -ConnectionBroker  -CollectionName "Gal_TS"


#$users = Get-Process -IncludeUserName | ? {$_.ProcessName -eq "atlexec"} | % {$_.ProcessNa_.ProcessName -eq "atlexec"} | % {$_.UserName.Split("\\")[1]}
#write-host $users
#Get-RDUserSession -ConnectionBroker dep968-terminal.cb.npo -CollectionName "Galaktika" | ? {$users -eq $_.UserName} | Invoke-RDUserLogoff -Force

for($i = 0; $i -le $sessions.count -1;$i =$i+1 )
{
#Invoke-RDUserLogoff -UnifiedSessionID  $sessions.UnifiedSessionID[$i] -hostserver $sessions.hostserver[$i] -force
Write-Host $sessions.username[$i] $sessions.UnifiedSessionID[$i]
}


