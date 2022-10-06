 const

{ TView State masks }

  sfVisible     = $0001;
  sfCursorVis   = $0002;
  sfCursorIns   = $0004;
  sfShadow      = $0008;
  sfActive      = $0010;
  sfSelected    = $0020;
  sfFocused     = $0040;
  sfDragging    = $0080;
  sfDisabled    = $0100;
  sfModal       = $0200;
  sfDefault     = $0400;
  sfExposed     = $0800;
  sfUpCase      = $1000;
  sfModified    = $2000;
  sfPartTabbedSheet= $4000;

{ TView Option masks }

  ofSelectable  = $0001;
  ofTopSelect   = $0002;
  ofFirstClick  = $0004;
  ofFramed      = $0008;
  ofPreProcess  = $0010;
  ofPostProcess = $0020;
  ofBuffered    = $0040;
  ofTileable    = $0080;
  ofCenterX     = $0100;
  ofCenterY     = $0200;
  ofCentered    = $0300;
  ofProtected   = $0400;
  ofFixedX      = $0800;     {for Scroll group}
  ofFixedY      = $1000;     {for Scroll group}
  ofFixed       = ofFixedY xor ofFixedX;     {for Scroll group}
  ofUnDo        = $2000;
  ofSave        = $4000;
  ofUpToDate    = $8000;

{ TView MoreOption masks }

  // для всех видимых элементов $000000FF
  mofAlreadyGood         = $00000001; // Не требуется настройка координат
  mofDropSource          = $00000002; // Объект является источником для Drag-n-Drop'а
  mofDropTarget          = $00000004; // Объект является приёмником Drag-n-Drop'а
  mofZoom                = $00000008; // флаг автоматического zoom'а для интерфейсов
  mofDebuggerWindow      = $00000010; // Одно из окон отладчика

  // для областей ввода (Screen, Browse, Memo, EmbeddedPanel) $0000FF00
  mofFixedXSize          = $00000100; // не масштабируется по горизонтали
  mofFixedYSize          = $00000200; // не масштабируется по вертикали

  // для браузеров и деревьев $00FF0000
  mofBrowserSlideMask    = $00030000;
  mofBrowserSlideShift   = 16;

  mofBrowserExcelColumns = $00040000; // Браузер работает "как в Excel" - все колонки NoExpand
  mofAlwaysShowHScroll   = $00080000; // Всегда показывать горизонтальный  ScrollBar #grib#
  mofManualHScroll       = $00100000; // Ручная навигация по колонкам #grib#pir102.25544
  mofBrowserImage        = $00200000; // Image в броузере
  mofQSearchPosChanged   = $00400000; // посылать cmPositionChanged и cmIdle из под быстрого поиска

  // для деревьев $FF000000
  mofWideOffset          = $01000000; // широкий отступ для каждого уровня (x2)
  mofLinesAtRoot         = $02000000; // рисовать линии у корневых узлов
  mofLineStyleMask       = $0C000000; // маска для стилей линий деревьев
  mofLineStyleShift      = 26;        // смещение для стилей линий деревьев
  mofDoubleLines         = $00000000; // рисовать линии деревьев двойной линией (по умолчанию)
  mofSolidLines          = $04000000; // рисовать линии деревьев одной сплошной линией
  mofDottedLines         = $08000000; // рисовать линии деревьев пунктиром
  mofNoLines             = $0C000000; // не рисовать линии деревьев
  mofNoBitmap            = $10000000; // не рисовать картинки

  // для мемо-полей $00FF0000
  mofMemoEditor          = $00010000; // Встроеный редактор мемо-поля
  mofStretchPicture      = $00020000; // Масштабировать изображение мемо-поля
  // для редактора
  mofWantReturn          = $00040000; // Нажатие Enter НЕ генерирует событие cmDefault
  mofEdHideScrollers     = $00080000; // Прятать ненужные скроллеры
  mofEdShowBPBar         = $00100000; // Показывать в редакторе полосу с BreakPoint'ами
  mofImageCenter         = $00200000; // Центрирование картинки

  // для Embedded панелей $00FF0000
  mofPrivatePalette      = $00010000; // сохранять собственную палитру у встроенного интерфейса

  // для полей ввода в анкетных формах, браузерах, деревьях $0000FF00
                              // флаги реакции подцепленной записи на клавишу Del 
  mofDelDefault          = $00000100; // DelDelault - удалять подцепку, если в StatusLine есть cmPick
  mofNoDel               = $00000200; // NoDel      - никогда не удалять
  mofDel                 = $00000300; // Del        - удалять всегда

  // для полей ввода в анкетных формах
  mofFieldNoStatic       = $00000400; // skip-поля как строки ввода

  // для колонок браузеров и деревьев
  mofColumnNoAutoSize    = $00000800; // Колонка не растягивается при растагивании Браузера

  // для кластеров $00FF0000
  mofHideCluster         = $00010000; // Не рисовать рамку вокруг кластера

  // для кнопок $0000FF00
  mofRecordHistory       = $00000100; // Запомнить значение в полях ввода для "истории"
  //Фиксированные колонки в броузере
  mofFixedLeftColumn  = $00001000;
  mofFixedRightColumn = $00002000;
  //Помеченные колонки в броузере
  mofSelectedColumn = $00004000;
  mofActivLabel     = $00008000;
  mofHeaderImage    = $00800000;


