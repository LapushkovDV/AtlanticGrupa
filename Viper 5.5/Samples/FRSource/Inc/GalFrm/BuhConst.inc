//------------------------------------------------------------------------------
// ����⠭�� ��壠��ਨ
//------------------------------------------------------------------------------
// ����⠭�� ��� �ࠢ�筨�� ��⮢ (Table BuhSchet)(SprSchet.vip)
//------------------------------------------------------------------------------
  cgDefSch         =  '';       //����� ��� �� 㬮�砭��
  cgDefSub         =  '';       //����� ����� �� 㬮�砭��
  cgAddSch         =  '--';     //��� cmAddNewRec ���/�����
  cgSSSimv         =  '.';      //ࠧ����⥫� ��� � ����� � ��⠢��� ����
  cgNotSch         =  '--';     //�⮡�  ࠧ����� ������:
                                //"��� 䨫��� �� ����/������"
                                //� 䨫��� �� "���/����� �� ��।����"

  cgSchetLength    = 21;        // ����� ��� - ����� ��ப� ⨯� tSchet3

                                // BuhSchet.VidSald
  cgASchet         =  0;        // \ ��⨢�� ���
  cgPSchet         =  1;        //  | ���ᨢ�� ���
  cgAPSchet        =  2;        //  | ��⨢��-���ᨢ�� ���

                                // BuhSchet.PlanMode
  cgTempSch        =  1;        // \ �६���� ���

                                // BuhSchet.Balans
  cgBalance        =  0;        // \ �����ᮢ� ���
  cgOffBalance     =  1;        //  | �������ᮢ� ���

                                // BuhSchet.SetDef
                                // \ ...
  cgKassa          =  1;        //  | ����
  cgRS             =  2;        //  | ������
  cgValRS          =  3;        //  | ������
  cgOtchet         =  4;        //  | ������ � �������묨 ��栬�
  cgZarplata       =  5;        //  | ������ � ���ᮭ���� �� ����� ��㤠
  cgSale           =  6;        //  | ��������� �த�樨 (ࠡ��, ���)
  cgInterAcc       =  7;        //  | ����������� (�����)
  cgOS             =  8;        //  | �᭮��� �।�⢠
  cgNMA            =  9;        //  | �����ਠ��� ��⨢�
  cgAmortOS        = 10;        //  | ����⨧��� ��
  cgAmortNMA       = 11;        //  | ����⨧��� ���

  cgPayRoll        =  501;      //  | ���᫥���� �� ( ! ⮫쪮 ��� cgZarplata)
  cgDeposit        =  502;      //  | ���������      ( ! ⮫쪮 ��� cgZarplata)
  cgSubInterAcc    =  701;      //  | ����������� (�����) ( ! ⮫쪮 ��� cgInterAcc)

                                // BuhSchet.Saldo
  cgSaldo_RollToNDE     = 1;    // \  ᠫ줮 � ࠧ��� ������ ᢥ���� � ��樮���쭮� �������� ������
  cgSaldo_NoZeroForKau  = 2;    //  | �� �ନ஢��� �㫥��� ᠫ줮 �� �����⨪�
  cgSaldo_ZeroInSameVal = 4;    //  | ᠫ줮 �� �����⨪� ����� �㫥�� �᫨ ��� � ����� ����� ��� ���
  cgSaldo_RollToSub     = 8;    //  | ᠫ줮 �� �����⨪� ᢮�稢��� �� ����⮢ ���
  cgSaldo_RollInReport  = 16;   //  | ᢮�稢��� ᠫ줮 � �����

                                // BuhSchet.Visib
  cgNoPodr              =   1;  // \  ��� �� ���ࠧ������� �� �������
  cgMustPodr            =   2;  //  | ��� �� ���ࠧ������� ������� ��易⥫쭮
       cgReservedPodr04 =   4;  //  |   �� �ᯮ������ ����, �� ��१�ࢨ஢���
       cgReservedPodr01 =   8;  //  |   �� �ᯮ������ ����, �� ��१�ࢨ஢���
  cgCheckPodr           =  15;  //  |   �᫨ (BuhSchet.Visib and cgCheckPodr) = 0 � ��� ��몭������
                                //  |   15 = 1 + 2 + 4 + 8
  cgNoVal               =  16;  //  | ��� � ����� �� �������
  cgMustVal             =  32;  //  | ��� � ����� ������� ��易⥫쭮
       cgReservedVal64  =  64;  //  |   �� �ᯮ������ ����, �� ��१�ࢨ஢���
       cgReservedVal128 = 128;  //  |   �� �ᯮ������ ����, �� ��१�ࢨ஢���
  cgCheckVal            = 240;  //  |   �᫨ (BuhSchet.Visib and cgCheckVal) = 0 � ��� ��몭������
                                //  |   240 = 16 + 32 + 64 + 128
