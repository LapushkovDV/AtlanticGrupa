// ���� ��ꥪ⮢: 1-1000
// ���� ᢮��� : 1000-9999
// ���� ᢮��� : 10000-12000

//=============================================================================
// ����
//=============================================================================

const cftInteger           = 10001; // Integer - ��ப� ����� �ᥫ
const cftString            = 10002; // String - ��ப� ����� � ᯨ᪮� ���ਨ
const cftBoolean           = 10003; // Boolean - CheckBox
const cftUnsignedInteger   = 10004; // Integer - ��ப� ����� �ᥫ � �஢�મ�
const cftHelpCtx           = 10005; // Integer - ��ப� ����� � ᯨ᪮� �롮� ���⥪�⮢
const cftStatusCtx         = 10006; // Integer - ��ப� ����� � ᯨ᪮� �롮� ���⥪�⮢
const cftLink              = 10007; // String - ��ப� ����� � ᯨ᪮� �롮� ��ꥪ⮢
const cftPalette           = 10008; // Integer - ��ப� ����� � ᯨ᪮� �롮� �����⨬�� ������
const cftTable             = 10009; // Integer - ��ப� ����� � ᯨ᪮� �롮� ⠡���
const cftField             = 10010; // String - ��ப� ����� � ᯨ᪮� �롮� ����� ��⠭�������� ⠡����
const cftExprStr           = 10011; // String - ��ப� ����� � ᯨ᪮� ���ਨ
const cftStrings           = 10012; // array of String - ���� ����� ��ப � ������������ ����㧪�/����� � 䠩�
const cftCommand           = 10013; // Integer - ��ப� ����� � ᯨ᪮� �롮� ������
const cftHistoryId         = 10014; // Integer - ��ப� ����� � ᯨ᪮� ���⥪�⮢
const cftPrecisionVarName  = 10015; // String - ��ப� ����� � ᯨ᪮� �롮� ��६�����
const cftItems             = 10016; // ᯨ᮪ - �ந����쭮� ।���஢����
const cftHotKey            = 10017; // Integer - ���᮪ ������
const cftIntegers          = 10018; // array of Integer - ᯨ᮪ 楫�� �ᥫ
const cftAlignment         = 10019; // Integer - ��ப� ����� � ᯨ᪮� �롮� �����⨬�� ����⠭� ��ࠢ�������
//#grib#PIR_102.18236
const cftDouble            = 10020; // Double  - ��ப� ����� �ᥫ SpinButton
const cftStylesList        = 10021; // Integer - ��ப� ����� � ᯨ᪮� �롮� �����⨬�� �⨫��
const cftButtonType        = 10022; // Integer - ��ப� ����� � ᯨ᪮� �롮� �����⨬�� ����⠭� ⨯� ������ InputLine
const cftFixedState        = 10023; // Integer - ��ப� ����� � ᯨ᪮� �롮� �����⨬�� ����⠭� 䨪�஢����
const cftDocPanelMode      = 10024; // Integer - ��ப� ����� � ᯨ᪮� �롮� �����⨬�� ����⠭� ०���� �⮡ࠦ���� ������ ���㬥�⮢ ����-����

//=============================================================================
// �����⢠
//=============================================================================

// ��易⥫쭮� ᢮��⢮ Name
const cfpName               = 1001;
// ��稥
const cfpOrigin_X           = 1002;
const cfpOrigin_Y           = 1003;
const cfpSize_X             = 1006;
const cfpSize_Y             = 1007;
const cfpVisible            = 1010;
const cfpHidden             = 1011;
const cfpProtect            = 1012;
const cfpSkip               = 1013;
const cfpHelpCtx            = 1014;
const cfpStatusCtx          = 1015;
const cfpTitle              = 1016;
const cfpTabs               = 1017;
const cfpLink               = 1018;
const cfpPalette            = 1019;
const cfpCentered           = 1020;
const cfpExprStr            = 1021;
const cfpField              = 1022;
const cfpCharSet            = 1023;
const cfpPoints             = 1024;
const cfpPrecisionVarName   = 1025;
const cfpDefaultValue       = 1026;
const cfpMaxLen             = 1027;
const cfpUpCase             = 1028;
const cfpHistoryID          = 1029;
const cfpPassword           = 1030;
const cfpNoValidCheck       = 1031;
const cfpPassiveFormat      = 1032;
const cfpFormat             = 1033;
const cfpUptoDate           = 1034;
const cfpPickButton         = 1035;
const cfpLessNull           = 1036;
const cfpStrings            = 1037;
const cfpCommand            = 1038;
const cfpDefault            = 1039;
const cfpLeftJustify        = 1040;
const cfpTable              = 1041;
const cfpIndex              = 1042;
const cfpDataIndex          = 1043;
const cfpChecked            = 1044;
const cfpOriginal           = 1045;
const cfpItems              = 1046;
const cfpHelpLine           = 1047;
const cfpHotKey             = 1048;
const cfpMenuItemParams     = 1049;

