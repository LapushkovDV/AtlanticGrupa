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

  // ��� ��� ������� ������⮢ $000000FF
  mofAlreadyGood         = $00000001; // �� �ॡ���� ����ன�� ���न���
  mofDropSource          = $00000002; // ��ꥪ� ���� ���筨��� ��� Drag-n-Drop'�
  mofDropTarget          = $00000004; // ��ꥪ� ���� ��񬭨��� Drag-n-Drop'�
  mofZoom                = $00000008; // 䫠� ��⮬���᪮�� zoom'� ��� ����䥩ᮢ
  mofDebuggerWindow      = $00000010; // ���� �� ���� �⫠�稪�

  // ��� �����⥩ ����� (Screen, Browse, Memo, EmbeddedPanel) $0000FF00
  mofFixedXSize          = $00000100; // �� ����⠡������ �� ��ਧ��⠫�
  mofFixedYSize          = $00000200; // �� ����⠡������ �� ���⨪���

  // ��� ��㧥஢ � ��ॢ쥢 $00FF0000
  mofBrowserSlideMask    = $00030000;
  mofBrowserSlideShift   = 16;

  mofBrowserExcelColumns = $00040000; // ��㧥� ࠡ�⠥� "��� � Excel" - �� ������� NoExpand
  mofAlwaysShowHScroll   = $00080000; // �ᥣ�� �����뢠�� ��ਧ��⠫��  ScrollBar #grib#
  mofManualHScroll       = $00100000; // ��筠� �������� �� �������� #grib#pir102.25544
  mofBrowserImage        = $00200000; // Image � ��㧥�
  mofQSearchPosChanged   = $00400000; // ���뫠�� cmPositionChanged � cmIdle �� ��� ����ண� ���᪠

  // ��� ��ॢ쥢 $FF000000
  mofWideOffset          = $01000000; // �ப�� ����� ��� ������� �஢�� (x2)
  mofLinesAtRoot         = $02000000; // �ᮢ��� ����� � ��୥��� 㧫��
  mofLineStyleMask       = $0C000000; // ��᪠ ��� �⨫�� ����� ��ॢ쥢
  mofLineStyleShift      = 26;        // ᬥ饭�� ��� �⨫�� ����� ��ॢ쥢
  mofDoubleLines         = $00000000; // �ᮢ��� ����� ��ॢ쥢 ������� ������ (�� 㬮�砭��)
  mofSolidLines          = $04000000; // �ᮢ��� ����� ��ॢ쥢 ����� ᯫ�譮� ������
  mofDottedLines         = $08000000; // �ᮢ��� ����� ��ॢ쥢 �㭪�஬
  mofNoLines             = $0C000000; // �� �ᮢ��� ����� ��ॢ쥢
  mofNoBitmap            = $10000000; // �� �ᮢ��� ���⨭��

  // ��� ����-����� $00FF0000
  mofMemoEditor          = $00010000; // ���஥�� ।���� ����-����
  mofStretchPicture      = $00020000; // ����⠡�஢��� ����ࠦ���� ����-����
  // ��� ।����
  mofWantReturn          = $00040000; // ����⨥ Enter �� �������� ᮡ�⨥ cmDefault
  mofEdHideScrollers     = $00080000; // ������ ���㦭� �஫����
  mofEdShowBPBar         = $00100000; // �����뢠�� � ।���� ������ � BreakPoint'���
  mofImageCenter         = $00200000; // �����஢���� ���⨭��

  // ��� Embedded ������� $00FF0000
  mofPrivatePalette      = $00010000; // ��࠭��� ᮡ�⢥���� ������� � ���஥����� ����䥩�

  // ��� ����� ����� � ������� �ଠ�, ��㧥��, ��ॢ��� $0000FF00
                              // 䫠�� ॠ�樨 ���楯������ ����� �� ������� Del 
  mofDelDefault          = $00000100; // DelDelault - 㤠���� ���楯��, �᫨ � StatusLine ���� cmPick
  mofNoDel               = $00000200; // NoDel      - ������� �� 㤠����
  mofDel                 = $00000300; // Del        - 㤠���� �ᥣ��

  // ��� ����� ����� � ������� �ଠ�
  mofFieldNoStatic       = $00000400; // skip-���� ��� ��ப� �����

  // ��� ������� ��㧥஢ � ��ॢ쥢
  mofColumnNoAutoSize    = $00000800; // ������� �� ��������� �� ��⠣������ ��㧥�

  // ��� �����஢ $00FF0000
  mofHideCluster         = $00010000; // �� �ᮢ��� ࠬ�� ����� ������

  // ��� ������ $0000FF00
  mofRecordHistory       = $00000100; // ��������� ���祭�� � ����� ����� ��� "���ਨ"
  //����஢���� ������� � ��㧥�
  mofFixedLeftColumn  = $00001000;
  mofFixedRightColumn = $00002000;
  //����祭�� ������� � ��㧥�
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
  wfDefaultCommandClose = $040; { ��� ����䥩ᮢ}
  wfNoOpenFromDesk      = $080; { ��� ����䥩ᮢ}
  wfInsertAndConfigure  = $100;
  wfEmbedWindow         = $200; { ��� ����䥩ᮢ}

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
  inQuickChoice       = $00000080; { �� ᠬ�� ���� QuickSearch }
  inCalendarPick      = $00000100;
  inEnumInputLine     = $00000200; { ⮫쪮 �� �⠯� ����㧪� }
  inCalc              = $00000400;
  inWithAlign         = $00000800; { ⮫쪮 �� �⠯� ����㧪� }
  inSpin              = $00001000;
  inQuickSearch       = $00002000; { �� ᠬ�� ���� QuickChoice }
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

// 䫠�� ��� DND_Prop (vision_w.dll dnd.cpp)
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

// 䫠�� ��� RunInterface
const 
  rifDebug         = 1; // �⫠������ ����䥩�
  rifNoDebug       = 2; // �� �⫠������ ����䥩�
  rifLockInterpr   = 4; // �������஢��� ��������
  rifNoInit        = 8; // �� �믮����� cmGetInserted
  rifExtDebug      =16; // ࠡ�⠥� ���譨� �⫠�稪 �஢���� �窨

 (*  ���� ������� ����� ���� (�� �ࢥ�)

         _____________ ��⮢� 䫠��, ��।����騥 � ����� ������樨 �᪠�� ����
        /  ___________ ����� �����᪮� ⠡����
      _/ _/
     | || |
    76543210 76543210 76543210 76543210
    |      |________| |_______________|
    |         |               |_________ ����� ���� � ������樨
    |         |_________________________ ����� ���� � �������
    |___________________________________ �ਧ��� - ���� � ���७��� ���ଠ樥�
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
