Set-ExecutionPolicy -Scope Process -ExecutionPolicy Unrestricted -Force
function Invoke-DatabaseQuery {
        [CmdletBinding()]
        param (
                [string]$connectionString,
                [string]$query,
                [switch]$isSQLServer
        )
        if ($isSQLServer) {
                Write-Verbose 'in SQL Server mode'
                $connection = New-Object -TypeName System.Data.SqlClient.SqlConnection
        } else {
                Write-Verbose 'in OleDB mode'
                $connection = New-Object -TypeName System.Data.OleDb.OleDbConnection
        }
        $connection.ConnectionString = $connectionString
        $command = $connection.CreateCommand()
        $command.CommandText = $query
        $connection.Open()
        $command.ExecuteNonQuery()
        $connection.close()
}

function Get-DatabaseData {
        [CmdletBinding()]
        param (
                [string]$connectionString,
                [string]$query,
                [switch]$isSQLServer
        )
        if ($isSQLServer) {
                Write-Verbose 'in SQL Server mode'
                $connection = New-Object -TypeName System.Data.SqlClient.SqlConnection
        } else {
                Write-Verbose 'in OleDB mode'
                $connection = New-Object -TypeName System.Data.OleDb.OleDbConnection
        }
        $connection.ConnectionString = $connectionString
        $command = $connection.CreateCommand()
        $command.CommandText = $query
        if ($isSQLServer) {
                $adapter = New-Object -TypeName System.Data.SqlClient.SqlDataAdapter $command
        } else {
                $adapter = New-Object -TypeName System.Data.OleDb.OleDbDataAdapter $command
        }
        $dataset = New-Object -TypeName System.Data.DataSet
        $adapter.Fill($dataset)
        $dataset.Tables[0]
    $connection.close()
}
$connectionString = 'Server=RUMOW-VMGAL02; Database=gal_abm_stend;User Id=galaktikatasks;Password=61!JuGa#34;'

 $Query = ' Select top 1 dbo.toint64(t.f$nrec) as nrec
          , t.f$email as EMAIL
                  , t.f$subject as Subject
          , convert(varchar(max),substring(xm.m#data ,4,8000))+
              convert(varchar(max),substring(xm.m#data ,  8001,8000))+
              convert(varchar(max),substring(xm.m#data , 16001,8000))+
              convert(varchar(max),substring(xm.m#data , 24001,8000))+
              convert(varchar(max),substring(xm.m#data , 32001,8000))+
              convert(varchar(max),substring(xm.m#data , 40001,8000))+
              convert(varchar(max),substring(xm.m#data , 48001,8000))+
              convert(varchar(max),substring(xm.m#data , 56001,8000))+
              convert(varchar(max),substring(xm.m#data , 64001,8000))+
              convert(varchar(max),substring(xm.m#data , 72001,8000))+
              convert(varchar(max),substring(xm.m#data , 80001,8000))+
              convert(varchar(max),substring(xm.m#data , 88001,8000))+
              convert(varchar(max),substring(xm.m#data , 96001,8000))+
              convert(varchar(max),substring(xm.m#data ,104001,8000))+
              convert(varchar(max),substring(xm.m#data ,112001,8000))+
              convert(varchar(max),substring(xm.m#data ,120001,8000))+
              convert(varchar(max),substring(xm.m#data ,128001,8000))+
              convert(varchar(max),substring(xm.m#data ,136001,8000))+
              convert(varchar(max),substring(xm.m#data ,144001,8000))+
              convert(varchar(max),substring(xm.m#data ,152001,8000))+
              convert(varchar(max),substring(xm.m#data ,160001,8000))+
              convert(varchar(max),substring(xm.m#data ,168001,8000))+
              convert(varchar(max),substring(xm.m#data ,176001,8000))+
              convert(varchar(max),substring(xm.m#data ,184001,8000))+
              convert(varchar(max),substring(xm.m#data ,192001,8000))+
              convert(varchar(max),substring(xm.m#data ,200001,8000))+
              convert(varchar(max),substring(xm.m#data ,208001,8000))+
              convert(varchar(max),substring(xm.m#data ,216001,8000))+
              convert(varchar(max),substring(xm.m#data ,224001,8000))
            as Body
                  , coalesce(t.f$ATTACH1,'''') as attach1
                  , coalesce(t.f$ATTACH2,'''') as attach2
                  , coalesce(t.f$ATTACH3,'''') as attach3
                  , coalesce(t.f$ATTACH4,'''') as attach4
              ,        coalesce(t.f$ATTACH5,'''') as attach5

from dbo.t$ATL_email  t
left join dbo.xx$memo xm on xm.m#code=31644 and xm.m#nrec = t.f$nrec
Where t.f$status = 1
--AND t.f$email LIKE ''%lapushkov%''
'
$result =  Get-DatabaseData -query $Query  -connectionString $connectionString -isSQLServer

foreach ($oneRes in $result )
{
$oneRes.'f$nrec'
if ($oneRes.EMAIL -ne $null)
{
                [System.Collections.ArrayList]$Attachments = @()
        if ($oneRes.attach1 -ne "")
         {
         if (Test-Path $oneRes.attach1 -PathType Leaf )
           {
             $Attachments += $oneRes.attach1
           }
         }
         if ($oneRes.attach2 -ne "")
         {
          if (Test-Path $oneRes.attach2 -PathType Leaf )
           {
            $Attachments += $oneRes.attach2
           }
         }
        if ($oneRes.attach3 -ne "")
         {
          if (Test-Path $oneRes.attach3 -PathType Leaf )
           {
            $Attachments += $oneRes.attach3
           }
         }
        if ($oneRes.attach4 -ne "")
         {
          if (Test-Path $oneRes.attach4 -PathType Leaf )
           {
            $Attachments += $oneRes.attach4
           }
         }
         if ($oneRes.attach5 -ne "")
         {
          if (Test-Path $oneRes.attach5 -PathType Leaf )
           {
            $Attachments += $oneRes.attach5
           }
         }


        $encoding = [System.Text.Encoding]::UTF8
        $subjectText = $oneRes.subject

        [string[]]$RecipientMail= @()

        $RecipientMail = $oneRes.EMAIL.Split(";")
        $BodyText = $oneRes.body

        write-host "email=" $oneRes.EMAIL
#        write-host $Attachments

$login = 'Dmitry.Lapushkov@atlanticgrupa.com'
# Конвертируем пароль в защищенную строку
$password = '8EBEA456a6' | ConvertTo-SecureString -AsPlainText -Force
# Создаем единый объект с логином и паролем
$cred = New-Object system.Management.Automation.PSCredential($login,$password)
 
#Send-MailMessage -SmtpServer 'smtp.yandex.ru' -Port 465 -Credential $cred


        try
        {
        if ($Attachments -ne $null)
         {
         write-host '     Try to send'
          Send-MailMessage -From 'Галактика. Автоматическая рассылка <Galaktika@atlanticgrupa.com' -To $RecipientMail -Attachments $Attachments -Subject $subjectText -Body $BodyText -SmtpServer relay.atlantic.grupa -Encoding $encoding -BodyAsHtml #-Credential $cred
          write-host '       Ok' -ForegroundColor Green
         }
         else
         {
          write-host '     Try to send'#
          Send-MailMessage -From 'Галактика. Автоматическая рассылка <Galaktika@atlanticgrupa.com>' -To $RecipientMail -Subject $subjectText -Body $BodyText -SmtpServer relay.atlantic.grupa -Encoding $encoding -BodyAsHtml #-Credential $cred
          write-host '       Ok' -ForegroundColor Green
         }
          write-host '      Try to update DB'

         $query = 'update dbo.t$atl_email  set f$status = 2 where f$nrec =  dbo.tocomp('+$oneres.nrec+')'
         $res = Invoke-DatabaseQuery -isSQLServer -connectionString $connectionString -query $query
          write-host '       Ok' -ForegroundColor Green
        }
        catch

        {
         #write-host $Attachments -ForegroundColor Red
         $Error[0].Exception
         $query = 'update dbo.t$atl_email  set f$status = 3 where f$nrec =  dbo.tocomp('+$oneres.nrec+')'
         $res = Invoke-DatabaseQuery -isSQLServer -connectionString $connectionString -query $query

        }

}
}