//------------------------------------------------------------------------------
  cgPick_FilterFirst = 65520; // ᠬ� ���� 䨫���
  cgPick_TiDk        = 65523; // ��� 宧. ���㬥��
  cgPick_PodrK       = 65524; // ���ࠧ������� ����. ���
  cgPick_SubK        = 65525;
  cgPick_SchK        = 65526;
  cgPick_Money       = 65527; // ��� �/�
  cgPick_PostPol     = 65528; // ���⠢騪�/�����⥫� - ᨭ���� �࣠����権
  cgPick_Valut       = 65529;
  cgPick_Podr        = 65530;
  cgPick_SubSch      = 65531;
  cgPick_Schet       = 65532;
  cgPick_Descr       = 65533;
  cgPick_DesGr       = 65534;
  cgPick_Filial      = 65535;
//------------------------------------------------------------------------------
// ���祭� ���⮢ �� ��壠���᪨� �����
// B_AnUch.pas
  cgRepBuh_AnUch          =  10000;    // �������᪨� ��� �� ����
  cgRepBuh_GrKau          =  10001;    // �������᪨� ��� �� ��㯯� ��⮢
  cgRepBuh_AnUchVal       =  10002;    // �������᪨� ��� �� ���� � �����
  cgRepBuh_RepTree        =  10003;    // ������᪨� �����
  cgRepBuh_ConsAnUch      =  10004;    // �������᪨� ��� �� ���� � ���᮫���樨
  cgRepBuh_ConsGrKau      =  10005;    // �������᪨� ��� �� ��㯯� ��⮢ � ���᮫���樨
  cgRepBuh_PostPol        =  10006;    // ������ �� ���⠢騪��/�����⥫�
  cgRepBuh_AnDebts        =  10007;    // ������ ������������
// B_ObVed.pas
  cgRepBuh_GVKassa        =  10010;    // ��㯯�஢�筠� ��������� (����)
  cgRepBuh_GVBank         =  10011;    // ��㯯�஢�筠� ��������� �� ���� (���)
  cgRepBuh_ObPodr         =  10012;    // ������ �� �������� ���ࠧ�������
// B_DayUch.pas
  cgRepBuh_RubKassa       =  10020;    // �㡫���� ����
  cgRepBuh_ValKassa       =  10021;    // ����⭠� ����
  cgRepBuh_DayUch         =  10022;    // ��������� ��� �� ����
// DeltaVal.pas
  cgRepBuh_DayUchVal      =  10023;    // ��������� ��� � ���� ���ᮢ�� ࠧ���
// B_ObSub.pas
  cgRepBuh_ObSub          =  10030;    // ������ � ࠧ१� ����⮢
  cgRepBuh_JOrd1          =  10031;    // ������ � ࠧ१� ����⮢ �� ���� ���� (��-1)
  cgRepBuh_MainBook       =  10032;    // ������� �����
  cgRepBuh_AllMainBook    =  10033;    // ������� ����� � ������騬 �⮣��.
  cgRepBuh_MainBookBudzet =  10034;    // ������� ����� ��� ����� �࣠����権
// B_Valuta.pas
  cgRepBuh_ObValut        =  10040;    // ������ � �����
  cgRepBuh_ObSubVal       =  10041;    // ������ �� ����⠬ � ࠧ१� �����
  cgRepBuh_DeltaVal       =  10042;    // ��ᬮ�� ���ᮢ�� ࠧ���
  cgRepBuh_MonDelta       =  10049;    // ���� ���ᮢ�� ࠧ��� �� �����
// �� ��᪠��
  cgRepBuh_SeeSalM        =  10050;    // ��ᬮ�� ᠫ줮 �� ��砫� �����
  cgRepBuh_SeeSalD        =  10051;    // ��ᬮ�� ᠫ줮 �� ����
  cgRepBuh_SeeSalDKassa   =  10052;    // ��ᬮ�� ᠫ줮 �� ���� �� ����
  cgRepBuh_SaldoDAS       =  10054;    // ᠫ줮 �� ��㯯�� ��⮢ (���)
// B_Saldo.pas
  cgRepBuh_ConsSeeSalM    =  10053;    // ��ᬮ�� ᠫ줮 �� ��砫� �����
  cgRepBuh_CalcSaldoDay   =  10056;    // ������� ᠫ줮 �� ��砫� ���
  cgRepBuh_CalcSaldoMon   =  10057;    // ������� ᠫ줮 �� ��砫� �����
  cgRepBuh_CheckSaldoMon  =  10058;    // �ࠢ����� ᠫ줮 �� ��砫� �����
  cgRepBuh_CalcSaldoDay50 =  10059;    // ������� ᠫ줮 �� ��砫� ��� �� ����
// B_JornAn.pas
  cgRepBuh_JOrder         =  10060;    // ��ୠ��-�थ�, �嬠⪨ � �.�.
// JoUnLoad.vip
  cgRepBuh_JoTuned        =  10061;    // 㭨���ᠫ�� ��ୠ�-�थ�
// MoUnLoad.vip
  cgRepBuh_MemoOrder      =  10062;    // ����ਠ��� �थ�
// ?.vip
  cgRepBuh_BookJornMain   =  10063;    // ����� ��ୠ�-�������

  cgRepBuh_HierAn         =  10064;    // ���ࠪ⨢�� �������᪨� ����
  // JornOperation.vip
  cgRepBuh_JornOperation  =  10065;    // ��ୠ� ����権 - ���� ���
  // CardAccount.vip
  cgRepBuh_CardAccount    =  10066;    // ����窠 ��� �।�� � ���⮢
//------------------------------------------------------------------------------
  cgDefRepNastrName     = '<����ன�� �� 㬮�砭��>';
//------------------------------------------------------------------------------
// BuhFiltr.vip
//------------------------------------------------------------------------------
  cgBuhFilter_SaldMoun     = 1;
  cgBuhFilter_SaldDay      = 2;
  cgBuhFilter_SaldoNM      = 3;
  cgBuhFilter_Oborot       = 4;  // ������
  cgBuhFilter_BookProv     = 5;  // ����� �஢���� (�맮� �� ����)
  cgBuhFilter_PrnOborot    = 6;  // ����� ����⮢
  cgBuhFilter_PrnSaldDay   = 7;  // ��ᬮ�� ᠫ줮 �� ����
  cgBuhFilter_PrnSalDKassa = 8;  // ��ᬮ�� ᠫ줮 �� ���� �� ����
  cgBuhFilter_PrnSaldMon   = 9;  // ����� ᠫ줮 �� �����
  cgBuhFilter_SeeSaldMon   = 10; // ����� ᠫ줮 �� ����� (�� ����)
  cgBuhFilter_SaldoBL      = 11; // ���줮 �� ����祭��� ������������ __BackLog__

  cgBuhFilter_SchetD    = 65001;
  cgBuhFilter_SubSchD   = 65002;
  cgBuhFilter_KauD1     = 65003;
  cgBuhFilter_KauD2     = 65004;
  cgBuhFilter_KauD3     = 65005;
  cgBuhFilter_KauD4     = 65006;
  cgBuhFilter_KauD5     = 65007;
  cgBuhFilter_KauD6     = 65008;
  cgBuhFilter_PodrD     = 65009;

  cgBuhFilter_SchetK    = 65010;
  cgBuhFilter_SubSchK   = 65011;
  cgBuhFilter_KauK1     = 65012;
  cgBuhFilter_KauK2     = 65013;
  cgBuhFilter_KauK3     = 65014;
  cgBuhFilter_KauK4     = 65015;
  cgBuhFilter_KauK5     = 65016;
  cgBuhFilter_KauK6     = 65017;
  cgBuhFilter_PodrK     = 65018;

  // ModeSet1 - ��᪨ ��� ��ࠬ��஢ �᭮����� 䨫���
  maskSchetD  =      1; // 0001h;
  maskSubD    =      2; // 0002h;
  maskKauD1   =      4; // 0004h;
  maskKauD2   =      8; // 0008h;
  maskKauD3   =     16; // 0010h;
  maskKauD4   =     32; // 0020h;
  maskKauD5   =     64; // 0040h;
  maskKauD6   =    128; // 0080h;
  maskPodrD   =    256; // 0100h;
  maskSchetK  =    512; // 0200h;
  maskSubK    =   1024; // 0400h;
  maskKauK1   =   2048; // 0800h;
  maskKauK2   =   4096; // 1000h;
  maskKauK3   =   8192; // 2000h;
  maskKauK4   =  16384; // 4000h;
  maskKauK5   =  32768; // 8000h;
  maskKauK6   =  65536; //10000h;
  maskPodrK   = 131072; //20000h;

  maskAllD    = maskSubD or maskKauD1 or maskKauD2 or maskKauD3
                         or maskKauD4 or maskKauD5 or maskKauD6;
  maskAllK    = maskSubK or maskKauK1 or maskKauK2 or maskKauK3
                         or maskKauK4 or maskKauK5 or maskKauK6;

  // ModeSet2 - ��᪨ ��� ��ࠬ��஢ �������⥫쭮�� 䨫���
  maskSoprHoz =      1; // 0001h;
  maskDescr   =      2; // 0002h;
  maskDesGr   =      4; // 0004h;
  maskKlProv  =      8; // 0008h;
  maskVal     =     16; // 0010h;
  maskFilial  =     32; // 0020h;
  maskTXO     =     64; // 0040h;
  maskDate    =    128; // 0080h;
  maskViOb    =    256; // 0100h;
