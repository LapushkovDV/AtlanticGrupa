//********************************************************************************
//                                                        (c) ��௮��� �����⨪�
// �����⨪� 8.1 - ��壠���᪨� ������
// ����⠭�� ����� �������樨
//********************************************************************************

//--------------------------------------------------------------------------------
// ����� ��⠫��� �����䨪��஢ ��� ��� ��⮬���᪮�� ����������
verKatKeys      = 18;

//--------------------------------------------------------------------------------
// ����� ��⥬��� �����䨪��஢
idVAL___         = 0;
idSUM            = 1;
idSumDP          = 2;
idSumNP          = 3;
idSumAP          = 4;
idSumSP          = 5;
idDOPL           = 6;
idDOBar          = 7;
idDON            = 8;
idPL___          = 9;
idNNP___         = 10;
idDP___          = 11;
idNP___          = 12;
idSP___          = 13;
idRP___          = 14;
idRound          = 15;
idNAC___         = 16;
idOS___          = 20;
idSellBuyOS      = 20;
idOldSt          = 21;
idNewSt          = 22;
idOldIzn         = 23;
idNewIzn         = 24;
idAmort          = 25;
idUsedRaw        = 26;
idRetRaw         = 27;
idSumCms         = 28;
idTNVED          = 29;
idISO            = 30;
idGroup          = 31;
idCode           = 32;
idKAU            = 33;
idVP___          = 34;
idNominalS       = 40;
idBayS           = 41;
idCloseS         = 42;
idNalN           = 43;
idPLV___         = 44;
idVZ___          = 45;
idCS___          = 46;
idZP___          = 47;
idTax            = 48; // ��� __TAXES__
idBr_49          = 49;
idDateNow        = 50;
idDateDoc        = 51;
idDateDO         = 52;
idDateHoz        = 53;
idDateBeg        = 54;
idDateEnd        = 55;
idBr_59          = 59;
idDS___          = 60;
idPKP___         = 61;
idVIP___         = 62;
idSoprDoc        = 63;
idBr_69          = 69;
idDirKauR        = 70;
idDirKauL        = 71;
idDirKauRPlus    = 72;
idDirKauLPlus    = 73;
idDirStroy       = 74;
idDirStroyPlus   = 75;
idDirKauRepl     = 76;
idBr_99          = 99;
idVipAlgorithmes = 100;

//--------------------------------------------------------------------------------
// ��䨪� ��� ����䥩ᮢ ॠ������� ������� �� ��� API
cgTxoApiPrefix        = 'Txo_';
cgTxoMenuPrefix       = 'TxoMenu_';
cgTxoExtractKauPrefix = 'TxoKau_';

//--------------------------------------------------------------------------------
// ����⠭�� ��� �����⬠ KsBuild.vip � KsPlan.vip
cmKol             =  7701;
cmKoef            =  7702;
cmNzsStartBase    =  7703;
cmKvStartBase     =  7704;
cmOfStartBase     =  7705;
cmOstStartBase    =  7706;
cmNzsStartCur     =  7707;
cmKvStartCur      =  7708;
cmOfStartCur      =  7709;
cmOstStartCur     =  7710;
cmSmetBase        =  7711;
cmSmetCmrBase     =  7712;
cmSmetOborudBase  =  7713;
cmSmetPirBase     =  7714;
cmSmetProchBase   =  7715;
cmNzsBase         =  7716;
cmNzsCmrBase      =  7717;
cmNzsOborudBase   =  7718;
cmNzsPirBase      =  7719;
cmNzsProchBase    =  7720;
cmKvBase          =  7721;
cmKvCmrBase       =  7722;
cmKvOborudBase    =  7723;
cmKvPirBase       =  7724;
cmKvProchBase     =  7725;
cmOfBase          =  7726;
cmOfCmrBase       =  7727;
cmOfOborudBase    =  7728;
cmOfPirBase       =  7729;
cmOfProchBase     =  7730;
cmOstBase         =  7731;
cmOstCmrBase      =  7732;
cmOstOborudBase   =  7733;
cmOstPirBase      =  7734;
cmOstProchBase    =  7735;
cmSmetCur         =  7736;
cmSmetCmrCur      =  7737;
cmSmetOborudCur   =  7738;
cmSmetPirCur      =  7739;
cmSmetProchCur    =  7740;
cmNzsCur          =  7741;
cmNzsCmrCur       =  7742;
cmNzsOborudCur    =  7743;
cmNzsPirCur       =  7744;
cmNzsProchCur     =  7745;
cmKvCur           =  7746;
cmKvCmrCur        =  7747;
cmKvOborudCur     =  7748;
cmKvPirCur        =  7749;
cmKvProchCur      =  7750;
cmOfCur           =  7751;
cmOfCmrCur        =  7752;
cmOfOborudCur     =  7753;
cmOfPirCur        =  7754;
cmOfProchCur      =  7755;
cmOstCur          =  7756;
cmOstCmrCur       =  7757;
cmOstOborudCur    =  7758;
cmOstPirCur       =  7759;
cmOstProchCur     =  7760;
cmNzsEndBase      =  7761;
cmNzsEndCur       =  7762;
cmOplStartBase    =  7763;
cmOplStartCur     =  7764;
cmOplBase         =  7765;
cmOplCmrBase      =  7766;
cmOplOborudBase   =  7767;
cmOplPirBase      =  7768;
cmOplProchBase    =  7769;
cmOplCur          =  7770;
cmOplCmrCur       =  7771;
cmOplOborudCur    =  7772;
cmOplPirCur       =  7773;
cmOplProchCur     =  7774;