const cfpRectA_X            = 1050;
const cfpRectA_Y            = 1051;
const cfpRectB_X            = 1052;
const cfpRectB_Y            = 1053;

const cfpSDIWindow          = 1054;
const cfpAlwaysOnTop        = 1055;
const cfpFieldName          = 1056;

const cfpStringsNull        = 1057;
const cfpDesignerState      = 1058;

const cfpTextAlign          = 1059;
const cfpCalcButton         = 1060;
const cfpDefWidth           = 1061;

const cfpParamType          = 1062;
const cfpValue              = 1063;
const cfpMayBeCollected     = 1064;

const cfpNoResize           = 1065;
const cfpNoMove             = 1066;
const cfpNoResort           = 1067;

const cfpMayBeSaved         = 1068;

const cfpSpinButton         = 1069;
const cfpSpinInc            = 1070;
const cfpSpinMin            = 1071;
const cfpSpinMax            = 1072;

const cfpFixing             = 1073;
const cfpEditButton         = 1074;
const cfpHeaderImgName      = 1075;

const cfpLines              = 1169;
const cfpIdle               = 1170;
const cfpHistoryLines       = 1171;

const cfpBevelName          = 1172;
const cfpStyle              = 1173;
const cfpShape              = 1174;

const cfpSlider             = 1175;

const cfpFrame              = 1176;

const cfpExcelColumns       = 1177;
const cfpNoAutoSize         = 1178;

const cfpNoStatic           = 1179;
const cfpEnumValues         = 1180;

const cfpFixed_XSize        = 1181;
const cfpFixed_YSize        = 1182;
const cfpModifiedState      = 1183;

const cfpWideOffset         = 1184;
const cfpLinesAtRoot        = 1185;
const cfpLineStyle          = 1186;

const cfpUsedViews          = 1187;

const cfpHelpCtxAvail       = 1188;
const cfpIconName           = 1189;
const cfpNoBitmap           = 1190;

const cfpPrivatePalette     = 1191;

const cfpPanelTable         = 1192;
const cfpManualHScroll      = 1193;
const cfpDropSource         = 1194;
const cfpDropTarget         = 1195;

const cfpHelpContexts       = 1196;
const cfpHelpFiles          = 1197;
const cfpRecordHistory      = 1198;

const cfpEmbeddedEdit       = 1199;
const cfpSaved              = 1200;
const cfpCurrentString      = 1201;
const cfpTextModified       = 1202;

const cfpMenuItemTask       = 1203;
const cfpCalendarButton     = 1204;
const cfpEmbName            = 1205;
const cfpPanelTableName     = 1206;
const cfpFontBold           = 1207;
const cfpFontItalic         = 1208;
const cfpFontColor          = 1209;
const cfpFontBackColor      = 1210;
const cfpInputMask          = 1211;
const cfpImageCenter        = 1212;
const cfpFullSize           = 1213;
const cfpButtonType         = 1214;
const cfpDefaultPickButton  = 1215;
const cfpImageFixWidth      = 1216;
const cfpImageFixHeight     = 1217;
const cfpImageMargin        = 1218;
const cfpImageDisplayMode   = 1219;
const cfpFixedState         = 1220;
const cfpDocPanelMode       = 1221;
const cfpOnlyOneDoc         = 1222;

const cfpImgName            = 1223;

const cfpTabbedSheetOrder   = 1224;
const cfpMenuName           = 1225;

