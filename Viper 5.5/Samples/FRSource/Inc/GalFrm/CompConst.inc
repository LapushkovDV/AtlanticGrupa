/*
 浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様�
 �                     (c) 1994,2001 ��牆���罔� ���������                    �
 � 蹍オ�        : ���������                                                 �
 � ��痰ガ�       : 蹍├〓め癶キ�覃 ���矣�                                   �
 � �ム瓱�        : 7.xx                                                      �
 � ��Л�腑�┘    : ���痰��硅 ������キ�                                       �
 � �癶モ痰▲��覃 : ��牀皖┃ �爬� (cacJr)                                     �
 藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様�
*/
// ���牀��爛ぅ�キ┘ か� ぎ��←キ�� ━キ� ������キ硅 � ━キ� ┃皀珞ォ��,
// �ムイ������ 腑爛� �ムガキ�竡 � �モ�る Load/GetVIPRef
// �甎��讌���碎 � 甄イ竡薀� 甄竍��:
// °��         - LoadVIPRef(ifcVar, ifcName);
// ぎ�Ν� 痰�碎 - LoadVIPRef(ifcVar, #AddComp(CompName)ifcName);
// � ��腑痰▲ CompName ��Ν� �甎��讌���碎 �♀錢�キ�襯 �└� ���痰��硅
// ��М�跣� ┐ヮ ���跏�, ���ゥ ��罐�Ж牀���┘
#ifdef ComponentVersion
#define AddComp(sComp) #sComp + '::' +
#define Licensed(FREE) Licensed (#FREE)
#define Comp(sComp) #component "#sComp"
#else
#define AddComp(sComp) '' +
#define Licensed(FREE)
#define Comp(sComp)
#end

// ���痰��硅 ������キ�
TPPComp       = string('M_TPP');
GPComp        = string('M_GetPotr');
MNPComp       = string('M_MnPlan');
QLTComp       = string('M_Quality');
UMPComp       = string('M_UP');
DVSComp       = string('M_DVS');
EIXMLComp     = string('M_EIXML');
MScriptsComp  = string('M_Scripts');
MSklPlanComp  = string('M_SklPlan');
STAFFComp     = string('z_Staff');
TRNComp       = string('M_Transp');
PRICEComp     = string('L_Prices');
REPOPERComp   = string('L_RepOper');
TREETUNEComp  = string('C_TreeTune');      

// ��� ��玻オ皚��� 礫������ ┃ぅ��� か� ��瘁│�� � 痰珮�矣爛
// �� 3-� � �� 5-� �皓��皋���
#ifdef ATL51
#define _$(sInd) [#sInd]
#else
#define _$(sInd) $#sInd
#endif
