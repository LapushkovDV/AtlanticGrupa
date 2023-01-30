

$global:FileWithErrors = [string]""#(Get-Content "C:\Galaktika\res\src\CRPT\ConvertFileError\файл с ошибками.csv")

$global:FileFromSklad = [xml] #(Get-Content "C:\Galaktika\res\src\CRPT\ConvertFileError\9_AG_951dd619-0e8d-4619-b2d2-0daeecc74aa1.xml")

$global:NewXmlFilePath = [string]""#“C:\Galaktika\res\src\CRPT\ConvertFileError\newxml.xml”

$global:arrayErrorCodes = @{}

Function checkFileFromSklad($fnAggregationUnits, [array]$fnarrayErrorCodes)
{
$foundSerial = $false
 foreach($AggregationUnit in  $fnAggregationUnits) {
   if ($fnarrayErrorCodes -match $AggregationUnit.UnitSerialNumber) {     
    $foundSerial = $true
    break
  }
 }
 return $foundSerial
}

Function getarrayErrorCodes([string]$fnFileWithErrors)
{
 if ($fnFileWithErrors -eq $null) {
 return $null
 }
     [int]$PosBeg = $fnFileWithErrors.IndexOf("[")
    [int]$PosEnd = $fnFileWithErrors.IndexOf("]")

    #write-host $fnFileWithErrors -BackgroundColor DarkGreen
    #write-host $PosBeg
    #write-host $PosEnd
    if (($PosEnd -eq -1) -or ($PosBeg -eq -1) -or ($PosEnd -le $PosBeg)) 
    {
     return $null
     #write-host "ошибка в структуре файла с ошибками. нет символов [ ] или их местоположение некорректно" -ForegroundColor Red
    }
    return $($($fnFileWithErrors.Substring($PosBeg + 1, $PosEnd - $PosBeg-1)).Replace(" ","")).Split(",")
}