const

{ TWindow Flags masks }

  wfMove                = $001;
  wfGrow                = $002;
  wfClose               = $004;
  wfZoom                = $008;
  wfNoFit               = $010;
  wfGood                = $020;
  wfDefaultCommandClose = $040; { для интерфейсов}
  wfNoOpenFromDesk      = $080; { для интерфейсов}
  wfInsertAndConfigure  = $100;
  wfEmbedWindow         = $200; { для интерфейсов}

{ TWindow number constants }

  wnNoNumber = 0;


{ TWindow palette entries }

//  wpBlueWindow = 0;
//  wpCyanWindow = 1;
//  wpGrayWindow = 2;

{ TButton flags }

  bfNormal    = $00;
  bfDefault   = $01;
  bfLeftJust  = $02;
  bfBroadcast = $04;
  bfNoSelf    = $08;
  bfCloseOwner= $10;
  bfFixing    = $20;
  bfHasIcon   = $40;
  bfSelectableOF = $80;
  bfSavedDefault = $100;
  bfSingleLine = $200;
  bfDoubleLine = $400;
  bfMenu      = $1000;

type SelectMode = (NormalSelect, EnterSelect, LeaveSelect);

const
  inNone              = $00000000;
  inPasswordInputLine = $00000001;
  inWithHistory       = $00000002;
  inNumericTrim       = $00000004;
  inRelayFormat       = $00000008;
  inPickButton        = $00000010;
  inPickButtonDefault = $00000020;
  inNoSetCurrent      = $00000040;
  inQuickChoice       = $00000080; { на самом деле QuickSearch }
  inCalendarPick      = $00000100;
  inEnumInputLine     = $00000200; { только на этапе загрузки }
  inCalc              = $00000400;
  inWithAlign         = $00000800; { только на этапе загрузки }
  inSpin              = $00001000;
  inQuickSearch       = $00002000; { на самом деле QuickChoice }
  inInputMask         = $00004000;
  inNoPickButton      = $00008000;
  inNoSendPickVip     = $00010000;
  inSpinDateTime      = $00020000;
  inEditButton        = $00040000;
  inCustomButton      = $00080000;
  inAllButtonTypes    = inWithHistory or inPickButton or inCalc or inCalendarPick or inSpin;

type
PInputLineSel = ^TInputLineSel;
TInputLineSel = record
  SelStart : integer;
  SelEnd   : integer;
end;

const phFocused = 0; phPreProcess = 1; phPostProcess = 2;

// флаги для DND_Prop (vision_w.dll dnd.cpp)
const
  DND_SETBUFFER        =   1;
  DND_GETBUFFER        =   2;
  DND_GETBUFFERSIZE    =   3;
  DND_QUERYGETDATA     =   4;
  DND_SETDROPEFFECT    =   5;
  DND_GETDROPEFFECT    =   6;
  DND_GETKEYSTATE      =   7;
  DND_SETDROPTARGET    =   8;
  DND_SETDROPSOURCE    =   9;
  DND_REGISTERFORMAT   =  10;

// флаги для RunInterface
const 
  rifDebug         = 1; // отлаживать интерфейс
  rifNoDebug       = 2; // не отлаживать интерфейс
  rifLockInterpr   = 4; // заблокировать интерпретатор
  rifNoInit        = 8; // не выполнять cmGetInserted
  rifExtDebug      =16; // работает внешний отладчик проверить точки

 (*  Общая структура номера поля (на сервере)

         _____________ Битовые флаги, определяющие в какой коллекции искать поле
        /  ___________ Номер логической таблицы
      _/ _/
     | || |
    76543210 76543210 76543210 76543210
    |      |________| |_______________|
    |         |               |_________ Номер поля в коллекции
    |         |_________________________ Номер поля в структуре
    |___________________________________ Признак - поле с расширенной информацией
  *)
const 
    fnExtMask            = $80000000;
    fnIfcMask            = $40000000;
    fnRecMask            = $20000000;
    fnMemNumMask         = $01FF0000;
    fnMemShift           = 16;
    fnLTNumMask          = $0E000000;
    fnLTShift            = 25;

const
  // Breakpoints Flags
  bpfNone           = $0000;
  bpfDisabled       = $0001;
  bpfCondition      = $0002;
  bpfAction         = $0004;
  bpfAllIfcInstance = $0008;
  bpfError          = $0010;
  bpfProfiler       = $0020;
  bpfRemoved        = $0040;
  bpfPassing        = $0080;
  bpfPermanent      = $0100;
  bpfDriverProtocol = $0200;

  bpfNormal         = bpfAllIfcInstance;
//  bpfNormal         = bpfAllIfcInstance or bpfDriverProtocol;
//  bpfNormal       = bpfNone;

  // Breakpoints Action Mode
  bamBreak          = 0;
  bamLog            = 1;
  bamExecute        = 2;
  bamEnableGroup    = 3;
  bamDisableGroup   = 4;
  bamNone           = 5;

  // Breakpoints Profiler Mode
  bpmNone           = 0;
  bpmOperator       = 1;
  bpmCall           = 2;
  bpmOpenRegion     = 3;
  bpmCloseRegion    = 4;

  // Anchor
  anLeft   = 1;
  anTop    = 2;
  anRight  = 4;
  anBottom = 8;