//--------------------------------------------------------------------------------
// ����� ��⥬��� ����ᮢ
mcKAUNAME       = 0;
mcKAUCODE       = 1;
mcKAUABBR       = 2;
mcSCHET         = 3;
mcSCHETNAME     = 4;

// ����� ��⥬��� ��४⨢ ������樨 ���
drKauRPlus      = 0;
drKauLPlus      = 1;
drKauR          = 2;
drKauL          = 3;
drKol           = 4;
drPodr          = 5;
drStroy         = 6;
drStroyPlus     = 7;
drKauRepl       = 8;

//--------------------------------------------------------------------------------
// ����� ��⥬��� "�ࠢ��" ����஫� ࠧ��᪨ �� ���
rlCorrespondence = 1;
rlAnalitycs      = 2;
rlDepartment     = 3;
rlNDESum         = 4;
rlCurrency       = 5;
rlCongruence     = 6;
rlKolvo          = 6; // ������⢮ �ࠢ��!

//--------------------------------------------------------------------------------
// ����⠭�� ��� ���� ��⮪��� ��� (����ன�� TProv.ProtokolTXO)
tprNo     = 0;
tprLine   = 1;
tprStruct = 2;

// ����⠭�� ��� �஢�� ��⠫���樨 ��⮪��� ��� (����ன�� TProv.ProtokolTXO.Level)
tplHozop  = 1; // �ਢ離� ���
tplOborot = 2; // ����� �� ॣ����� ���
tplKeys   = 3; // ���ଠ�� � ���� ���
tplDebug  = 4; // �⫠��筠� ���ଠ��

//--------------------------------------------------------------------------------
// ����樨 �����ন����� ��ꥪ⮬ TxoBinder
wOper_NotDo      = 0; //  - ��祣� �� ������
wOper_Bind       = 1; //  - �ਢ易�� �X� � ࠧ����
wOper_UnBind     = 2; //  - ��易�� �X� � 㤠���� �஢����
wOper_ReObor     = 3; //  - ���ࠧ����
wOper_CorrObor   = 4; //  - ���४�஢��� �஢����
wOper_DelObor    = 5; //  - 㤠����� �஢����
wOper_RemakeTXO  = 6; //  - ���ࠧ��᪠ TXO
wOper_SetTxoRef  = 7; //  - ������� ��뫪� �� ��� (�ᯮ�짮���� ��� ����஢���� ���㬥�⮢)

