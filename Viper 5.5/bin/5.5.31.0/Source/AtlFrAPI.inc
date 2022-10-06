const
  FReportDllName = 'FReport' + {$ifdef Win64}'64x' +{$endif} '.dll';
  FREditorExeName = 'FREditor' + {$ifdef Win64}'64x' +{$endif} '.exe';

  // Константы для TreeManager.
  tmtNoTree  = 0; // Не дерево или не учавствует в построении дерева.
  tmtManager = 1; // Поле, в котором будет прорисовано дерево.
  tmtLevel   = 2; // Содержит текущий уровень дерева.
  tmtPicture = 3; // Содержит картинку листа или узла.

  // Константы типа экспорта.
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
  frInternalParams   = 64; // Для передачи внутренних параметров.

  // Константы типа действия над отчетом.
  frcShowReport     = 1000;
  frcExportReport   = 1001;
  frcSendMailReport = 1002;
  frcPrintReport    = 1003;
  frcDesignReport   = 1004;
  frcPrepareReport  = 1005;
  frcCreateReport   = 1006;

  frDelimiter = WideChar($2605);
  frGroupsDelimiter = ',';
  // Замена frGroupsDelimeter на frDelimeter трудоемка и нецелесообразна, т.к. затрагивает хранение списка групп в Variables отчета "GalaxyGroupList" (необходимо будет поддерживать и старый разделитель для совместимости).
  // Необходимо на стороне Атлантиса доработать модуль frres.pas (пересобрать все ресурсы на frres.exe) и функцию RunFReportByGroup.

  // А также зарегистрированную для VIP функцию RunFReportByGroup.

  csFRDestroy = 1;
  csDestroyAfterClosePreview = 2;

type
  PgfrHeaderInfo = ^TgfrHeaderInfo;
  TgfrHeaderInfo = record
    Index       : LongInt;     // Номер по порядку
    Width       : LongInt;     // Ширина колонки
    Align       : LongInt;     // Выравнивание в ячейке: saLeft, saRight, saCenter
    TreeManager : LongInt;     // Параметры для дерева
    AtlType     : LongInt;     // Тип данных Атлантиса
    IsPicture   : WordBool;    // Является ли поле картинкой
    AutoSize    : WordBool;    // Флаг "Авторасширение колонки"
    Name        : ShortString; // Имя поля в DataSet-е
    Title       : ShortString; // Заголовок колонки в BROWSE или TREE
    ViewFormat  : ShortString; // Формат отображения данных колонки
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