//------------------------------------------------------------------------------
// BProcess.pas ��᪠ ���᪠ 䨫��஢ TBuhProcess.FindMask
  cgFindMask_No      =    0; // no
  cgFindMask_Filial  =    1; // cgPick_Filial
  cgFindMask_DesGr   =    2; // cgPick_DesGr
  cgFindMask_Schet   =    4; // cgPick_Schet
  cgFindMask_SubSch  =    8; // cgPick_SubSch
  cgFindMask_Podr    =   16; // cgPick_Podr
  cgFindMask_Kau     =   32; // no
  cgFindMask_PostPol =   64; // cgPick_PostPol
  cgFindMask_Valut   =  128; // cgPick_Valut
  cgFindMask_SchK    =  256; // cgPick_SchK
  cgFindMask_SubK    =  512; // cgPick_SubK
  cgFindMask_PodrK   = 1024; // cgPick_PodrK
  cgFindMask_TiDk    = 2048; // cgPick_TiDk
  cgFindMask_Descr   = 4096; // cgPick_Descr
//------------------------------------------------------------------------------
// �� ����� pas\buh\*.pas - "��������� � ..."
  cgVedVal_NDE       =    0; // NDE
  cgVedVal_RepVal    =    1; // ReportVal
  cgVedVal_NdeRep    =    2; // NDE + RepVal
  cgVedVal_KolNde    =    3; // Kol + NDE
  cgVedVal_KolRep    =    4; // Kol + RepVal
//------------------------------------------------------------------------------
// ��᪠��. bGetFil.VedVal - ��ࠡ�⪠ ������
// [V]ed[Val]
  vv_All             =    0;   // �� �஢����
  vv_Val             =    1;   // �஢���� � ����� (�㬬� � ����� <> 0)
  vv_ValAndKR        =    2;   // �஢���� � ����� � �஢���� �� �� �����
  vv_NoVal           =    3;   // �஢���� ⮫쪮 � ��� (��� �஢���� �� ��)
//------------------------------------------------------------------------------
// BProcess.pas �������⥫�� ��ࠬ���� ���� ᠫ줮 TBuhProcess.CalcSaldo
  cgCS_Simple        =    0;   // ��몭������ ����
  cgCS_RollFirst     =    1;   // ������� �����⨪� �� ��ࢮ�� �஢��
  cgCS_NoDesGr       =    2;   // ��� ��� ����� ࠡ��� ��㯯
  cgCS_MakeZero      =    4;   // ��ନ஢��� �㫥��� ᠫ줮
  cgCS_SaveVal       =    8;   // ��⠢���� ��� ���� �� ��뫪� �� ������
                               // �᫨ SumV = 0, SumR <> 0. �. ��� 102.39559