//--------------------------------------------------------------------------------
// ����⠭�� ��� ���� SysOper �ந�����⢥���� ���㬥�⮢
cgMnf_0_Main      = 0;  // �ந�����⢮ - �᭮���� ��⪠
cgMnf_1_McFromGp  = 1;  // ���稭���� ��� �� ᯨᠭ�� �� �� ��������� �� ��室 �� �ந�����⢠
cgMnf_2_McFromPf  = 2;  // ���稭���� ��� �� ᯨᠭ�� �� �� ����客�� ���������
cgMnf_3_McFromUsl = 3;  // ���稭���� ��� �� ᯨᠭ�� �� �� ���� �� �������� ��� ����� ���ࠧ������ﬨ
cgMnf_4_UslFromGp = 4;  // ���稭���� ��� �� �������� ᮯ�������� ��� �� ��������� �� ��室 �� �ந�����⢠
cgMnf_5_UslFromPf = 5;  // ���稭���� ��� �� �������� ᮯ�������� ��� �� ����客�� ���������
cgMnf_6_UslFromUsl= 6;  // ���稭���� ��� �� �������� ᮯ�������� ��� �� ���� �� �������� ��� ����� ���ࠧ������ﬨ
cgMnf_555_Transp  = 555; // ����࠭ᯮ��



//--------------------------------------------------------------------------------
// ����樨 ��� ��� ������� ��⮢ GoNewPer.vip
cgContour_KBU = 0;
cgContour_UFZ = 1;
                           // \ GoNewPer.PrzOper
cgPrzClosing_Accounts = 0; //  | �����⨥ ���
cgPrzProduction_Stage = 1; //  | �����⨥ �⠤�� �ந�����⢠
cgPrzCounter_Services = 2; //  | �����⨥ ������� ���

                            // \ GoNewPer.VidSaldo
cgVs_CalcSaldo         = 0; //  | ᠫ줮 �����뢠����
cgVs_NoCalcSaldo       = 2; //  | ᠫ줮 �� �����뢠����
                            //
cgVs_CalcSaldo_moveAll = 0; //  | ᠫ줮 �����뢠���� ��७����� ��� �����⨪� ��� + �����
cgVs_CalcSaldo_moveKau = 1; //  | ᠫ줮 �����뢠���� ��७����� ⮫쪮 ���
                            //   \ - ���ॢ訥 ����⠭��, ��७���� ����� ��� ��� �뭮����� �� �஢��� 蠡���� ���

                             // \ GoNewPer.VidData - ��᪠
cgVd_MaskNoPreView     =  1; //  | ��� �।���⥫쭮�� ��ᬮ��
cgVd_MaskNoDesGr       =  2; //  | ��� ��� ���� ࠡ��� ��㯯
cgVd_MaskReduceKau     =  4; //  | ᢥ���� �����⨪� �� ��ࢮ�� �஢��
cgVd_MaskQueryDate     =  8; //  | ����� ���� ������� ��⮢
cgVd_MaskMakeZero      = 16; //  | �ନ஢��� �㫥��� ᠫ줮
cgVd_NoDelBuhSpr       = 32; //  | �� 㤠���� ����ࠢ��

                            // \ ��ࠬ��� Mode �㭪樨 ObjGoNewPer.CloseSchMakeBS
cgMkb_PlporAndOborot = 0;   //  | ��ନ஢��� ����ࠢ�� � �ਢ易�� � ��� �஢���� ����뢠�騥 ���
cgMkb_OborotOnly     = 1;   //  | ���� �ਢ易�� �஢���� � ⥪�饩 ����ࠢ�� (��� ���樮���� ०���� ������� ��⮢)

//--------------------------------------------------------------------------------
// ������� ���� ०���� ��稭����� � ����⠭�� cmFl_Min � �����
cmFl_Min       = 7000;

mnuFlKau         =  1;
mnuFlUserKau     =  2;
mnuFlVal         =  3;
mnuFlCycle       =  4;
mnuFlConvMode    =  5;
mnuFlConvVal     =  6;
mnuFlPrProv      =  7;
mnuFlSysOper     =  8;
mnuFlSchSub      =  9;
mnuFlDatOb       =  10;
mnuChargeStorage =  11;

//--------------------------------------------------------------------------------
// ����⠭�� ��� ����ன�� ०��� �ନ஢���� ���/����� � 蠡���� ���஢����
//      !!! ���� �ᯮ������ ⮫쪮 � �����⨨ ��⮢ HozOper.TiDk=777 !!!
wFlSchSub_Auto    = 0;
wFlSchSub_No      = 1;
wFlSchSub_Manual  = 2;
wFlSchSub_Select  = 3;

