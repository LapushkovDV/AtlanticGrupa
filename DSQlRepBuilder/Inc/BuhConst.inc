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
  cgSaldo_RollToPodr    = 32;   //  | ᢮�稢��� ᠫ줮 �� ���ࠧ�������

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
  cgPick_CorrespO    = 65017; // ���⢥��⢨� ��� �᭮����� ���
  cgPick_CorrespK    = 65018; // ���⢥��⢨� ��� ����. ���
  cgPick_JobType     = 65019; // ��� ��� ᢥન(UserReport02)
  cgPick_FilterFirst = 65100; // ᠬ� ���� 䨫���
  cgPick_AtlBranch   = 65519; // 䨫��� �� 䨫����� (atl_branch)
  cgPick_Status      = 65520; // 䨫��� �� ����ᠬ
  cgPick_TXO         = 65521; // � ���ࠪ⨢��� ����� 䨫��� �� ���
  cgPick_ExtAnInTree = 65522; // � ������᪨� ������ ��� ��।������ �஢�� ��㯯�஢�� "���譨� ���"
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
  cgRepBuh_AktReview   =  10067;
  // ��࠭���� ����஥� � ����⭮� ��।������ ���⥦��
  cgDistPl_PakRaspPlat    =  10068;
  // ��࠭���� ����஥� � ����⭮� ��।������ ���⥦�� � ��⮬ �����⮢ � ४����権
  cgDistPl_ActRecDistr    =  10069;
  // ��࠭���� ����஥� � ����⭮� ��।������ ���� ����ᮢ
  cgDistPl_CredAdvDisrt   =  10070;
  // ��࠭���� ����஥� ��ꥪ� ���� �������
  cgDistPl_NalFin         =  10071;
  // ��⠫�� ᮮ⢥��⢨� �����⨪
  cgRepBuh_KatAnRel       =  10072;
  // ���⢥��⢨� �����⨪ � ᯥ�䨪�樥�
  cgRepBuh_AnRel          =  10073;
  // ���� ���
  cgRepBudg_SpravkaZabalance = 11000;  // ��ࠢ�� � ����稨 �����⢠ � ��易⥫��� �� �������ᮢ�� ����

  // ������� � ���짮��⥫�᪨� �����
  cgRepBuh_UserRep01      =  65000;    // �ࠢ�� �� ������᪮�/�।���᪮� ������������
  cgRepBuh_UserRep02      =  65100;    // ��� ᢥન
  cgRepBuh_UserRep03      =  65101;    // ���᫥��� ��業⮢ �� ������⠬
  cgRepBuh_UserRep04      =  65102;    // ��� ������ਧ�樨 (��� ���� ��⨢�� � ��易⥫���)

  cgRepBuh_PatAuto      =  65201;    // ���ࠪ⨢�� ���� ����᪠��� �� ���

  cgRepBuh_HierAnUser   =  65202;    // ���ࠪ⨢�� ���� ����᪠��� �� ��� ��� ����. ��ࠡ�⮪

//------------------------------------------------------------------------------
  cgDefRepNastrName     = '<����ன�� �� 㬮�砭��>';
  cgDefRepNastrNameDO   = '<����ன�� �� 㬮�砭�� ��� ��>';
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
  cgBuhFilter_ActSverOborot = 12; // ����⠭�� ��� ��� ��� ᢥન
  cgBuhFilter_ActSverSaldo  = 13; // ����⠭�� ��� ��� ��� ᢥન

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
  maskNoDok   =    128; // 0080h;
  maskStatus  =    256; // 0100h;
  maskDate    =    512; // 0200h;
  maskViOb    =   1024; // 0400h;
//------------------------------------------------------------------------------
// BProcess.pas ��᪠ ���᪠ 䨫��஢ TBuhProcess.FindMask
  cgFindMask_No        =      0; // no
  cgFindMask_Filial    =      1; // cgPick_Filial
  cgFindMask_DesGr     =      2; // cgPick_DesGr
  cgFindMask_Schet     =      4; // cgPick_Schet
  cgFindMask_SubSch    =      8; // cgPick_SubSch
  cgFindMask_Podr      =     16; // cgPick_Podr
  cgFindMask_Kau       =     32; // no
  cgFindMask_PostPol   =     64; // cgPick_PostPol
  cgFindMask_Valut     =    128; // cgPick_Valut
  cgFindMask_SchK      =    256; // cgPick_SchK
  cgFindMask_SubK      =    512; // cgPick_SubK
  cgFindMask_PodrK     =   1024; // cgPick_PodrK
  cgFindMask_TiDk      =   2048; // cgPick_TiDk
  cgFindMask_Descr     =   4096; // cgPick_Descr
  cgFindMask_TXO       =   8192; // � ���ࠪ⨢��� ����� 䨫��� �� ���
  cgFindMask_Status    =  16384; // cgPick_Status
  cgFindMask_CorrespO  =  65536; // cgPick__CorrespO
  cgFindMask_CorrespK  = 131072; // cgPick__CorrespK
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
  cgCS_RollToNDE     =   16;   // ������� ����⮥ ᠫ줮 � ���
  cgCS_RollSecond    =   32;   // ������� �����⨪� �� ��ண� �஢��
  cgCS_RollThird     =   64;   // ������� �����⨪� �� ���쥣� �஢��
  cgCS_RollThourth   =  128;   // ������� �����⨪� �� �⢥�⮣� �஢��
  cgCS_RollFifth     =  256;   // ������� �����⨪� �� ��⮣� �஢��
  cgCS_RollSixth     =  512;   // ������� �����⨪� �� ��⮣� �஢��
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

  cgIdent_TAX        = 4096;    // ����⠭�� ���

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
  joMemoOrderH    = 112;
  joMemoOrderF    = 114;
  joAktReviews    = 113;
  joOnLineGroup   = 201;

  joOperation     = 301;  // ��ୠ� ����権
  joCardAccount   = 302;  // ����窠 ���
  // ����ன�� ����
  joIKSO          = 333;
  //��� ������ ��� ᢥન(cgRepBuh_UserRep02)
  joAktReview     = 400;

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
  cgiOborot_OneOborot         = 6; // �� ������ ��������� ������
// ��� ����䥩�
  cgiOborot_BrowseFull        = 0; // browse � ������� �������⥫쭮� ���ଠ樨 ᭨��
  cgiOborot_ScreenFull        = 1; // ���� � ����������
  cgiOborot_BrowseShort       = 2; // browse
  cgiOborot_ScreenShort       = 3; // �����쪨� screen � �����㬮� ���ଠ樨
//------------------------------------------------------------------------------
// ����⠭�� ��� ���ᮢ�� ࠧ���:
//          ! ����� ��� ��᪠�� � ���⮬ ���ᮢ�� - ��७��� � DiffRate.vih
// Valut.[D]ay[M]on
  dmMonth   = 0;
  dmDay     = 1;
  dmControl = 2;
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
  cgDateRange_rsCurDate   = 11;
//------------------------------------------------------------------------------
// ����⠭�� ��� ����� ��� �����䨪��஢
  // १���� ������⢮/� �����
    cgPAT_ResVal       =  0; // १���� � �����
    cgPAT_ResKol       =  1; // १���� ������⢮
    cgPAT_NDEValDoc    =  2; // १���� � ��� � ����� ���㬥��  
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
    cgPAT_Filter       = 6; // @"䨫���" - ��ꥪ�� ����᫥�� � 䨫���

    cgPAT_Filter_Nrec     = 0; // ������ �� NREC-�
    cgPAT_Filter_Mask     = 1; // ������ �� ��᪥
    cgPAT_Filter_External = 2; // ���譨� 䨫���
//------------------------------------------------------------------------------
// ����⠭� ��� ��樮���쭮� �������� �������
  cNDE = 0;
//------------------------------------------------------------------------------
// ����⠭�� ��� ��ꥪ� ExcelFormat
  cgGetNastDecimalDigit = 65535; // �᫨ ������ ����⠭� ����⠢����� � ��ࠬ���
                                 // ColDecimalDigit - ������⢮ ������ ��᫥ ����⮩,
                                 // � ����� ������� �� ����ன�� Fin.ShoWdigit
                                 // "������⢮ �⮡ࠦ����� ������ ��᫥ ����⮩ � �����"
//------------------------------------------------------------------------------
// ����⠭�� ��� ��������� ���⭮�� �� FastReport
  cgETax_EditModeExpert = 0;
  cgETax_EditModeUser = 1;
//------------------------------------------------------------------------------
// ���ᮢ� ��������
  // �ਧ���� ��ࠡ�⪨ ᯥ�䨪�樨 (���� SpPlVed.Priznak, SpVedDepon.Priznak)
  cgNo = 0;       // ��� ���㬥�⮢
  cgPD = 1;       // ��ନ஢�� ���⥦�� ���㬥�� �� �뤠��
  cgVD = 2;       // ��ନ஢��� ��������� ������஢����
  cgAll = 3;      // ��ନ஢��� ���⥦�� ���㬥�� � ��������� ������஢����

  cgVoid = 0;     // ��������� � ���
  cgBegin = 1;    // ��������� � ࠡ��
  cgClose = 2;    // ��������� ������
  cgProcess = 3;  // �㬬� �� �������� �믫�祭� �� ���
  cgDoc = 4;      // ��������� � ���, �� ���� ���㬥���
//------------------------------------------------------------------------------
// ���� ����ᥩ � ⠡��� Prikaz
  cgPrikaz   = 1;  // �ਪ�� �� �������஢��
  cgEtap     = 2;  // �⠯ �ਪ��� �� �������஢��
  cgUchet    = 3;  // ��� ���㤭���� � �������஢��
  cgPrikArch = 11; // ��娢 �ਪ���� �� �������஢��
//------------------------------------------------------------------------------
// ��ਡ��� �ਪ��� �� �������஢��
  cgOnePrik    = 0;  // ����� �ਪ��
  cgMultiPrik  = 1;  // ������⠯�� �ਪ��
  cgCancelPrik = 2;  // �ਪ�� �� �⬥�� �������஢��
//------------------------------------------------------------------------------
// �ਢ離� ���㬥�⮢ � ����ᮢ�� ���� � �ਪ��� �� �������஢��
  // ������ �맮�� ����䥩� GetKO � GetKO_Form
  cgTip_PrihDocAO  = 1;  // ��室�� ���㬥��� �� ����ᮢ��� �����
  cgTip_RashDocAO  = 2;  // ���室�� ���㬥��� �� ����ᮢ��� �����
  cgTip_RashDocKU  = 3;  // ���室�� ���㬥��� �� �ਪ��� �� �������஢��
  cgTip_AvnOtchKU  = 4;  // ����ᮢ� ����� �� �ਪ��� �� �������஢��
  cgTip_PlatDocPr  = 5;  // ���⥦�� ���㬥��� �� �ਪ��� �� �������஢��
  cgTip_PlatDocAO  = 6;  // ���⥦�� ���㬥��� �� ����ᮢ��� �����
  cgTip_PlatVedKU  = 7;  // ���⥦�� �������� �� �ਪ��� �� �������஢��
  cgTip_PrihDocKU  = 8;  // ��室�� ���㬥��� �� �ਪ��� �� �������஢��
  cgTip_DepKDoc    = 9;  // ���㬥��� �� ����窥 ������⭨��
  // ���� �痢� ���㬥�⮢ � ⠡��� DocPodot
  cgLink_PrihDocAO = 99; // ���� ��室��� ���㬥�⮢ � ����ᮢ� ���⮬ (��� � ����)
  cgLink_RashDocAO = 9;  // ���� ��室��� ���㬥�⮢ � ����ᮢ� ���⮬ (���, ����, ��, ��� � ��)
  cgLink_KatSoprAO = 10; // ���� ���������/��⮢ � ����ᮢ� ���⮬ (��, ��)
  cgLink_PrihDocKU = 6;  // ���� ��室��� ���㬥�⮢ � �ਪ���� �� �������஢�� (���, ����)
  cgLink_RashDocKU = 2;  // ���� ��室��� ���㬥�⮢ � �ਪ���� �� �������஢�� (���, ����, �� � ���)
  cgLink_KatSoprKU = 1;  // ���� ���������/��⮢ � �ਪ���� �� �������஢�� (��, ��)
  cgLink_AvnOtchKU = 22; // ���� ����ᮢ�� ���⮢ � �ਪ���� �� �������஢�� (��)
  cgLink_ReesPlDoc = 3;  // ���� ॥��� �� ����᫥��� � ���� � ���⥦�� ���㬥�⮬ (�� � ���)
  cgLink_SpPlVedKU = 23; // ���� ���㤭��� � ���⥦��� �������� � ���㤭���� � �ਪ��� �� �������஢�� (��)
  cgLink_Reestr    = 4;  // ���� ����� ���� ॥��ࠬ� �� ����᫥��� � ����
  cgLink_ReesKU    = 5;  // ���� ॥��� �� ����᫥��� � ���� � �ਪ���� �� �������஢��
  cgLink_PrimPlDoc = 7;  // ���� ���⥦���� ����祭�� � ������騬
  cgLink_DepKDoc   = 11; // ���� ����� �������⭮� ����窮� � ���㬥�⮬
//------------------------------------------------------------------------------
// ���� ����ᥩ ᯥ�䨪�樨 (RashDoc.TipDoc) � ����䥩� Rashifr
  cgRashDoc_BZKR  = 1;  // �����஢�� ��⭮� ��� �� ���ᮢ� ��室 (����, �����)
  cgRashDoc_KU    = 2;  // ����䨪��� �������஢�筮�� 㤮�⮢�७�� (��)
  cgRashDoc_BZPol = 6;  // �����஢�� ��⭮� ��� �� ����祭�� ������� ����� (��)
  cgRashDoc_RKO   = 8;  // ����䨪��� ���室���� ���ᮢ��� �थ� (���)
  cgRashDoc_AO    = 9;  // ����䨪��� ����ᮢ��� ���� (��)
  cgRashDoc_VRKO  = 18; // ����䨪��� ����⭮�� ��室���� ���ᮢ��� �थ� (����)
  cgRashDoc_RRV1  = 27; // ������ 1 � ������ ��।������ ������ (���)
  cgRashDoc_RRV2  = 28; // ������ 2 � ������ ��।������ ������ (���)
  cgRashDoc_Drvr  = 33; // ���室� ����⥫� (ᮯ஢�����饣�)
  cgRashDoc_Tour  = 34; // �믫��� � ३�
  cgRashDoc_RCK   = 35; // ��⥣��� � ���
  cgRashDoc_DgRCK = 36; // ��⥣��� � ��� (�������)
//------------------------------------------------------------------------------
// ������ ����᪠ ����䥩� �ନ஢���� ॥��� �� ����᫥��� ��������� �㬬 �� �ਪ���� �� �������஢��
  cgReestrBySpec = 1;  // ������ �� ᯥ�䨪�樨
  cgReestrByPrik = 2;  // ������ �� �ਪ���
  cgReestrByMark = 3;  // ������ �� ��࠭�� �ਪ����
//------------------------------------------------------------------------------
// ����⠭�� ��� ��।������, ��㤠 � ��� 祣� �� �맢�� ����䥩� G_PlPor
  cgTip_DocDefs     = 0; // �� 㬮�砭��
  cgTip_DocRees     = 1; // ���⥦�� ���㬥��� � ॥��஬
  cgTip_DocAvns     = 2; // ���㬥��� �� ��
  cgTip_DocPrik     = 4; // ���㬥��� �� �ਪ���
  cgTip_BuhSpPrihAO = 8; // ��壠���᪠� �ࠢ�� �� �� � �������� "��室�"
//------------------------------------------------------------------------------
// ��ଠ� ���⮢
  cgFastReport = 0;      // ���� FastReport
  cgFCOM       = 1;      // ���� FCOM
  cgExcel      = 2;      // ���� Excel
//------------------------------------------------------------------------------
// ���� ���⮢
  cgRep_PrikR      = 0;
  cgRep_JourKom    = 1;
  cgRep_KomRep     = 2;
  cgRep_ReqCash    = 3;
  cgRep_KomState   = 4;
  cgRep_PrikOne    = 5;
  cgRep_PrikEtap   = 6;
  cgRep_PrikKomUd  = 7;
  cgRep_PrikState  = 8;
  cgRep_PrikCash   = 9;
  cgRep_JourKomIn  = 10;
  cgRep_PrikCancel = 11;
  cgRep_DeponentR  = 12;
  cgRep_DepRasR    = 13;
  cgRep_DepPeriod  = 14;
  cgRep_DepSrok    = 15;
  cgRep_DepVed     = 16;
  cgRep_PlatVed    = 17;
  cgRep_PlatVedR   = 18;
  cgRep_Reestr     = 19;

//------------------------------------------------------------------------------
// ����� ��࠭��� ���㬥�⮢/��� �� 䨫����
  cgSelDoc = 1; // ��࠭��/⥪�騩
  cgFltDoc = 2; // �� ���㬥��� �� 䨫����
  cgCurEt  = 3; // ����騩 �⠯
//------------------------------------------------------------------------------
// ��ଠ�� ����
  cgTxt = 1;//00000001b;     // �����ᒥ���
  cgRtf = 2;//00000010b;     // RTF-�ଠ�
  cgFrf = 4;//00000100b;     // FastReport
//------------------------------------------------------------------------------
// ���� ������ [V]id[S]um, ���ਬ�� MBook.VidSum, AnSchNew.VidSum
  vsSaldoVhD = 1;        // ��������� � ��᫮� SaldMoun.ViOb (����⮢�� ᠫ줮)
  vsSaldoVhK = 2;        // ��������� � ��᫮� SaldMoun.ViOb (�।�⮢�� ᠫ줮)
  vsOborDeb  = 3;
  vsOborKred = 4;
//------------------------------------------------------------------------------
// ������ �����஢�� �����
  cgProt_None     =   0;  // ���㬥�� ����㯥� ��� ।���஢����
  cgProt_Descr    =   1;  // �� ���ਯ���
  cgProt_DesGr    =   2;  // �� ��㯯� ���짮��⥫��
  cgProt_Obor     =   4;  // �� ������ ����⮢
  cgProt_Stat     =   8;  // �� ������
  cgProt_Date     =  16;  // �� �����⮬� ��ਮ��
  cgProt_Edit     =  32;  // ��㣮� ���짮��⥫� ।������ ⥪�騩 ���㬥��
  cgProt_CloseOb  =  64;  // � �������樨 ���� �஢���� � �����⮬ ��ਮ��
  cgProt_Protect  = 128;  // � ��⥬� Protect �� ���� �ࠢ� �� ।���஢���� ⠡����
  cgProt_Manual   = 256;  // �� ����ன�� ����㯠 �� ।���஢����
  cgProt_ReadOnly = 512;  // ���쪮 �⥭��
  cgProt_EHD      = 1024; // ���㬥�� ������ �� ������ � ���
  cgProt_CloseDog = 2048; // ����稥 �������� ������஢
  cgProt_EHD_TXO  = 4096; // ���㬥�� ������ �� ������ ��� ��� ���
  cgProt_EditOb   = 8192; // ��㣮� ���짮��⥫� ।������ ⥪���� �஢����

//------------------------------------------------------------------------------
// ������ �����஢�� ॥���
  cgProtReestr_None   = 0; // ������ ����㯥� ��� ।���஢����
  cgProtReestr_Opl    = 1; // �� ॥���� ��ନ஢�� � ����祭 ���㬥��
  cgProtReestr_Oborot = 2; // �� ॥���� ���� �஢����
  cgProtReestr_PlPor  = 4; // �� ॥���� ��ନ஢�� ���㬥��, ����� ������ ��� ।���஢����
  cgProtReestr_Status = 8; // �ࠢ� ����㯠 �� ������

//------------------------------------------------------------------------------
// ���祭�� ���� Oborot.RuchAuto
  cgOborotManual   = 0;  // ��筠� �஢����
  cgOborotAuto     = 1;  // ��⮬���᪠�
  cgOborotModified = 7;  // ��⮬���᪠�, ��⥬ ��।���஢����� ������

//------------------------------------------------------------------------------
// ���筨� ������ ��� �ନ஢���� ���㬥�� (PLPOR.WRESERV, ��⮢�� ��᪠)
  cgSrc_Salary          = 1; // १����� ���� �/� ("��ࠡ�⭠� ����")
  cgSrc_IptRegisters    = 2; // ॥���� �����ਮ�� ("��ࠡ�⭠� ����")
  cgSrc_IptTaxes        = 4; // ������ �����ਮ�� ("��ࠡ�⭠� ����")
  cgSrc_Sbor            = 8; // ᡮ� �� ����᫥��� ("��ࠡ�⭠� ����")

//------------------------------------------------------------------------------
// ������� ����ନ஢���� ॥��஢
  cgPl_NotModi  = 0; // �� ������ ��������� � ���⥦��
  cgPl_Modi     = 1; // ࠧ������ ���⥦��
  cgPl_ModiAsk  = 2; // ࠧ������ ���⥦�� � ����ᮬ

//------------------------------------------------------------------------------
// ०��� �ନ஢���� ॥��஢ �� ����᫥���
  cgFormPR_NazvaPol  = 0; // ������������ ॥��� �� �����⥫�
  cgFormPR_NazvaBank = 1; // ������������ ॥��� �� ������
  cgFormPR_NoMess    = 2; // �� �뤠���� ᮮ�饭�� � ����� �ନ஢���� (��� ������� ०����)

//------------------------------------------------------------------------------
// ����஫� �㬬 �� �ਢ離� ������� (ᮣ��襭��, ���)
  cgSummDog_No   = 0;
  cgSummDog_Yes  = 1;
  cgSummDog_Exit = 2;

//------------------------------------------------------------------------------
// ����஫� �㬬 �� �ਢ離� ������� (ᮣ��襭��, ���)
  cgDog_NoOk  = 0;
  cgDog_Ok    = 1;
  cgDog_Exit  = 2;

//------------------------------------------------------------------------------
// ����⠭�� ��� ��ꥪ⮢ ����஢�� ���� ���-��
  cgPatCheckLevel_FullCount = 0; // ����� ����
  cgPatCheckLevel_CheckOnly = 1; // ������ � �஢�ઠ ᨭ⠪��

//------------------------------------------------------------------------------
// ��ଠ�� �।�⠢����� ��� ����஢�� ���� ���-��
// ��४������� �� [Alt+S] � ���� ����஢��

  cgPatViewMode_TreeNumeric = 0;
  // 0 - ��ଠ��������� ������᪨� ��� ���� �।�⠢���� ����ࠬ�
  //&106_5                         1 + 2
  //  1. &106_5_A                  3 - 4 - 5 - (6 + 7 + 8 + 9)
  //    3. ��68_14[1:"001"]        ��68_14[1:"001"]
  //    4. ��51\68_14[1:"001"]     ��51\68_14[1:"001"]
  //    5. ��68\68_14[1:"001"]     ��68\68_14[1:"001"]
  //    ....
  //  2. &106_5_B                  10 - 11 - 12 - (13 - 14) - 15 - 16
  //    10. ��68_15[1:"001"]       ��68_15[1:"001"]
  //    11. ��51\68_15[1:"001"]    ��51\68_15[1:"001"]
  //    12. ��68\68_15[1:"001"]    ��68\68_15[1:"001"]

  cgPatViewMode_TreeFormula = 1;
  // 1 - ����� ������᪨� ���, �⮡ࠦ����� ��室�� ���� ��� ����
  //&106_5                         &106_5_a+&106_5_b
  //  1. &106_5_A                  ��68_14[1:"001"] - ��51\68_14[1:"001"] ...
  //    3. ��68_14[1:"001"]        ��68_14[1:"001"]
  //    4. ��51\68_14[1:"001"]     ��51\68_14[1:"001"]
  //    5. ��68\68_14[1:"001"]     ��68\68_14[1:"001"]
  //    ...
  //  2. &106_5_B                  ��68_15[1:"001"] - ��51\68_15[1:"001"] ...
  //    10. ��68_15[1:"001"]       ��68_15[1:"001"]
  //    11. ��51\68_15[1:"001"]    ��51\68_15[1:"001"]
  //    12. ��68\68_15[1:"001"]    ��68\68_15[1:"001"]
  //    ...

  cgPatViewMode_ListFormula = 2;
  // 2 - ����� ������� ���, �⮡ࠦ����� ��室�� ���� ��� ����

  cgPatViewMode_FastReport = 10;
  // 10 - �।�⠢����� � FastReport

  // ����⠭�� ����஫�� ��� ���������� ����⢨� 
  //� �⤥��묨 ���ﬨ � �������஢����� ���㬥��
  cnTxoPick = 1;
//------------------------------------------------------------------------------
// ०�� ��ᬮ�� ��।������ �㬬 �� ���㬥�⠬
  cgViewDistr_BySoprHoz = 1; // �� 宧��⢥���� ����樨
  cgViewDistr_ByPlatDoc = 2; // �� ���⥦���� ���㬥���
  cgViewDistr_ByNakl    = 3; // �� ���������

//०�� �⮡ࠦ���� ��⥩ ��� � ���⥦��� ���㬥���
  cgViewStBud_BySoprHoz = 1; // �� 宧��⢥���� ����樨
  cgViewStBud_ByPlatDoc = 2; // �� ���⥦���� ���㬥���