!浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様�
!�      蹍オ� ��������� (c) 1994,95 TOP SOFT Ltd., �� ����� ������    �
!�  �ム瓱� :     5.50                                                  �
!�  ��о�｀���:  ���ユ �.�.                                            �
!�  ��Л�腑�┘:  ���痰��硅 甌�牀〓え皀�讚諷 ぎ�祠キ皰� ���             �
!�  �Кキキ��:                                                         �
!藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様�
!浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様�
!� �甎��讌竡� :                                                        �
!藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様�
// �┓� �ムガラキ┤
  RZKUT       = 900;    // ��珥�腦� 竍モ� 皰���� - ���ム� �爬絎ぎ�
  RZRASH      = 920;    // ��珥�腦� 竍モ� 皰���� - ���ム� ��痳�ぎ�
// �┓ �爬絎ぎ�
  FROM_ORG    = 901;    // 踸絎� �� ��痰�∫┴� (���Ε �爬�キ錺矚� ��� 皋� ��痳��� �爬 甌Г��┬�
                        //                       珮膈諷 ��痳�ぎ� � ┃皀珞ォ瓮 �竄 �� ��)
  FROM_PODR   = 902;    // 踸絎� � ��皰〓�� 瓷����
  FROM_PEREO  = 903;    // ���罐��� (�爬絎る � ��痳�る)
  FROM_INVENT = 904;    // ��▲���爬��罔� ├��茯�� (�爬絎る � ��痳�る)
  FROM_KASSA  = 905;    // �爬茫� ├ ��瘁�
  FROM_NAR    = 906;    // �爬茫� �� ���祚�皀�� � 皀�竕銕 甃キ�
  FROM_NAROD  = 907;    // �爬茫� �� ���祚�皀�� ��甄� ���琺皋� 甃キ�
  FROM_TO_OTDEL  = 908; // ��竄爬牀Л�膈�� �ムガラキ┘ (�爬絎る � ��痳�る)

  ST_INVENT  = 910;    // 痰�━�痰��� ��▲���爬��罔� (痺�ム ぎ�祠キ�)

// �┓ ��痳�ぎ�
  TO_ORG     = 911;    // �皴��※�� ��痰�∫┴�
  TO_PODR    = 912;    // �皴��※�� �� ��皰�覃 瓷���
  TO_PEREO   = 913;    // �罐��� (�爬絎る � ��痳�る)
  TO_INVENT  = 914;    // ��▲���爬��罔� �イ�痰�腮 (�爬絎る � ��痳�る)
  TO_KASSA   = 915;    // �皴��※�� � ��瘁�
  TO_SPIS    = 917;    // ��硅 �� 甎����┘
  TO_BYSHOP  = 918;    // �牀���� ���祚�皀�� 腑爛� ��瘁�
  TO_NAROD   = 919;    // �牀���� ���祚�皀��

!  cmEditSopr         = 18992;
!  cmSortMC           = 18993;
  cmCFG              = 18993;
  cmMakeDO           = 18994;
  cmEditMC           = 18995;
  cmExtendetInfoPrih = 18996;
  cmExtendetInfoRash = 18997;
  cmMakeKut          = 18998;
  cmExtendetInfoAct  = 18999;
!  cmDoSelField       = 199997;
!  cmCheckSumma       = 199998;
!  ercInsertSklOrder  = 1000;
!  ercSoprHoz         = 1001;
!  ercInsertSpOrder   = 1002;

// ��瘁� � 爛Θ�� 蹣甎�珥�
  extGALAXY   = 0;
  extECell    = 1;
  extIPSPOS   = 2;
  extPWP      = 3;
  extOMRON    = 4;
  extTusson   = 5;
  extOmron28  = 6;
  extShtrih_M = 7;
  extBerlio   = 8;
  extRDA      = 9;
  extTusson2  = 10;

  wayPRICE  = 0;
  wayMOL    = 1;
  wayPODR   = 2;
  wayOTPED  = 3;
  wayMC     = 4;


// Nazgul か� �ムイ�腮 �����モ牀� � ┃皀珞ォ� GetDocs

vcGetDog_DesGr         =        1;
vcGetDog_Descr         =        2;
vcGetDog_Date          =        4;
vcGetDog_DateSrok      =        8;
vcGetDog_MyOrg         =       16;
vcGetDog_Kontr         =       32;
vcGetDog_GruzFrom      =       64;
vcGetDog_GruzTo        =      128;
vcGetDog_Plat          =      256;
vcGetDog_Pol           =      512;
vcGetDog_Valut         =     1024;
vcGetDog_Progr         =     2048;
vcGetDog_VidDoc        =     4096;
vcGetDog_Status        =     8192;
vcGetDog_KatStatus     =    16384;
vcGetDog_Dogovor       =    32768;
vcGetDog_AppDog        =    65536;
vcGetDog_CalPlan       =   131072;
vcGetDog_ExistKP       =   262144;
vcGetDog_isSelect      =   524288;
vcGetDog_NoFinKP       =  1048576;
vcGetDog_NoMCKP        =  2097152;
vcGetDog_Zamena        =  4194304;
vcGetDog_OtvPodr       =  8388608;
vcGetDog_KatStatusPKP  = 16777216;
vcGetDog_NoCommiss     = 33554432;
vcGetDog_KatStatusSogl = 67108864;

koShortName           = 1;
koFullName            = 2;
koFullNameReverse     = 3;
koTipOrg              = 4;
koOnTune              = 5;
koOnBank              = 6;