//--------------------------------------------------------------------------------
// ����⠭�� ��� ����ன�� ०��� �����⬠ � �����
wFlVal_Auto    = 0;    // � ����� �� ����ன�� 'TProv.FormTP'
wFlVal_HozDoc  = 1;    // � ����� ���㬥��
wFlVal_BaseDoc = 2;    // � ����� ��
wFlVal_No      = 3;    // ���
wFlVal_Convert = 4;    // � ����� �������樨
wFlVal_Commiss = 5;    // � ����� �����ᨨ
wFlVal_Manual  = 100;  // � �����⭮� �����

//--------------------------------------------------------------------------------
// ����⠭�� ��� ����ன�� ०��� 横���᪮� ��ࠡ�⪨ (ᯥ� ०��� �뤥���� �� ���浪� ��稭�� � ����)
wFlCycle_ValMustDie  = 10000; // �� ����⠬                 (to do ��।����� �� ���孨� ��������)
wFlCycle_ZarpMustDie = 12000; // �� �����⨪� ��௫���      (to do ���� ᮢᥬ)
wFlCycle_SpDocs      = 65529; // �����誠 ��� ᮢ���⨬��� wFlCycle_Val � �����⨪�� 10000 � 7.1
wFlCycle_SpSopr      = 65530; // �����誠 ��� ᮢ���⨬��� wFlCycle_Val � �����⨪�� 10000 � 7.1
wFlCycle_Manual      = 65531; // 横�.��ࠡ�⪠ �� ��⠫���
wFlCycle_Date        = 65532; // �� ��⠬
wFlCycle_BuhSchet    = 65533; // �� ��⠬ � ����⠬
wFlCycle_Valut       = 65534; // �����誠 ��� ᮢ���⨬��� wFlCycle_Val � �����⨪�� 10000 � 7.1
wFlCycle_10000KAU    = 65535; // �����誠 ��� ᮢ���⨬��� wFlCycle_Val � �����⨪�� 10000 � 7.1
wFlCycle_No          = 0;     // ��� 横�.��ࠡ�⪨

//--------------------------------------------------------------------------------
// ����⠭�� ��� ����ன�� ०��� �������樨 �஢����
wFlConvMode_No     = 0;
wFlConvMode_Debet  = 3;
wFlConvMode_Kredit = 4;

//--------------------------------------------------------------------------------
// ����⠭�� ��� ����ன�� ०��� ����� ��� �������樨 �஢����
wFlConvVal_NDE     = 0;
wFlConvVal_HozDoc  = 1;
wFlConvVal_BaseDoc = 2;
wFlConvVal_BegVal  = 3;
wFlConvVal_EndVal  = 4;
wFlConvVal_Manual  = 100;

//--------------------------------------------------------------------------------
// ����⠭�� ��� ����ன�� ०��� - ���冷� ��ࠡ�⪨ ����⠭��� �㬬� �஢����
wFlPrProv_PosChange =  0;
wFlPrProv_NegChange =  1;
wFlPrProv_PosNull   =  2;
wFlPrProv_NegNull   =  3;
wFlPrProv_No        =  4;

//--------------------------------------------------------------------------------
// ����⠭�� ��� �⮡ࠦ���� ��饩 ��� ���� ��� ��� �����⨪ (��� SetEnableModeMenu ����䥩� TXOMenu)
cgModeEnable_Auto   = 1; // �ନ஢��� ��⮬���᪨
cgModeEnable_No     = 2; // �� �ନ஢���
cgModeEnable_Manual = 4; // ������ �
cgModeEnable_Select = 8; // ����� �� ��⠫���
cgModeEnable_All    = 15;// �� ��襯���᫥��� ����⠭��

//--------------------------------------------------------------------------------
// ����⠭�� ��� ����ன�� ०���� �ନ஢���� ��� � ��� 7000-7999
// ���� ���� ��� ��� �����⨪
wFlKau_Auto       = 0;
wFlKau_No         = 1;
wFlKau_Manual     = 2;
wFlKau_Select     = 3;

wFlKau_AutoDebit  = 11;
wFlKau_AutoCredit = 12;

// �� ����ࠣ��⠬ (1)
wFlKau_PartyOrg   = 101;
wFlKau_VekslPlat  = 102;
wFlKau_VekslPl    = 103;
wFlKau_VekslPol   = 104;
wFlKau_VekslPlh   = 105;
wFlKau_VekslPolh  = 106;
wFlKau_VzPlat     = 107;
wFlKau_VzPol      = 108;
wFlKau_PlPlat     = 109;
wFlKau_PlPol      = 110;

// ���ࠧ������� �� ���㤭��� (2)
wFlKau_EmpPodr    = 111;

// �� �����(4), ��㯯�� ����� (8), ����� ����� (10), ��㯯�� ���⨩ ����� (11)
wFlKau_RawMc      = 112;
wFlKau_ProdMc     = 113;

// �� �� (6)
wFlKau_VzPlatDo   = 114;
wFlKau_VzPolDo    = 115;

// �� ��㯯�� �� (12)
wFlKau_VzPlatGrDo = 116;
wFlKau_VzPolGrDo  = 117;

// �� ������ࠬ (14)
wFlKau_VzPlatDog  = 118;
wFlKau_VzPolDog   = 119;

// �� ����ࠣ��⠬ (1)
wFlKau_CesiaProd  = 120;
wFlKau_CesiaPokup = 121;
wFlKau_CesiaDolg  = 122;

// �� �� (6)
wFlKau_CesiaDoHead = 123;
wFlKau_CesiaDoSpec = 124;

// �� ������ࠬ (14)
wFlKau_CesiaDogHead = 127;
wFlKau_CesiaDogSpec = 128;

// �࣠������ �� ������� (1)
wFlKau_DogovorOrg1     = 130;
wFlKau_DogovorOrg2     = 131;
wFlKau_DogovorGrOtpPol = 132;

// �� ����ࠣ����, �� ���ண� ����.����祭�� (1)
wFlKau_PlPlZa          = 133;

// �� ���ࠧ������� (2)
wFlKau_PodrFrom        = 134;
wFlKau_PodrTo          = 135;

// �� 䨧��᪨� ��栬 (3) � ��� (cgKau_KatMOL)
wFlKau_MOLFrom         = 136;
wFlKau_MOLTo           = 137;

// �� 業�ࠬ �⢥��⢥����� (22)
wFlKau_COOrg           = 138;
wFlKau_COPodr          = 139;
wFlKau_COPers          = 140;

// �� �࣠������, ���ࠧ�������, ���㤭����, ��
wFlKau_DogCO             = 141;
wFlKau_DogOtvCOSP        = 142;

// �� �� (6)
wFlKau_DoVeksLastGet     = 143;    // �� ��᫥����� ����祭�� ���ᥫ�
wFlKau_DoVeksLastPass    = 144;    // �� ��᫥���� ��।�� ���ᥫ�

// �� ��㯯�� �� (12)
wFlKau_GrDoVeksLastGet   = 145;  // ��㯯� �� ��᫥����� ����祭�� ���ᥫ�
wFlKau_GrDoVeksLastPass  = 146;  // ��㯯� �� ��᫥���� ��।�� ���ᥫ�

// �� ������ࠬ (14)
wFlKau_DogVeksLastGet    = 147; // ������� ��᫥����� ����祭�� ���ᥫ�
wFlKau_DogVeksLastPass   = 148; // ������� ��᫥���� ��।�� ���ᥫ�

wFlKau_PeriodBegin         = 149;
wFlKau_PeriodEnd           = 150;
wFlKau_PeriodProporDays    = 151;
wFlKau_PeriodProporRabDays = 153; // �������୮ �� ࠡ�稬 ���
wFlKau_PeriodRavnomerno    = 154; // �������୮ �� ���⮢� ��ਮ���

// �� �࣠������, ���ࠧ�������, ���㤭����, ��
wFlKau_DogPlatCOSP       = 152;

// ������� �㭪樮���쭮��� TxoApi - ���짮��⥫�᪨� ०���
wFlKau_Mode0 = 160;
wFlKau_Mode1 = 161;
wFlKau_Mode2 = 162;
wFlKau_Mode3 = 163;
wFlKau_Mode4 = 164;
wFlKau_Mode5 = 165;
wFlKau_Mode6 = 166;
wFlKau_Mode7 = 167;
wFlKau_Mode8 = 168;
wFlKau_Mode9 = 169;