//------------------------------------------------------------------------------
// �������� ��饣� ����䥩� ����� �����䨪��஢.
  cgIdent_All        = 31;     // ��
  cgIdent_TXO        = 1;      // ��⥬�� �����䨪���� ��� TXO
  cgIdent_HozForm    = 2;      // ���� �������� TXO
  cgIdent_PAT        = 4;      // ��� �����䨪����
  cgIdent_Typical    = 8;      // ⨯��� ������� � ����⠭��
  cgIdent_Func       = 16;     // ��饨ᯮ��㥬� �㭪樨
  cgIdent_IdentAPI   = 1024;   // API �����䨪��஢
  cgIdent_TXODef     = 32;     // ��⨢��� �������� - ��⥬�� �����䨪���� ��� TXO
  cgIdent_HozFormDef = 64;     // ��⨢��� �������� - ���� �������� TXO
  cgIdent_PATDef     = 128;    // ��⨢��� �������� - ��� �����䨪����
  cgIdent_TypicalDef = 256;    // ��⨢��� �������� - ⨯��� ������� � ����⠭��
  cgIdent_FuncDef    = 512;    // ��⨢��� �������� - ��饨ᯮ��㥬� �㭪樨
  cgIdent_IdentAPIDef= 2048;   // ��⨢��� �������� - API �����䨪��஢
//------------------------------------------------------------------------------
// ����⠭�� ��� ⨯�� ��ୠ���-�थ஢ (B_JornAn.pas, JornTune.vip, ...)
// [j]ornal[o]rder
  joJornalOrder   = 0;
  joAnalitObor    = 1;
  joOborSaldVed   = 2;
  joMainBook      = 3;
  joChess         = 4;
  joOtherVed      = 5;

  joJornalAnalit  = 101;
  joMemoOrder     = 111;

  joOnLineGroup   = 201;

  joOperation     = 301;  // ��ୠ� ����権
  joCardAccount   = 302;  // ����窠 ���
//------------------------------------------------------------------------------
//����⠭�� ��� ࠡ��� � ��।������� ������஢
//[l]ink[d]ogovor
  ld_Begin = 1;
  ld_Result = 2;
//------------------------------------------------------------------------------
// ����⠭�� ��ࠬ��஢ ����᪠ Oborot
  cgiOborot_AllOborot         = 0; // ��
  cgiOborot_DocOborot         = 1; // �� ���㬥���
  cgiOborot_SoprHozOborot     = 4; // �� SoprHoz
  cgiOborot_DocSpOborot       = 5; // �� ����樨 ᯥ�䨪�樨 ���㬥��
// ��� ����䥩�
  cgiOborot_BrowseFull        = 0; // browse � ������� �������⥫쭮� ���ଠ樨 ᭨��
  cgiOborot_ScreenFull        = 1; // ���� � ����������
  cgiOborot_BrowseShort       = 2; // browse
  cgiOborot_ScreenShort       = 3; // �����쪨� screen � �����㬮� ���ଠ樨
//------------------------------------------------------------------------------
// ����⠭�� ��� ���ᮢ�� ࠧ���:
//          ! ����� ��� ��᪠�� � ���⮬ ���ᮢ�� - ��७��� � DiffRate.vih
// Valut.[D]ay[M]on
  dmMonth = 0;
  dmDay   = 1;
// Valut.[V]id[O]b - �. Valut.vip - List ��� Valut.VidOb
  vo_All     =  0;
  vo_Oborot  =  1;
  vo_Saldo   =  2;
  vo_SD_OD   =  3;
  vo_SK_OK   =  4;
  vo_SD      =  5;
  vo_SK      =  6;
  vo_OD      =  7;
  vo_OK      =  8;
//------------------------------------------------------------------------------
// ����⠭�� ��� ��⮤� SetValueParam ��ꥪ⭮�� ����䥩� ObjDateRangeParam
  cgDateRange_rtDay      = 0;
  cgDateRange_rtMonth    = 1;
  cgDateRange_rtQuarter  = 2;
  cgDateRange_rtHalfYear = 3;
  cgDateRange_rtYear     = 4;
  // ���祭�� ��ࠬ��� cgDateRange_rtDay
  cgDateRange_rsBegPeriod = 8;
  cgDateRange_rsEndPeriod = 9;
  cgDateRange_rsHozDoc    = 10;
