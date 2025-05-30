const
  FReportDllName = 'FReport' + {$ifdef Win64}'64x' +{$endif} '.dll';
  FREditorExeName = 'FREditor' + {$ifdef Win64}'64x' +{$endif} '.exe';

  // ��������� ��� TreeManager.
  tmtNoTree  = 0; // �� ������ ��� �� ���������� � ���������� ������.
  tmtManager = 1; // ����, � ������� ����� ����������� ������.
  tmtLevel   = 2; // �������� ������� ������� ������.
  tmtPicture = 3; // �������� �������� ����� ��� ����.

  // ��������� ���� ��������.
  frExportBIFF       = 0;
  frExportXML        = 1;
  frExportRTF        = 2;
  frExportPDF        = 3;
  frExportODS        = 4;
  frExportODT        = 5;
  frExportHTML       = 6;
  frExportCSV        = 7;
  frExportDBF        = 8;
  frExportBMP        = 9;
  frExportJPEG       = 10;
  frExportTIFF       = 11;
  frExportGIF        = 12;
  frExportSimpleText = 13;
  frExportTXT        = 14;
  frExportXLSX       = 15;
  frExportFP3        = 20;
  frPrintParam       = 21;
  frMailParam        = 22;
  frEmbeddedID       = 30;
  frInternalParams   = 64; // ��� �������� ���������� ����������.

  // ��������� ���� �������� ��� �������.
  frcShowReport     = 1000;
  frcExportReport   = 1001;
  frcSendMailReport = 1002;
  frcPrintReport    = 1003;
  frcDesignReport   = 1004;
  frcPrepareReport  = 1005;
  frcCreateReport   = 1006;

  frDelimiter = WideChar($2605);
  frGroupsDelimiter = ',';
  // ������ frGroupsDelimeter �� frDelimeter ��������� � ���������������, �.�. ����������� �������� ������ ����� � Variables ������ "GalaxyGroupList" (���������� ����� ������������ � ������ ����������� ��� �������������).
  // ���������� �� ������� ��������� ���������� ������ frres.pas (����������� ��� ������� �� frres.exe) � ������� RunFReportByGroup.

  // � ����� ������������������ ��� VIP ������� RunFReportByGroup.

  csFRDestroy = 1;
  csDestroyAfterClosePreview = 2;

type
  PgfrHeaderInfo = ^TgfrHeaderInfo;
  TgfrHeaderInfo = record
    Index       : LongInt;     // ����� �� �������
    Width       : LongInt;     // ������ �������
    Align       : LongInt;     // ������������ � ������: saLeft, saRight, saCenter
    TreeManager : LongInt;     // ��������� ��� ������
    AtlType     : LongInt;     // ��� ������ ���������
    IsPicture   : WordBool;    // �������� �� ���� ���������
    AutoSize    : WordBool;    // ���� "�������������� �������"
    Name        : ShortString; // ��� ���� � DataSet-�
    Title       : ShortString; // ��������� ������� � BROWSE ��� TREE
    ViewFormat  : ShortString; // ������ ����������� ������ �������
  end;

  PfrxBiffExportParam = ^frxBiffExportParam;
  frxBiffExportParam = record
    Pages           : ShortString;
    PageBreaks      : WordBool;
    PagesPerSheet   : LongInt;
    Picture         : WordBool;
    DeleteEmptyRows : WordBool;
    Formulas        : WordBool;
    ShowDialog      : WordBool;
    OpenAfterExport : WordBool;
  end;

  PfrxXMLExportParam = ^frxXMLExportParam;
  frxXMLExportParam = record
    Pages           : ShortString;
    SuppressPageHeadersFooters : WordBool;
    WYSIWYG         : WordBool;
    PageBreaks      : WordBool;
    Background      : WordBool;
    SplitMode       : Byte;
    RowsCount       : LongInt;
    ShowDialog      : WordBool;
    OpenAfterExport : WordBool;
  end;

  PfrxRTFExportParam = ^frxRTFExportParam;
  frxRTFExportParam = record
    Pages           : ShortString;
    Picture         : WordBool;
    WISYWIG         : WordBool;
    PageBreaks      : WordBool;
    SuppressPageHeadersFooters : WordBool;
    HeaderFooter    : LongInt;
    ShowDialog      : WordBool;
    OpenAfterExport : WordBool;
  end;

  PfrxPDFExportParam = ^frxPDFExportParam;
  frxPDFExportParam = record
    Pages           : ShortString;
    Compressed      : WordBool;
    EmbedFonts      : WordBool;
    HighResolution  : WordBool;
    Outline         : WordBool;
    Background      : WordBool;
    Quality         : LongInt;
    ShowDialog      : WordBool;
    OpenAfterExport : WordBool;
  end;

  PfrxODExportParam = ^frxODExportParam;
  frxODExportParam = record
    Pages           : ShortString;
    SuppressPageHeadersFooters : WordBool;
    WISYWIG         : WordBool;
    PageBreaks      : WordBool;
    Background      : WordBool;
    ShowDialog      : WordBool;
    OpenAfterExport : WordBool;
  end;

  PfrxHTMLExportParam = ^frxHTMLExportParam;
  frxHTMLExportParam = record
    Pages           : ShortString;
    Styles          : WordBool;
    FixedWidth      : WordBool;
    AllInOneFolder  : WordBool;
    MultiPage       : WordBool;
    PageNavigator   : WordBool;
    Background      : WordBool;
    PictureType     : Byte;
    ShowDialog      : WordBool;
    OpenAfterExport : WordBool;
  end;

  PfrxSimpleTextExportParam = ^frxSimpleTextExportParam;
  frxSimpleTextExportParam = record
    Pages           : ShortString;
    PageBreaks      : WordBool;
    EmptyLines      : WordBool;
    Frames          : WordBool;
    OEM             : WordBool;
    ShowDialog      : WordBool;
    OpenAfterExport : WordBool;
  end;

  PfrxXLSXExportParam = ^frxXLSXExportParam;
  frxXLSXExportParam = record
    Pages           : ShortString;
    SuppressPageHeadersFooters : WordBool;
    Picture         : WordBool;
    DeleteEmptyRows : WordBool;
    ShowDialog      : WordBool;
    OpenAfterExport : WordBool;
  end;

  PfrxPrintParam = ^frxPrintParam;
  frxPrintParam = record
    Pages       : ShortString;
    PrinterName : ShortString;
    PrintToFile : WordBool;
    FileName    : ShortString;
    CopiesCount : LongInt;
    Collate     : WordBool;
    ShowDialog  : WordBool;
  end;

  PfrxSendMailParam = ^frxSendMailParam;
  frxSendMailParam = record
    MailTo     : WideString;
    Subject    : WideString;
    Body       : WideString;
    ShowDialog : WordBool;
  end;
