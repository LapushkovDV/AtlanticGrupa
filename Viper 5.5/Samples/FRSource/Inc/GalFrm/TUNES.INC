// 浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様�
// �                     (c) 1994,97 ��牆���罔� ���������                      �
// � 蹍オ�        : �ゥ痰� ��痰牀オ                                           �
// � �ム瓱�        : 5.80                                                      �
// � ��Л�腑�┘    : ｯ����┘ ���痰���                                         �
// � �癶モ痰▲��覃 : 遧襭� �.�.                                               �
// 藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様�


// �┓ ��痰牀��� (���� SYSTYPE ��゛�肓 TuneDef)
ttSysTune      = 0;  // ��痰ガ���
ttUserTune     = 2;  // ���讌���皀��
ttSYSUSERTUNE  = 1;  // ��痰ガ��� � ���讌���皀�� か� ��Гカ�� 甌ぅ爨�薑� �．

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
ttTuneOk            = 0;   // ｯム�罔� �覩���キ� 竅�ヨ��
ttTuneWriteError    = 2;   // �├�腑瓷�� �荐！� ����瓱 � ��゛�聶
ttTuneReadError     = 3;   // �├�腑瓷�� �荐！� 艪キ��
ttTuneAccessDenied  = 4;   // ��痰祚 � ��鈑� ���爛薀�
ttTuneInvalidType   = 5;   // �アム�� ���牀茱� 皋� ��鈑�
ttTuneKeyNotFound   = 6;   // ��鈑 �� ���ぅ�
ttTuneValNotFound   = 7;   // ���腑�┘ �� ���ぅ��
ttTuneListNotFound  = 8;   // �� ���ぅ�� Л�腑�┘ List か� ��痰牀���

// �牀▲�� ぎ痰祚� (���� Rgh ��゛�肓 TuneDef, TuneRgh)
ttMODIF     = 0;      // ��え筥罔牀��碎
ttREAD      = 1;      // ���讓� ����碎
ttInVISIBLE = 2;      // �モ ぎ痰祚�
ttREADInVISIBLE = 3;  // ����碎 �  �モ ぎ痰祚�

// �┓� ���� ぎ痰祚� (���� TuneRgh.TypeRgh)
// � 皋� �♀オ�� ��痰牀��� (���� OBJ ��゛�肓 TuneVal - ttUSER �─� ttGroup)
ttUSER     = 0;  // ���讌���皀��
ttGroup    = 1;  // �珮���
ttCalcUser = 2;  // ��瘍������� ���讌���皀��
ttTmpUser  = 3;  // �爛�キ��� か� ���讌���皀��
ttTmpOffice= 5;  // �爛�キ��� か� �筥�� (筥�����)    �� �甎��讌礇矚� � 8.1

//�矗��� - ��Гカ�皀�� � ����� 甌縲��餃�諷 ��痰牀オ
ttSeparator : string[40] = '******************TUNE******************';
ttDelimiter = ';';    //��Гカ�皀�� � �����

MinNumberTunePatch = 5000;  // �┃━��讚覃 ���ム ��痰牀オ 甌Г���諷 ├ ��砒�

// ���-���� か� �皓�お�
ttTuneLogFile : string[40] = 'c:\temp\CreateTune.Log';

// か� �♀イ┃キ�� �┼���� � �筥�� � �き� ���� (ttConstFilial * �┼��� + �筥�)
ttConstFilial = 1000000;