// ��� 横���᪮� ��ࠡ�⪨ �� ��, ��㯯�� ��, ������ࠬ �� ���������
wFlKau_DONakl          = 170;
wFlKau_DOGroupNakl     = 171;
wFlKau_DogNakl         = 172;

// ��� 横���᪮� ��ࠡ�⪨ �� ���譨� ���
wFlKau_KauReffSoprHoz  = 173;
wFlKau_KauReffOS       = 174;
wFlKau_KauReffNMA      = 175;
// ���, �⢥��⢥���� �� �஢������ ����樨 � ��������� � ����
wFlKau_GiveOper        = 176;

// ⮫쪮 ��� ������ "��㦡�" � 5.8 �� �� ������
wFlKau_OrgFromFirstPartySpSopr = 177;

// ���ࠧ������� �� ᠫ줮
wFlKau_SaldoSPO = 178;

// ���ࠧ������� �� ��� (2)
wFlKau_MOLPodr = 179;

// �����⨪� �� ���⥦���� ���㬥��, ��� (�� � ��㯯� ��)
wFlKau_HeadDoc = 180;

// ����ࠣ���, ���ࠧ�������, ���㤭�� �� ��
wFlKau_FromCO  = 181;

// 業�� �⢥��⢥����� �� ����ன��(22)
wFlKau_COTune  = 182;

// 業�� �⢥��⢥�����, �����祭�� � ��祥 �� ��
wFlKau_FromDO  = 183;

// ���/�����/�����⨪� �� ࠡ�祩 �����, �/�, �/�
wFlKau_SpCashManyKass   = 184;
wFlKau_SpCashManyRS     = 185;
wFlKau_SpCashManyValRS  = 186;
wFlKau_SpCashManyBuhSpr = 187;

// �⢥��⢥��� ���㤭��/���ࠧ�������/�࣠������ �� ࠡ�祩 �����, �/�, �/�
wFlKau_SpCashManyKass_xPerson   = 188;
wFlKau_SpCashManyKass_xPodr     = 189;
wFlKau_SpCashManyRS_xPerson     = 190;
wFlKau_SpCashManyRS_xOrg        = 191;
wFlKau_SpCashManyValRS_xPerson  = 192;
wFlKau_SpCashManyValRS_xOrg     = 193;

// ��㯯� ��, ��㯯� ��� �� ᯥ�䨪�樨 ������� ��� ���
wFlKau_FromSpec = 194;

// ०��� ��� ���� �஢����
wFlDat_DateNow = 195; //������ ��⥬��� ���
wFlDat_DateDoc = 196; //��� ���㬥��
wFlDat_DateDo  = 197; //��� ���㬥��-�᭮�����
wFlDat_DateHoz = 198; //��� 宧��⢥���� ����樨
wFlDat_DateBeg = 199; //��� ��砫� ���⭮�� ��ਮ��
wFlDat_DateEnd = 200; //��� ����砭�� ���⭮�� ��ਮ��

// �����⨪� �� ��ꥪ� ��ந⥫��⢠
wFlKau_FromKatStroy = 201;

// ��� 横���᪮� ��ࠡ�⪨ �� ���譨� ���
wFlKau_KauReffMC  = 202;
wFlKau_KauReffObjBuild  = 203;

// ��� 横���᪮� ��ࠡ�⪨ �� ��⠬ 䠪��ࠬ
wFlKau_SchFactNakl       = 204;
wFlKau_SchFactPlat       = 205;

// ��, ���ࠧ�������, �࣠������, ����㤭�� �⢥��⢥��� �� ��ꥪ� ��ந⥫��⢠
wFlKau_ResponsForBuild   = 206;

// ���� ��, ���� ���, ��㯯� �� � ����樨 "��������� ��㯯�/����"
wFlKau_Old  = 207;
wFlKau_New  = 208;

// �����⨪�-���筨�
wFlKau_KauFrom      = 209;
// �����⨪�-�����⥫�
wFlKau_KauTo        = 210;

// ࠡ�⭨� - ����� �ᯮ���� ��ꥪ� ᯥ�᭠�⪨ (��� ��� ���)
wFlKau_MbpWorker = 211;