Function CreateNewXml([string]$fnNewXmlFilePath, $fnAggregationUnits, [array]$fnarrayErrorCodes)
 {
    remove-item($fnNewXmlFilePath) -Force -ErrorAction SilentlyContinue
    $xmlObjectsettings = New-Object System.Xml.XmlWriterSettings
    #Indent: Gets or sets a value indicating whether to indent elements.
    $xmlObjectsettings.Indent = $true
    $xmlObjectsettings.IndentChars = ” “

    # Set the File path & Create The Document
    $XmlObjectWriter = [System.XML.XmlWriter]::Create($fnNewXmlFilePath, $xmlObjectsettings)

    #Write the XML delcaration.
    $XmlObjectWriter.WriteStartDocument()
    
    $document_id = "unit_pack_"+$(new-guid).tostring()

    #$XmlObjectWriter.WriteComment(“writes out a start tag with the specified local name.”)
    $XmlObjectWriter.WriteStartElement(“unit_pack“) # <– unit_pack
    $XmlObjectWriter.WriteAttributeString("document_id",$document_id)
    $XmlObjectWriter.WriteAttributeString("VerForm","1.03" )
    $XmlObjectWriter.WriteAttributeString("file_date_time",$(Get-Date -Format "yyyy-MM-ddТHH:mm:ssK"))
    $XmlObjectWriter.WriteAttributeString("VerProg","VerProg1")

    $XmlObjectWriter.WriteStartElement(“Document“) # <– Start Document
    $XmlObjectWriter.WriteAttributeString("operation_date_time",$(Get-Date -Format "yyyy-MM-ddТHH:mm:ssK"))
    $XmlObjectWriter.WriteAttributeString("document_number","1")

    $XmlObjectWriter.WriteStartElement(“organisation”)# <- start organisation

     $XmlObjectWriter.WriteStartElement(“id_info") # <- start id_info 
      $XmlObjectWriter.WriteStartElement(“LP_info“) # <– LP_info
       $XmlObjectWriter.WriteAttributeString("org_name",'ООО "АТЛАНТИК БРЕНДС"')
       $XmlObjectWriter.WriteAttributeString("LP_TIN","7709191580")
       $XmlObjectWriter.WriteAttributeString("RRC","771901001")
      $XmlObjectWriter.WriteEndElement() # End <– LP_info
     $XmlObjectWriter.WriteEndElement() # <– End id_info

     $XmlObjectWriter.WriteStartElement(“Address“) # <– Address
      $XmlObjectWriter.WriteStartElement(“location_address") # <– location_address
       $XmlObjectWriter.WriteAttributeString("country_code","643")
       $XmlObjectWriter.WriteAttributeString("text_address","105094, Г.МОСКВА, ВНУТРИГОРОДСКАЯ ТЕРРИТОРИЯ ГОРОДА ФЕДЕРАЛЬНОГО ЗНАЧЕНИЯ МУНИЦИПАЛЬНЫЙ ОКРУГ СОКОЛИНАЯ ГОРА, УЛ ЗОЛОТАЯ, Д. 11, ПОМЕЩ. 4Б10")
      $XmlObjectWriter.WriteEndElement() # End <– location_address
     $XmlObjectWriter.WriteEndElement() # End <– Address
      $XmlObjectWriter.WriteStartElement("contacts") # <– contacts   
       $XmlObjectWriter.WriteAttributeString("phone_number","+79163861622")
       $XmlObjectWriter.WriteAttributeString("email","elena.laletina@atlanticgrupa.com")
      $XmlObjectWriter.WriteEndElement() # End <– contacts
    $XmlObjectWriter.WriteEndElement() # <– End organisation


      foreach($AggregationUnit in  $fnAggregationUnits)
         {

          if ($fnarrayErrorCodes -match $AggregationUnit.UnitSerialNumber) {


          $XmlObjectWriter.WriteStartElement("pack_content") # <– pack_content 

           $XmlObjectWriter.WriteElementString("pack_code",$AggregationUnit.UnitSerialNumber)                         
            foreach ($Sntins in $AggregationUnit.Sntins.ChildNodes) {
               $XmlObjectWriter.WriteStartElement("cis") # <– cis
               $XmlObjectWriter.WriteCData($Sntins.'#text')
               $XmlObjectWriter.WriteEndElement() # <– End cis              
            }
           $XmlObjectWriter.WriteEndElement() # <– End pack_content 
          }
          else {
           write-host $AggregationUnit.UnitSerialNumber -ForegroundColor red
          }  
         }



    $XmlObjectWriter.WriteEndElement() # <– End Document
    $XmlObjectWriter.WriteEndElement() # <– End unit_pack


    $XmlObjectWriter.WriteEndDocument()
    $XmlObjectWriter.Flush()
    $XmlObjectWriter.Close()
 }



 <#
 $arrayErrorCodes = getarrayErrorCodes -fnFileWithErrors $FileWithErrors
 if ($arrayErrorCodes -eq $null) 
 {
  write-host "ошибка в структуре файла с ошибками. нет символов [ ] или их местоположение некорректно" -ForegroundColor Red
 }

 $checkFileFromSklad = checkFileFromSklad -fnAggregationUnits $FileFromSklad.AggregationReportDtoWater.AggregationUnits.AggregationUnit -fnarrayErrorCodes  $arrayErrorCodes
 if( $checkFileFromSklad -eq $true ) {
    CreateNewXml -fnNewXmlFilePath $NewXmlFilePath -fnAggregationUnits $FileFromSklad.AggregationReportDtoWater.AggregationUnits.AggregationUnit -fnarrayErrorCodes $arrayErrorCodes
  }
  else {
     write-host "в файле от склада нет кодов, указанных в файле ошибок" -ForegroundColor Red
   }

#>
Function getFileFromSklad{
    $FileBrowserXML = New-Object System.Windows.Forms.OpenFileDialog -Property @{ 
        InitialDirectory = [Environment]::GetFolderPath('Desktop') 
        Filter = 'XML file (*.xml)|*.xml'
        Title = 'Выберите файл от завода'
    }
     $null = $FileBrowserXML.ShowDialog()
     return $FileBrowserXML.FileName
     #return [xml](Get-Content $FileBrowserXML.FileName)          
    #$FileBrowserXML.SafeFileName
}

Function GetFileWithErrors {
    $FileBrowserCSV = New-Object System.Windows.Forms.OpenFileDialog -Property @{ 
        InitialDirectory = [Environment]::GetFolderPath('Desktop') 
        Filter = 'CSV file (*.CSV)|*.CSV'
        Title = 'Выберите файл м ошибками от ЧЗ'
    }
     $null = $FileBrowserCSV.ShowDialog()     
     return $FileBrowserCSV.FileName
     
     #WRITE-HOST $FileWithErrors -BackgroundColor Blue
}

Function SelectFolder {
    $FolderBrowser = New-Object System.Windows.Forms.OpenFileDialog -Property @{ 
        InitialDirectory = [Environment]::GetFolderPath('Desktop') 
        ValidateNames = $false
        CheckFileExists = $false
        CheckPathExists = $true
        FileName = "Folder Selection."
        Title = 'Выберите каталог для сохранения XML'
    }
     $null = $FolderBrowser.ShowDialog()         
     return [string]$($FolderBrowser.FileName).replace($FolderBrowser.SafeFileName,"")
     #WRITE-HOST $FileWithErrors -BackgroundColor Blue
}
function setStateButtonCreate {
 if ($labelXML.BackColor -eq [System.Drawing.Color]::FromName("Green") -and ($label.BackColor -eq [System.Drawing.Color]::FromName("Green")) -and ($global:NewXmlFilePath -ne "") ) {
  $buttonCreateXML.Enabled = $true
 }
 else {
  $buttonCreateXML.Enabled = $false
 }
  
 if ($labelNewXMLName.text -eq "") {
   $labelNewXML.Visible = $false
  }
  else {
   $labelNewXML.Visible = $true
  }
 }

<#
$dialog = [System.Windows.Forms.FolderBrowserDialog]::new()
$dialog.Description = 'This is a description'
$dialog.RootFolder = [System.Environment+specialfolder]::Desktop
$dialog.ShowNewFolderButton = $true
$dialog.ShowDialog()

$dialog.Dispose()
#>
# Load the Winforms assembly
[reflection.assembly]::LoadWithPartialName( "System.Windows.Forms")

# Create the form
$form = New-Object Windows.Forms.Form

$form.Size = New-Object System.Drawing.Size(650,300)
$form.StartPosition = 'CenterScreen'

#Set the dialog title
$form.text = "Обработка ошибок ЧЗ и файлов склада"

# Create the label control and set text, size and location
$label = New-Object Windows.Forms.Label
$label.Location = New-Object Drawing.Point 10,10
$label.Size = New-Object Drawing.Point 250,15
$label.text = "Выберите файл с ошибками от ЧЗ"
$label.BackColor = [System.Drawing.Color]::FromName("Red")


$labelFile = New-Object Windows.Forms.Label
$labelFile.Location = New-Object Drawing.Point 260,35
$labelFile.Size = New-Object Drawing.Point 400,15
$labelFile.text = ""

# Create TextBox and set text, size and location
#$textfield = New-Object Windows.Forms.TextBox
#$textfield.Location = New-Object Drawing.Point 50,60
#$textfield.Size = New-Object Drawing.Point 200,30

# Create Button and set text and location
$buttonCSV = New-Object Windows.Forms.Button
$buttonCSV.text = "Файл с ошибками"
$buttonCSV.Location = New-Object Drawing.Point 10,30
$buttonCSV.Size = New-Object Drawing.Point 250,20
$buttonCSV.Enabled = $true


# Create Button and set text and location
$buttonXML = New-Object Windows.Forms.Button
$buttonXML.text = "Файл от завода"
$buttonXML.Location = New-Object Drawing.Point 10,80
$buttonXML.Size = New-Object Drawing.Point 250,20
$buttonXML.Enabled = $false


# Create the label control and set text, size and location
$labelXML = New-Object Windows.Forms.Label
$labelXML.Location = New-Object Drawing.Point 10,60
$labelXML.Size = New-Object Drawing.Point 250,15
$labelXML.text = ""

$labelXMLFile = New-Object Windows.Forms.Label
$labelXMLFile.Location = New-Object Drawing.Point 260,85
$labelXMLFile.Size = New-Object Drawing.Point 400,15
$labelXMLFile.text = ""

# Create Button and set text and location
$buttonFolder = New-Object Windows.Forms.Button
$buttonFolder.text = "Папка для нового XML"
$buttonFolder.Location = New-Object Drawing.Point 10,120
$buttonFolder.Size = New-Object Drawing.Point 250,20
$buttonFolder.Enabled = $true

$labelFolder = New-Object Windows.Forms.Label
$labelFolder.Location = New-Object Drawing.Point 10,105
$labelFolder.Size = New-Object Drawing.Point 400,15
$labelFolder.text = "Выберите папку для нового XML"


$labelFolderName = New-Object Windows.Forms.Label
$labelFolderName.Location = New-Object Drawing.Point 260,120
$labelFolderName.Size = New-Object Drawing.Point 400,15
$labelFolderName.text = ""


$buttonCreateXML = New-Object Windows.Forms.Button
$buttonCreateXML.text = "Создать XML"
$buttonCreateXML.Location = New-Object Drawing.Point 10,160
$buttonCreateXML.Size = New-Object Drawing.Point 250,20
$buttonCreateXML.Enabled = $false



$labelNewXML = New-Object Windows.Forms.Label
$labelNewXML.Location = New-Object Drawing.Point 10,195
$labelNewXML.Size = New-Object Drawing.Point 400,15
$labelNewXML.text = "Создан файл"
$labelNewXML.visible = $false


$labelNewXMLName = New-Object Windows.Forms.Label
$labelNewXMLName.Location = New-Object Drawing.Point 10,210
$labelNewXMLName.Size = New-Object Drawing.Point 650,15
$labelNewXMLName.text = ""
$labelNewXMLName.ForeColor = [System.Drawing.Color]::FromName("Green")


# Set up event handler to extarct text from TextBox and display it on the Label.
$buttonCSV.add_click({
 $global:FileWithErrors = $null
 $filename = GetFileWithErrors
 #write-host  $filename
 $labelFile.text = $filename
 $global:FileWithErrors =  [string](Get-Content $filename) 
 if ($global:FileWithErrors -eq $null)
  {
    $label.text = "Выберите файл с ошибками от ЧЗ"
    $label.BackColor = [System.Drawing.Color]::FromName("Red")
  }
  else {

     $global:arrayErrorCodes = getarrayErrorCodes -fnFileWithErrors $global:FileWithErrors
     if  ($global:arrayErrorCodes -eq $null) {
        $label.Text = "ошибка в структуре файла с ошибками"
        $label.BackColor = [System.Drawing.Color]::FromName("Red")
        $buttonXML.Enabled = $false
      }
      Else {
       $label.Text = "Структура файла ОК"
       $label.BackColor =[System.Drawing.Color]::FromName("Green")
       $buttonXML.Enabled = $true
       $labelXML.text = "Выберите файл от завода"
      }
   }
   $labelNewXMLNAME.text = ""  
setStateButtonCreate
})


$buttonXML.add_click({
 $global:FileFromSklad = $null
 
 $filename = getFileFromSklad 
 $global:FileFromSklad = [xml](Get-Content $filename)
 $labelXMLFile.text =  $filename

 $AggregationUnit = $global:FileFromSklad.AggregationReportDtoWater.AggregationUnits.AggregationUnit
 
 if ($AggregationUnit -eq $null) {
  $labelXML.text = "Ошибка в структуре файла"
  $labelXML.BackColor =[System.Drawing.Color]::FromName("Red")  
 }
 else {
   #write-host $global:arrayErrorCodes -ForegroundColor Blue
   
     $checkFileFromSklad = checkFileFromSklad -fnAggregationUnits $AggregationUnit -fnarrayErrorCodes $global:arrayErrorCodes
 
     #write-host $global:FileFromSklad -ForegroundColor Cyan

     if ($checkFileFromSklad -eq $false){
      $labelXML.text = "совпадений с файлом ошибок не найдено"
      $labelXML.BackColor =[System.Drawing.Color]::FromName("Red")  
  
     }
     else {
      $labelXML.text = "совпадения с файлом ошибок выявлены"
      $labelXML.BackColor =[System.Drawing.Color]::FromName("Green")  
     }
 }
 $labelNewXMLNAME.text = ""  
 setStateButtonCreate
})

$buttonFolder.add_click({
 $global:NewXmlFilePath = $null
 $filename = SelectFolder
 $global:NewXmlFilePath = $filename
 

 $labelFolderName.text = $filename
  $labelNewXMLname.text = ""  
 setStateButtonCreate
 
})


$buttonCreateXML.add_click({
 
 $NewXmlFilePathFileName = $(new-guid).ToString()+'.xml'
  $global:NewXmlFilePath + $NewXmlFilePathFileName
 
 CreateNewXml -fnNewXmlFilePath $($global:NewXmlFilePath + $NewXmlFilePathFileName) -fnAggregationUnits $global:FileFromSklad.AggregationReportDtoWater.AggregationUnits.AggregationUnit -fnarrayErrorCodes $global:arrayErrorCodes

 $labelNewXMLName.text = $($global:NewXmlFilePath + $NewXmlFilePathFileName)
 setStateButtonCreate
})



#SelectFolder

# Add the controls to the Form
$form.controls.add($buttonCSV)
$form.controls.add($buttonXML)
$form.controls.add($label)
$form.controls.add($labelFile)
$form.controls.add($labelXML)
$form.controls.add($labelXMLFile)
$form.controls.add($buttonFolder)
$form.controls.add($labelFolder)
$form.controls.add($labelFolderName)
$form.controls.add($ButtonCreateXML)
$form.controls.add($labelNewXML)
$form.controls.add($labelNewXMLName)
#$form.controls.add($textfield)

# Display the dialog
$form.ShowDialog()