//------------------------------------------------------------------------------
// ����⠭�� ��� ����� ��� �����䨪��஢
  // १���� ������⢮/� �����
    cgPAT_ResVal       =  0; // १���� � �����
    cgPAT_ResKol       =  1; // १���� ������⢮
  // ᠫ줮/������/�஢����
    cgPAT_Saldo        =  0; // ᠫ줮
    cgPAT_Oborot       =  1; // ������
    cgPAT_Provod       =  2; // �஢����
  // �����/�।��
    cgPAT_Debit        =  0; // �����
    cgPAT_Kredit       =  1; // �।��
  // ᠫ줮 �室�饥/��室�饥
    cgPAT_GoOut        =  0; // ��室�饥 ᠫ줮
    cgPAT_GoIn         =  1; // �室�饥 ᠫ줮
  // ���ਯ��/��㯯� ���ਯ�஢ (��� ����⮢/�஢����)
    cgPAT_Descr        =  0; // ���ਯ��
    cgPAT_DesGr        =  1; // ��㯯� ���ਯ�஢
  // ��ਮ�
    cgPAT_CodePeriod   =  0; // � ����� ��� ��ꥪ�
  // ������� ��� (��� �⭮�⥫쭮�� ��ਮ��)
    cgPAT_AutoDate     =  0;
    cgPAT_BegCur       =  1; // ��砫� ⥪�饣� ���⭮�� ��ਮ��
    cgPAT_BegPer       =  2; // ��砫� ��ਮ�� �� ����ன��
    cgPAT_EndPer       =  3; // ����� ��ਮ�� �� ����ன��
    cgPAT_HozDoc       =  4; // ��� 宧���㬥��
  // 䨫���, 䨫��� �� ������, ���, �����, ���ࠧ�������, �����⨪�
    cgPAT_All          = 0; // �� �ᥬ ��ꥪ⠬ ���
    cgPAT_Nrec         = 1; // Nrec ��ꥪ�
    cgPAT_Code         = 2; // ��᪠ �� ��� ��ꥪ�
    cgPAT_Auto         = 3; // "?" ��⮯���⠭���� ��ꥪ�
    cgPAT_AutoReg      = 4; // "?" ��⮯���⠭���� ��ꥪ� �� ��������� ०��� �����⨪�
    cgPAT_Nul          = 5; // "���" - ��ꥪ� �� ��।����
//------------------------------------------------------------------------------
// ����⠭� ��� ��樮���쭮� �������� �������
  cNDE = 0;
//------------------------------------------------------------------------------
// ����⠭�� ��� ��ꥪ� ExcelFormat
  cgGetNastDecimalDigit = 65535; // �᫨ ������ ����⠭� ����⠢����� � � ��ࠬ���
                                 // ColDecimalDigit - ������⢮ ������ ��᫥ ����⮩,
                                 // �� ����� ������� �� ����ன�� Fin.ShoWdigit
                                 // "������⢮ �⮡ࠦ����� ������ ��᫥ ����⮩ � �����"
//------------------------------------------------------------------------------
// ����⠭�� ��� �������� ���⥭��� �� FastReport
  cgETax_EditModeExpert = 0;
  cgETax_EditModeUser = 1;