// �����⨪� ��� �����䨪�樨 䨫���� � ���
wFlKau_CurFilialKAU = 212;

// �࣠������ �� ���� <�।���> ��� <����騪> ᮮ⢥�����饣� �।��,
// �易����� � ࠧ��ᨬ� ���⥦�� ���㬥�⮬.
wFlKau_CreditCreditor = 213; // �࣠������ �뤠��� �।�� (�� ���� <�।���>)
wFlKau_CreditDebitor  = 214; // �࣠������ ����稢�� �।�� (�� ���� <����騪>)

// ०��� ��� �����⬠ 横���᪮� ��ࠡ�⪨ ��壠���᪨� �஢����
wFlKau_Oborot_Debit        = 215; // C��/�����/�����⨪� �� ����� �஢����
wFlKau_Oborot_Credit       = 216; // ���/�����/�����⨪� �� �।�� �஢����
wFlKau_Oborot_PodrDebit    = 217; // ���� ���ࠧ������� �� ����� �஢����
wFlKau_Oborot_PodrCredit   = 218; // ���� ���ࠧ������� �� �।�� �஢����
wFlKau_Oborot_FpPeriod     = 219; // ��ਮ� �����஢���� �� ��� �஢����
wFlKau_Oborot_AnRel1       = 221; // �����⨪� �� ᮮ⢥��⢨� 1
wFlKau_Oborot_AnRel2       = 222; // �����⨪� �� ᮮ⢥��⢨� 2
wFlKau_Oborot_AnRel3       = 223; // �����⨪� �� ᮮ⢥��⢨� 3
wFlKau_Oborot_AnRel4       = 224; // �����⨪� �� ᮮ⢥��⢨� 4
wFlKau_Oborot_AnRel5       = 225; // �����⨪� �� ᮮ⢥��⢨� 5
wFlKau_Oborot_AnRel6       = 226; // �����⨪� �� ᮮ⢥��⢨� 6
wFlKau_Oborot_AnRel7       = 227; // �����⨪� �� ᮮ⢥��⢨� 7
wFlKau_Oborot_AnRel8       = 228; // �����⨪� �� ᮮ⢥��⢨� 8
wFlKau_Oborot_AnRel9       = 229; // �����⨪� �� ᮮ⢥��⢨� 9
wFlKau_Oborot_AnRel10      = 230; // �����⨪� �� ᮮ⢥��⢨� 10

// ०��� ��� �����⬠ 横���᪮� ��ࠡ�⪨ �������� ��� �������� �।��
wFlKau_DiaryAll   = 231; // ��� + �/�
wFlKau_Diary      = 232; // ������
wFlKau_DiaryBN    = 233; // ������� ���㬥���
wFlKau_DiaryIncom = 234; // ��室
wFlKau_DiaryNDS   = 235; // ���
wFlKau_DiaryReff  = 236; // ���譨� ���

// ०�� ��� �����⬠ AvisoNP
wFlKau_AnRodDocAviso = 237; // �����⨪� த�⥫�᪮�� ���㬥�� �����

// ������ ��� ������
wFlKau_BankPlat      = 238; // ���� ���⥫�騪
wFlKau_BankPol       = 239; // ���� �����⥫�
wFlKau_BankKorr      = 240; // ���� ����ᯮ�����
wFlKau_BankVeks      = 241; // ���� ���ᥫ���⥫�
wFlKau_MTR           = 242; // �����⨪� �� ��ꥪ� 楫����� ���
wFlKau_MTR_SpMOL     = 243; // ��� �� SpMtrAkt

// ��⥬�� ०��� wFlKau_������ ᫥��� �㬥஢��� �� ���浪�
// ��稭�� � ���ᨨ 5.85 ��� API �������� ��஭��� ࠧࠡ��稪��
// ⠪ �� ��������� ᢮� ᮡ�⢥��� ०��� � ������ �� 祫����᪨�
// ��������, ���஡��� �. TXOAPI.VIH ��ꥪ�� ObjTxoMenuServer � ObjTxoMenuPlugin
// ४�����㥬� �������� ��� ���짮��⥫�᪨� ०���� 5000..9999
