/*
 ╔═══════════════════════════════════════════════════════════════════════════╗
 ║                     (c) 1994,2001 корпорация ГАЛАКТИКА                    ║
 ║ Проект        : ГАЛАКТИКА                                                 ║
 ║ Система       : Производственный контур                                   ║
 ║ Версия        : 7.xx                                                      ║
 ║ Назначение    : константы компонент                                       ║
 ║ Ответственный : Короткин Юрий (cacJr)                                     ║
 ╚═══════════════════════════════════════════════════════════════════════════╝
*/
// макроопределение для добавления имени компоненты к имени интерфейса,
// переданного через переменную в методы Load/GetVIPRef
// использовать в следующем случае:
// было         - LoadVIPRef(ifcVar, ifcName);
// должно стать - LoadVIPRef(ifcVar, #AddComp(CompName)ifcName);
// в качестве CompName можно использовать объявленные ниже константы
// разовьём идею дальше, далее лицензирование
#ifdef ComponentVersion
#define AddComp(sComp) #sComp + '::' +
#define Licensed(FREE) Licensed (#FREE)
#define Comp(sComp) #component "#sComp"
#else
#define AddComp(sComp) '' +
#define Licensed(FREE)
#define Comp(sComp)
#end

// константы компонент
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

// Для корректного указания индекса для массивов в структуре
// на 3-м и на 5-м Атлантисах
#ifdef ATL51
#define _$(sInd) [#sInd]
#else
#define _$(sInd) $#sInd
#endif