const cfpFontUline          = 1226;
const cfpFontSline          = 1227;
const cfpHyperlink          = 1228;

const cfpCurRowFontBold     = 1229;
const cfpCurRowFontItalic   = 1230;
const cfpCurRowFontUline    = 1231;
const cfpCurRowFontSline    = 1232;
const cfpCurRowFontColor    = 1233;
const cfpCurRowFontBackColor= 1234;
const cfpFontSize           = 1235;
const cfpAnchorLeft         = 1236;
const cfpAnchorTop          = 1237;
const cfpAnchorRight        = 1238;
const cfpAnchorBottom       = 1239;
const cfpHeaderAlign        = 1240;
const cfpTabImageName       = 1241;
const cfpBrowserViewFlags   = 1242;
const cfpRowColorDark       = 1243;
const cfpVDelimiterWidth    = 1244;
const cfpHDelimiterWidth    = 1245;
const cfpCfgName            = 1246;
const cfpCfgStoreName       = 1247;
const cfpLessValue          = 1248;
const cfpWordWrap           = 1249;
const cfpScriptFontSize     = 1250;
const cfpScriptFontFace     = 1251;
const cfpColumnsHigh        = 1252;

//=============================================================================
// ����� ᢮��⢠
//=============================================================================

const cffGetPropList       = 1;  // ����� ������ GetPropList
const cffHiddenProp        = 2;  // �� �����뢠�� ���짮��⥫� � ᯨ᪥ ᢮���
const cffNonPersistent     = 4;  // �� ��࠭��� � �ਯ�; :-)
const cffCheckParamType    = 8;  // �㭪樨 ��⠭����/����祭�� ���祭�� ᢮��� �믮����� �஢��� ⨯� ���祭��
const cffDesignerReadOnly  = 16; // ����饭� ����䨪��� � ��������
const cffUserModified      = 32; // �������᪨� : �����⢮ �������� ���짮��⥫��
const cffOriginalReadOnly  = 64; // ��� �ਣ������� ��ꥪ⮢ ����饭� ����䨪��� � ��������

//=============================================================================
// ���� ��ꥪ⮢
//=============================================================================

const cfcStaticText         = 1;
const cfcLabel              = 2;
const cfcFieldLine          = 3;
const cfcRadioButton        = 4;
const cfcCheckBox           = 5;
const cfcButton             = 6;
const cfcScreen             = 7;
const cfcBrowser            = 8;
const cfcColumn             = 9;
const cfcTreeBrowser        = 10;
const cfcTreeColumn         = 11;
const cfcMemoViewer         = 12;
const cfcPanelInputLine     = 13;
const cfcPanelRadioButton   = 14;
const cfcPanelCheckBox      = 15;
const cfcDialog             = 16;
const cfcInterfaceWindow    = 17;
const cfcDeskTop            = 18;
const cfcClusterItem        = 19;

const cfcMenuItem           = 20;
const cfcSubMenu            = 21;

const cfcReportsList        = 22;
const cfcReportItem         = 23;

const cfcParamManager       = 24;
const cfcSection            = 25;
const cfcParameter          = 26;

const cfcQuickChoice        = 27;

const cfcBevel              = 28;

const cfcHelpLinks          = 29;
const cfcViewHelpLink       = 30;
const cfcMenuHelpLink       = 31;
const cfcCodeHelpLink       = 32;

const cfcEmbeddedPanel      = 33;
const cfcHelpIndex          = 34;
const cfcHelpFile           = 35;

const cfcEmbIntConfKeeper   = 36;
const cfcEICKeeperItem      = 37;
const cfcMenuSeparator      = 38;
const cfcInputButton        = 39;

const cfcFormatsGroup       = 40;

const cfcPanelMultiLine     = 41;

//=============================================================================
// ����� ��ꥪ⮢
//=============================================================================

const cofStorable             = 1;  // ����� ��࠭��� � ����㦠��
const cofHidden               = 2;  // �� �����뢠�� ���짮��⥫� � ᯨ᪥ ��ꥪ⮢
const cofDontScriptSubObjects = 4;  // �� �����뢠�� � �ਯ� �������� ��ꥪ�
