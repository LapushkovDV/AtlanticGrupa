// 浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様�
// �                     (c) 1994,97 ��牆���罔� ���������                      �
// � 蹍オ�        : �ゥ痰� ��痰牀オ                                           �
// � �ム瓱�        : 5.80                                                      �
// � ��Л�腑�┘    : ｯ����┘ ���痰���                                         �
// � �癶モ痰▲��覃 : 遧襭� �.�.                                               �
// 藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様�


// �┓ ��痰牀��� (���� SYSTYPE ��゛�肓 TuneDef)
ttSysTune       = 0;  // ��痰ガ���
ttUserTune      = 2;  // ���讌���皀��
ttSYSUSERTUNE   = 1;  // ��痰ガ��� � ���讌���皀�� か� ��Гカ�� 甌ぅ爨�薑� �．

// �┓ �┼���讚�痰� ��痰牀��� (���� ResWord ��゛�肓 TuneDef)
ttFilialTune    = 0;  // �┼���讚��
ttCorpoTune     = 1;  // ��牆���皋↓��

// ���ム� ；皰� ���� ResWord ��゛�肓 TuneDef
ttBitCorpo      = 0;  // ��牆���皋↓��
ttBitIzmCorpo   = 1;  // �Кキキ 皋� ��牆���皋↓��
ttBitIzmSys     = 4;  // �Кキキ 皋� ��痰ガ���-���讌���皀��

// �┓� ����諷
// ｯ爛ぅ�キ� � �皓��皋瓮 � ぎ痰祚�� � ��痰牀����
// ftBoolean    =  1;  // ��/�モ
// ftChar       =  2;
// ftWord       =  4;
// ftLongInt    =  6;
// ftDate       =  7;
// ftTime       =  8;
// ftDouble     = 11;
// ftString     = 12;
// ftComp       = 17;
// �� ��爛ぅ�┼�
   ftList       = 50;   // ���甌� (Word)
   ftCompString = 60;   // �痰� ┃皀珞ォ� �襦��� � 珮膈�� □��


// ��る 〓Б���� 粃��罔� ��痰牀オ
ttTuneOk              =  0; // ｯム�罔� �覩���キ� 竅�ヨ��
ttTuneWriteError      =  2; // �├�腑瓷�� �荐！� ����瓱 � ��゛�聶
ttTuneReadError       =  3; // �├�腑瓷�� �荐！� 艪キ��
ttTuneAccessDenied    =  4; // ��痰祚 � ��鈑� ���爛薀�
ttTuneInvalidType     =  5; // �アム�� ���牀茱� 皋� ��鈑�
ttTuneKeyNotFound     =  6; // ��鈑 �� ���ぅ�
ttTuneValNotFound     =  7; // ���腑�┘ �� ���ぅ��
ttTuneListNotFound    =  8; // �� ���ぅ�� Л�腑�┘ List か� ��痰牀���
ttTuneDeleteError     =  9; // �├�腑瓷�� �荐！� 磴��キ�� ����瓱 ├ ��゛�肓
ttTuneHoHaveRightRead = 10; // �モ ���� �� 艪キ┘ ��痰牀���
// ��る �荐｀� � 甄竍�� ���竅�� �´�←キ�� 爛メ矗� ��痰牀オ
ttRunUpdatesOk               =  0; // 祚ヨ�� ���竅皋��瘡 
ttRunUpdatesManyFilials      =  1; // �� ���竅皋��瘡 ├�� 筥����讚��� 爛Θ�� �爬 �襦�爛 �メ���讓�� 筥������
ttRunUpdatesTuneLock         =  2; // �� ���竅皋��瘡 ├�� ゛���牀����� ��痰牀オ � ��痰牀ョ��� ����� galaxy.tuneLock=on
ttRunUpdatesNotFindTunesRead =  4; // �� ���竅皋��瘡 ├�� �ア�К�Ν�痰� �牀腮��碎 ����襯 �� �爬腮�� �矚竄瓣�� ���� �� 艪キ┘ TuneDef
ttRunUpdatesNotAdmin         =  8; // �� �え�┃�痰�皰�
ttRunUpdatesNotRecTuneDef    = 16; // �モ ����瓮� � TuneDef
ttRunUpdatesError            = 32; // �� ���竅皋��瘡 ├�� �牀腮� �荐｀�

// �牀▲�� ぎ痰祚� (���� Rgh ��゛�肓 TuneDef, TuneRgh)
ttMODIF         = 0;  // ��え筥罔牀��碎
ttREAD          = 1;  // ���讓� ����碎
ttInVISIBLE     = 2;  // �モ ぎ痰祚�
ttREADInVISIBLE = 3;  // ����碎 �  �モ ぎ痰祚�

// �┓� ���� ぎ痰祚� (���� TuneRgh.TypeRgh)
// � 皋� �♀オ�� ��痰牀��� (���� OBJ ��゛�肓 TuneVal - ttUSER �─� ttGroup)
ttUSER      = 0;  // ���讌���皀��
ttGroup     = 1;  // �珮���
ttCalcUser  = 2;  // ��瘍������� ���讌���皀��
ttTmpUser   = 3;  // �爛�キ��� か� ���讌���皀��
ttTmpOffice = 5;  // �爛�キ��� か� �筥�� (筥�����)    �� �甎��讌礇矚� � 8.1

//�矗��� - ��Гカ�皀�� � ����� 甌縲��餃�諷 ��痰牀オ
ttSeparator : string[40] = '******************TUNE******************';
ttDelimiter = ';';    //��Гカ�皀�� � �����

// ���ム� ��痰牀オ �� ��Гカ��
Common_StartNumber    =   100;  // ｡薑�         -   100-999
KL_StartNumber        =  1000;  // ����痰┴�     -  1000-4999
KBU_StartNumber       =  5000;  // ���           -  5000-9999
Proizv_StartNumber    = 10000;  // 蹍├〓め癶�  - 10000-14999
Zarp_StartNumber      = 15000;  // ��牆����      - 15000-19999
DifModul_StartNumber  = 20000;  // �珮�┘ ��ゃ�� - 20000-24999
MinNumberTunePatch    = 25000;  // �┃━��讚覃 ���ム ��痰牀オ 甌Г���諷 か� 甄礒ァ�諷 罐�ォ

MinNumberBatchInterface = 26000;  // �┃━��讚覃 ���ム ��痰牀オ 甌Г���諷 か� ���モ�諷 ┃皀珞ォ甌�
ttDefaultPrior = 500;             // 踸�爬皀� ┃皀珞ォ�� �� 祠�������

// ���-���� か� �皓�お�
ttTuneLogFile : string[40] = 'c:\temp\CreateTune.Log';

// か� �♀イ┃キ�� �┼���� � �筥�� � �き� ���� (ttConstFilial * �┼��� + �筥�)
ttConstFilial = 1000000;
ttConstNastrsByGroup = -1;// � ���� OBj 縲���碎瘴 ��痰牀��� 竅����←キ�襯 �� �珮����

ttConstTypeOfficeOffice = 1; //〓К�Ν�� Л�腑�┘ ���� typeOffice - �筥� � ���� cOffice
ttConstTypeOfficeFilial = 2; //〓К�Ν�� Л�腑�┘ ���� typeOffice - 筥���� � ���� cOffice
ttConstTypeOfficeGroup = 3; //〓К�Ν�� Л�腑�┘ ���� typeOffice - �珮��� � ���� cOffice

// 踳筥�� ���� ��痰牀��� - ���� ├�キキ�� ������キ�
ttDataUpdateComp : string[20] = 'DATE_UPDATE_COMP.';

// 爛Θ� ��｀硅 ��痰�÷�｀皖�
ttNone    = 0; // �°膈覃 
ttSpecial = 1; // 甎ユ爛Θ� 

// 筰��� ���竅�� 甌Г����/�´�←キ�� 爛メ矗� ��痰牀オ
ttShowMsg   = 1;// ����щ��碎 甌�♂キ�� �爬 �牀▲爲�
ttRunAuto   = 2;// �≒���皋腑瓷┤ ���竅�
ttRunManual = 4;// 珮膈�� ���竅�


// ▼閧� ├ �皓��皋��
  // �┓� ���讌���皀�ォ
  utUser         = 0;
  utAdmin        = 1;
  utGroup        = 2;

  uflAccountDisabled      =     8;
  uflArchive              = 16384;
  clrDisable     = 20;
///////////////////////////////////////