//------------------------------------------------------------------------------
// ����⠭�� ��� �ਢ離� ���㬥�⮢ � ����ᮢ�� ���� � �ਪ��� �� �������஢��
  // ������ �맮�� ����䥩� GetKO � GetKO_Form
  cgTip_PrihDocAO  = 1;  // ��室�� ���㬥��� �� ����ᮢ��� �����
  cgTip_RashDocAO  = 2;  // ���室�� ���㬥��� �� ����ᮢ��� �����
  cgTip_RashDocKU  = 3;  // ���室�� ���㬥��� �� �ਪ��� �� �������஢��
  cgTip_AvnOtchKU  = 4;  // ����ᮢ� ����� �� �ਪ��� �� �������஢��
  cgTip_PlatDocPr  = 5;  // ���⥦�� ���㬥��� �� �ਪ��� �� �������஢��
  cgTip_PlatDocAO  = 6;  // ���⥦�� ���㬥��� �� ����ᮢ��� �����
  // ���� �痢� ���㬥�⮢ � ⠡��� DocPodot
  cgLink_PrihDocAO = 99; // ���� ��室��� ���㬥�⮢ � ����ᮢ� ���⮬ (��� � ����)
  cgLink_RashDocAO = 9;  // ���� ��室��� ���㬥�⮢ � ����ᮢ� ���⮬ (���, ����, ��, ��� � ��)
  cgLink_RashDocKU = 2;  // ���� ��室��� ���㬥�⮢ � �ਪ���� �� �������஢�� (���, ����, �� � ���)
  cgLink_AvnOtchKU = 22; // ���� ����ᮢ�� ���⮢ � �ਪ���� �� �������஢�� (��)
  cgLink_ReesPlDoc = 3;  // ���� ॥��� �� ����᫥��� � ���� � ���⥦�� ���㬥�⮬ (�� � ���)
  cgLink_SpPlVedKU = 23; // ���� ���㤭��� � ���⥦��� �������� � ���㤭���� � �ਪ��� �� �������஢�� (��)
  // ���� ��⥩ ��室�� (RashDoc.TipDoc)
  cgRashDoc_KU   = 2;  // ����䨪��� �������஢�筮�� 㤮�⮢�७�� (��)
  cgRashDoc_RKO  = 8;  // ����䨪��� ���室���� ���ᮢ��� �थ� (���)
  cgRashDoc_AO   = 9;  // ����䨪��� ����ᮢ��� ���� (��)
  cgRashDoc_VRKO = 18; // ����䨪��� ����⭮�� ��室���� ���ᮢ��� �थ� (����)
  cgRashDoc_Drvr = 33; // ���室� ����⥫� (ᮯ஢�����饣�)
  cgRashDoc_Tour = 34; // �믫��� � ३�
//------------------------------------------------------------------------------
// ��� ���⮢
  cgFastReport = 0;      // ���� FastReport
  cgFCOM       = 1;      // ���� FCOM
//------------------------------------------------------------------------------
// ���� ������ [V]id[S]um, ���ਬ�� MBook.VidSum, AnSchNew.VidSum
  vsSaldoVhD = 1;        // ��������� � ��᫮� SaldMoun.ViOb (����⮢�� ᠫ줮)
  vsSaldoVhK = 2;        // ��������� � ��᫮� SaldMoun.ViOb (�।�⮢�� ᠫ줮)
  vsOborDeb  = 3;
  vsOborKred = 4;
//------------------------------------------------------------------------------
  // ������ �����஢�� �����
  cgProt_None    =   0; // ���㬥�� ����㯥� ��� ।���஢����
  cgProt_Descr   =   1; // �� ���ਯ���
  cgProt_DesGr   =   2; // �� ��㯯� ���짮��⥫��
  cgProt_Obor    =   4; // �� ������ ����⮢
  cgProt_Stat    =   8; // �� ������
  cgProt_Date    =  16; // �� �����⮬� ��ਮ��
  cgProt_Edit    =  32; // ��㣮� ���짮��⥫� ।������ ⥪�騩 ���㬥��
  cgProt_CloseOb =  64; // � �������樨 ���� �஢���� � �����⮬ ��ਮ��
  cgProt_Protect = 128; // � ��⥬� Protect �� ���� �ࠢ� �� ।���஢���� ⠡����

  //----------------------------------------------------------------------------
  // ���祭�� ���� Oborot.RuchAuto
  cgOborotManual   = 0;  // ��筠� �஢����
  cgOborotAuto     = 1;  // ��⮬���᪠�
  cgOborotModified = 7;  // ��⮬���᪠�, ��⥬ ��।���஢����� ������

//------------------------------------------------------------------------------
// ���筨� ������ ��� �ନ஢���� ���㬥�� (PLPOR.WRESERV, ��⮢�� ��᪠)
//------------------------------------------------------------------------------
  cgSrc_Salary          = 1; // १����� ���� �/� ("��ࠡ�⭠� ����")
  cgSrc_IptRegisters    = 2; // ॥���� �����ਮ�� ("��ࠡ�⭠� ����")
  cgSrc_IptTaxes        = 4; // ������ �����ਮ�� ("��ࠡ�⭠� ����")
