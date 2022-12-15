    //.. константы  browse для скролинга
    ppBelowlevel         = 1;        // Ниже уровнем                                         // bit - 1
    ppCurlevel           = 2;        // Начиная с текущего уровеня                           // bit - 2
    ppOpenAllLevel       = 4;        // Расрыть все уровни                                   // bit - 3
    ppCurBelowLevel      = 8;        // Текущий и ниже                                       // bit - 4
    ppArrest             = 16;       // фиксированая колонка                                 // bit - 5
    ppNoSteck            = 32;       // не формировать стек в ф-и insertVtHor                // bit - 6
    ppReadNumVid         = 64;       // читать роль из GlobData в  ф-и setFHor               // bit - 7
    ppVidVisualOn        = 128;      // отображать визуализацию работы SetFHor               // bit - 8
    ppVidOffReadSetup    = 256;      // отключить чтение флагов из текущей настройки         // bit - 9
    ppNRecAlgSpFormPl    = 512;      // брать nRec-ки в представлениях (ф-ия SetFHor)        // bit - 10
                                     // для Расчетных алгоритмов.
    ppOpenAllRole        = 1024;     // раскрыть весь каталог по всем ролям.                 // bit - 11
    ppNRecSpFormPlPick   = 2048;     // брать nRec-ки в представлениях  для интерфейса выбора// bit - 12
    ppVidOther           = 4096;      // отображать прочие                                   // bit - 13

    ppBegConstFldVtHor   = 8192;      // начало констант для полей шапки VtHor
    ppVidPlanQuant       = 8192;      // отображать плановое количество                      // bit - 14
    ppVidCost            = 16384;     // отображать плановую цену в НДЕ                      // bit - 15
    ppVidCostVal         = 32768;     // отображать плановую цену в валюте                   // bit - 16
    ppVidSumma           = 65536;     // отображать плановую сумму в НДЕ                     // bit - 17
    ppVidSummaVal        = 131072;    // отображать плановую сумму в валюте                  // bit - 18
    ppVidFactQuant       = 262144;    // отображать фактическое количество                   // bit - 19
    ppVidFCost           = 524288;    // отображать фактическую цену в НДЕ                   // bit - 20
    ppVidFCostVal        = 1048576;   // отображать фактическую цену в валюте                // bit - 21
    ppVidFSumma          = 2097152;   // отображать фактическую сумму в НДЕ                  // bit - 22
    ppVidFSummaVal       = 4194304;   // отображать фактическую сумму в валюте               // bit - 23
    ppVidField1          = 8388608;   // отображать количество по полю 1                     // bit - 24
    ppVidField2          = 16777216;  // отображать количество по полю 2                     // bit - 25
    ppVidField3          = 33554432;  // отображать количество по полю 3                     // bit - 26
    ppVidField4          = 67108864;  // отображать количество по полю 4                     // bit - 27
    ppCountField         = 14;        // количество полей шапки VtHor редактировать
                                      // при добавлении
    ppOffReadFiltrUser   = 134217728; // отключить чтение пользовательских фильтров          // bit - 29
    ppCountFieldDoc      = 7;         // количество дополнительных полей шапки документа
                                                  // редактировать при добавлении

    ppTypeQuant          = 1;        // тип поля количество
    ppTypeCost           = 2;        // тип поля цена в НДЕ
    ppTypeSumma          = 3;        // тип поля сумма в НДЕ
    ppTypeCostVal        = 4;        // тип поля цена в валюте
    ppTypeSummaVal       = 5;        // тип поля сумма в валюте
    ppTypeKoeff          = 6;        // тип поля Коэффициент
    ppTypeTrEqKol        = 7;        // тип поля Трудоемкость
    ppTypeTime           = 8;        // тип поля Время
    ppTypeSwitchOnOff    = 9;        // тип поля Переключатель (да/нет)
    ppTypeStrQuant     : string = 'Количество ';   // тип поля количество
    ppTypeStrCost      : string = 'Цена в ';       // тип поля цена в НДЕ
    ppTypeStrSumma     : string = 'Сумма в ';      // тип поля сумма в НДЕ
    ppTypeStrCostVal   : string = 'Цена в валюте'; // тип поля цена в валюте
    ppTypeStrSummaVal  : string = 'Сумма в валюте';// тип поля сумма в валюте
    ppTypeStrKoeff     : string = 'Коэффициент';   // тип поля Коэффициент
    ppTypeStrTrEqKol   : string = 'Трудоемкость';  // тип поля Трудоемкость
    ppTypeStrTime      : string = 'Время';         // тип поля Время
    ppTypeStrSwitchOnOff  : string = 'Переключатель (да/нет)';  // тип поля Переключатель (да/нет)

    ppStrPlanQuant    : string = 'Кол.план';
    ppStrCost         : string = 'Поле2';
    ppStrCostVal      : string = 'Поле3';
    ppStrSumma        : string = 'Поле4';
    ppStrSummaVal     : string = 'Поле5';
    ppStrFPlanQuant   : string = 'Поле6';
    ppStrFCost        : string = 'Поле7';
    ppStrFCostVal     : string = 'Поле8';
    ppStrFSumma       : string = 'Поле9';
    ppStrFSummaVal    : string = 'Поле10';
    ppStrField1       : string = 'Поле11';
    ppStrField2       : string = 'Поле12';
    ppStrField3       : string = 'Поле13';
    ppStrField4       : string = 'Поле14';
/*
    ppStrTrPlanQuant  : string = 'Кол.план';
    ppStrTrCost       : string = 'Поле2';
    ppStrTrCostVal    : string = 'Поле3';
    ppStrTrSumma      : string = 'Поле4';
    ppStrTrSummaVal   : string = 'Поле5';
    ppStrTrFPlanQuant : string = 'Поле6';
    ppStrTrFCost      : string = 'Поле7';
    ppStrTrFCostVal   : string = 'Поле8';
    ppStrTrFSumma     : string = 'Поле9';
    ppStrTrFSummaVal  : string = 'Поле10';
    ppStrTrField1     : string = 'Поле11';
    ppStrTrField2     : string = 'Поле12';
    ppStrTrField3     : string = 'Поле13';
    ppStrTrField4     : string = 'Поле14';

    ppStrEqPlanQuant  : string = 'Кол.план';
    ppStrEqCost       : string = 'Поле2';
    ppStrEqCostVal    : string = 'Поле3';
    ppStrEqSumma      : string = 'Поле4';
    ppStrEqSummaVal   : string = 'Поле5';
    ppStrEqFPlanQuant : string = 'Поле6';
    ppStrEqFCost      : string = 'Поле7';
    ppStrEqFCostVal   : string = 'Поле8';
    ppStrEqFSumma     : string = 'Поле9';
    ppStrEqFSummaVal  : string = 'Поле10';
    ppStrEqField1     : string = 'Поле11';
    ppStrEqField2     : string = 'Поле12';
    ppStrEqField3     : string = 'Поле13';
    ppStrEqField4     : string = 'Поле14';
*/
    //------------------------------------------------------------------------------

    pfYesSlave           = 1;     // Есть подчиненные
    pfTreeOn             = 2;     // Раскрыт уровень
    pfYesSlaveTreeOn     = 3;     // Есть подчиненные и раскрыт уровень

   // типы MnPlan
    tpStrPlan         : string =  'Производственный план';
    tpStrPlanOper     : string =  'Пооперационный план';
    tpStrPlanSvod     : string =  'Сводный план';
    tpStrNeedMt       : string =  'Потребность в материалах';
    tpStrNeedTr       : string =  'Потребность в трудовых ресурсах';
    tpStrNeedEq       : string =  'Потребность в оборудовании';
    tpStrNeedAu       : string =  'Потребность в транспорте';
    tpStrPlanSb       : string =  'План сбыта';
    tpStrPlanSn       : string =  'План снабжения';
    tpStrZakaz        : string =  'Производственный заказ';
    tpStrCorpoNeed    : string =  'Корпоративная потребность';
    tpStrCorpoDelivery: string =  'Корпоративный план поставок';
    tpStrCorpoManuf   : string =  'Корпоративный план производства';
    tpStrCorpoBalance : string =  'Плановые остатки';
    tpStrOperPlan     : string =  'Оперативный план заказов';
    tpStrZClient      : string =  'Заявка';
		tpStrDogovor      : string =  'Договор';
		tpStrAppDog       : string =  'Уточняющее соглашение';
		tpStrCalPlan      : string =  'Пункт календарного плана';


    toStrGrAnPlan         : string =  'Группа для <Производственного плана>';
    toStrGrAnNeedMt       : string =  'Группа для <Потребности в материалах>';
    toStrGrAnNeedTr       : string =  'Группа для <Потребности в трудовых ресурсах>';
    toStrGrAnNeedEq       : string =  'Группа для <Потребности в оборудовании>';
    toStrGrAnNeedAu       : string =  'Группа для <Потребности в транспорте>';
    toStrGrAnPlanSb       : string =  'Группа для <Плана сбыта>';
    toStrGrAnPlanSnab     : string =  'Группа для <Плана снабжения>';
    toStrGrAnMnfZakaz     : string =  'Группа для <Производственного заказа>';
    toStrGrAnPlanOper     : string =  'Группа для <Пооперационного плана>';
    toStrGrAnPlanSvod     : string =  'Группа для <Сводного плана>';
    toStrGrAnCorpoNeed    : string =  'Группа для <Корпоративной потребности>';
    toStrGrAnCorpoDelivery: string =  'Группа для <Корпоративного плана поставок>';
    toStrGrAnCorpoManuf   : string =  'Группа для <Корпоративного плана производства>';
    toStrGrAnCorpoBalance : string =  'Группа для <Плановых остатков>';


   //... типы статусов
    piStatusPlan         = 1200;     // статусы плана
    piStatusNeedMt       = 1201;     // статусы потребности
    piStatusZakaz        = 1202;     // статусы заказа


    //.. константы настроек
    nfAvtForm            = 2;     // Параметры автомат. формирования
    nfObjPl              = 4;     // Объекты планирования
    nfVid                = 8;     // Представления
    nfAnaly              = 16;    // Аналитика
    nfOther              = 32;    // Прочие
    nfRez                = 64;    // Расчет потребностей в ресурсах
    nfVidValue           = 128;   // Значения представлений
    nfSetFields          = 256;   // Вкл./откл. поля спецификации документа
    nfTCV                = 512;   // Таблица расчета количеств

      // Константы настроек пользовательского алг. представления в шаблоне документа
    nfFlagUseVid_1       = 1;     // ФЛАГ - [.] Использовать по умолчанию в алгоритмах расчета
    //.. для документов/объектов планирования
    toMC         =  1; // нормы и нормативы /МЦ                /ObjAcct.TypeObj
                       // нормативы НЗП     /МЦ                /NormNZP.TypeObj
                       // спецификация плана/МЦ                /SpMnPlan.TypeIzd
    toUsl        =  2; // нормы и нормативы /Услуга            /ObjAcct.TypeObj
                       // нормативы НЗП     /Услуга            /NormNZP.TypeObj
                       // спецификация плана/Услуга            /SpMnPlan.TypeIzd
    toZClient    =  3; // основание расчета /заявка клиента    /ObjAcct.TypeObj
    toPlan       =  4; //                  план  производства  /ObjAcct.TypeObj
                       // спецификация плана/опер. план           /SpMnPlan.TypeIzd
    toPlanSb     =  5; // основание расчета /план сбыта           /ObjAcct.TypeObj
    toMnfProg    =  6; // основание расчета /пр. программа        /ObjAcct.TypeObj
    toDept       =  7; // нормы и нормативы /подразделение     /ObjAcct.TypeObj
    toTechProc   =  8; // нормы и нормативы /техпроцесс        /SpObjAcc.TypePos
                       // потребности       /техпроцесс        /ObjAcct.TypeObj
    toTechMarsh  =  9; // нормы и нормативы /техмаршрут        /SpObjAcc.TypePos
                       // потребности       /техмаршрут        /ObjAcct.TypeObj
    toComplect   = 10; // нормы и нормативы /набор             /SpObjAcc.TypePos
    toMnfSpec    = 11; // нормы и нормативы /пр. спецификация  /SpObjAcc.TypePos
                       // потребности       /пр. спецификация  /ObjAcct.TypeObj
    toZSnab      = 12; // резльтат расчета  /заявка снабженцам /ObjAcct.TypeObj
                       // резльтат расчета  /заявка снабженцам /SpObjAcc.TypePos
    toSpZClient  = 13; // основание расчета /поз.заявки клиента/SpObjAcc.TypePos
                       // потребности       /поз.заявки клиента/ObjAcct.TypeObj

    toSpMnfProg  = 14; // основание расчета /поз. пр. программы/SpObjAcc.TypePos
                       // потребности       /поз. пр. программы/ObjAcct.TypeObj
    toSpPlan     = 15; // поз.специф  плана производства       /ObjAcct.TypeObj
    toSpPlanSb   = 16; // потребности       /поз. плана сбыта  /ObjAcct.TypeObj
    toMnfZakaz   = 17; // потребности       /пр. заказ         /ObjAcct.TypeObj
    toSpMnfZakaz = 18; // потребности       /поз. пр. заказа   /ObjAcct.TypeObj
    toGroupMC    = 19; // потребности       /группа МЦ         /ObjAcct.TypeObj
                       // нормативы НЗП     /группа МЦ         /NormNZP.TypeObj
    toGroupUsl   = 20; // потребности       /группа услуг      /ObjAcct.TypeObj
                       // нормативы НЗП     /группа услуг      /NormNZP.TypeObj
    toNormRule   = 21; // правило подборанормы                 /SpObjPar.TypePos
    toPlanSnab   = 29; // основание расчета /план снабжения    /ObjAcct.TypeObj
    toSpPlanSnab = 31; // основание расчета /план снабжения    /ObjAcct.TypeObj
    toZInter     = 30; // основание расчета /внутренняя заявка /ObjAcct.TypeObj
    toSpZInter   = 32; // основание расчета /внутренняя заявка /ObjAcct.TypeObj
    toSpZSnab    = 33; // основание расчета /внутренняя заявка /ObjAcct.TypeObj
    toBaseDoc    = 34; // ЛЗК              ObjAcct.TypeObj
    toSpStep     = 35; // Спецификация ЛЗК SpObjAcc.TypePos
    toNeedTr     = 36; // потребность в трудовых ресурсах
    toNeedMt     = 37; // потребность в материалах
    toNeedEq     = 38; // потребность в производственных мощностях ?
    toSpNeedTr   = 39; // позиция спецификации потребность в трудовых ресурсах
    toSpNeedMt   = 40; // позиция спецификации потребность в материалах
    toSpNeedEq   = 41; // позиция спецификации потребность в производственных мощностях ?
    toSpMnPlan   = 42; // ..
    toSpObjAcc   = 43; // ..
    toKatSopr    = 44; // накладная
    toSpSopr     = 45; // Спецификация накладной
    toProfession = 46; // Профессии
    toOrg        = 47; // организация
    toEqGroup    = 48; // группа оборудования
    toObjRem     = 49; // объект ремонта (единица оборудования)
    toCorpoNeed      = 50; // корпоративная потребность
    toCorpoDelivery  = 51; // корпоративный план поставок
    toCorpoManuf     = 52; // корпоративная план производства
    toCorpoBalance   = 53; // плановые остатки
    toPKP            = 54; // пункт календарного плана
    toSpCorpoNeed      = 55; // корпоративная потребность
    toSpCorpoDelivery  = 56; // корпоративный план поставок
    toSpCorpoManuf     = 57; // корпоративная план производства
    toSpCorpoBalance   = 58; // баланс движения продукции
    toAktBrak          = 59; // акт на брак
    toSpAktBrak        = 60; // спецификация акта на брак
    toObjAcct          = 61;   // ссылка ObjAcct
    toRepHead          = 62;   // производственные отчеты предприятий
    toPlanOper         = 63; // пооперационный  план
    toSpPlanOper       = 64; // спецификация пооперационного плана
    toSpTechMarsh      = 65; // спецификация техмаршрута
    toMnfOper          = 66; // операции
    toKaWork           = 67; // виды работ
    toPlanSvod         = 68; // сводный план
    toSpPlanSvod       = 69; // спецификация сводного плана
    toOperPlan         = 70; // оперативный план заказов
    toSpOperPlan       = 71; // спецификация оперативного плана заказов

    // к договорам
    toDogovor          = 72; // документ - Договор (Dogovor)
    toSpDogovor        = 73; // спецификация договора (SpDocs)
    toAppDog           = 74; // документ - Уточняющее соглашение (Dogovor)
    toSpAppDog         = 75; // спецификация соглашения (SpDocs)
    toCalPlan          = 76; // документ - Пункт календарного плана (CalPlan)
    toSpCalPlan        = 77; // спецификация календарного плана (SpDocs)
    toKatOrg           = 78; // Организации
    toKatPodr          = 79; // Подразделения

    toKatZak           = 80; // транспортный заказ (марштур)
    toGruzak           = 81; // груз в маршруте

    toTCV              = 82; // таблица расчета количеств
    toSpTCV            = 83; // позиция спецификации ТРК

    toObjParam         = 84; //таблица параметров-заголовок
    toSpObjPar         = 85; //таблица параметров-спецификация

    toKatMol           = 88; // МОЛы
    toKatParty         = 89; // партии

    toGrObjRlt         = 90; // группа связей между объектами
    toAlg              = 91; // Алгоритм расчета

    toPersons          = 92; // Сотрудник
    toBrigad           = 93; // Бригада

    toHistZam          = 94; // История замен

    toPlanCapitalConstr   = 95; // План капстроительства
    toSpPlanCapitalConstr = 96; // Позиция спецификации плана капстроительства
    toPlanJob             = 97; // Ресурсы планируемых работ
    toSpMnfSpec           = 98; // спецификация ПС

    // по листам замен
    toListZam             = 99; // Листы замен

    toSklOrder           = 100; // Складской ордер
    toSpOrder            = 101; // Спецификация ордера
    toReceiptOrder       = 102; // Приходный Складской ордер
    toSpReceiptOrder     = 103; // Спецификация Приходного Складского ордер
    toDebitOrder         = 104; // Расходный Складской ордер
    toSpDebitOrder       = 105; // Спецификация Расходного Складского ордер
    toAktOfp             = 106; // Финансовое обязательство

    toNeedAu             = 107; // Потребность в транспорте
    toSpNeedAu           = 108; // Спецификация потребности в транспорте
    toTypeTransp         = 109; // Вид транспортных средств
    toMarkaTransp        = 110; // Марка транспортных средств
    toTransp             = 111; // Транспортное средство

    toNoteBene           = 150; // Акт замен
    toNBSIzm             = 151; // ресурсы "На замену" в акте замен
    toNBSZam             = 152; // ресурсы "К замене" в акте замен
    toNBSProd            = 153; // готовая продукция

    toRepClaim         = 200;// отчет "Печать и сравнение заявок"
    toRepMnPlan        = 201;// отчет "Печать и сравнение документов"
    toRepCDSB          = 202;// отчеты "Контроль переработки ДС за рубежом"
    toRepBOM           = 203;// отчеты модуля "Спецификации продуктов"
    toRepOPZ           = 211;// отчеты "Печать оперативных планов"


		// ..... константы 5-го алгоритма
    toTmpNorm        = 300;  // Для учета в производстве( выход - временная таблица toTmpNorm)
    toPlBal          = 301;  // Формировать в плановый баланс - Контролинг
    toTmInpm         = 302;  // ccылка на таблицу TmInpm
    toTmOuTm         = 303;  // ccылка на таблицу TmOutm
    toPlanMove       = 304;  // ccылка на запись PlanMove
    toFactNal        = 305;  // ccылка на фактическое наличие
    tolistOper       = 306;

    // ..... константы резервирования
    toMis            = 307;  // внутренние цели
    toPrEd           = 308;  // Производственная единица (Рабочий центр)
    toRsvOper        = 309;  // таблица резервирования  Рабочего центра
    toObscure        = 310;  // Источник не определен



    toKatDSNor       = 400;
    toDSNorm         = 401;
    toDsgOtpr        = 402;
    toDSIO           = 403;
!    toKatDSNor       = 404;

		toTCVFrm         = 450;  // индекс для AllMemo.wTаble, формулы общего назначения для ТРК

		toPutLst         = 501;

    toControl_ImportPO = 601; // Для протоколов расчета: тип владельца - импорт производственных отчетов

    toControl_BuildPD = 611;  // Для протоколов формирования первичных документов
    toControl_CheckPD = 612;  // Для протоколов корректировки первичных документов

                toQPHead         = 11000; // паспорт качества
                toQPLine         = 11001; // строка паспорта качества
                toQPMove         = 11002; // строка журнала изменений качества
    toQualProbe      = 11123; // проба качества
    toSpQualProbe    = 11146; // спецификацию пробы качества
    toQualTest       = 11124; // тест качества
    toSpQualTest     = 11125; // спецификация теста качества
    toQualResult     = 11120; // результат контроля
    toSpQualResult   = 11121; // спецификация результата контроля
    toQualSert       = 4901;  // паспорт (сертификат) качества
    toKatPokaz       = 4903;  // каталог показателей качества
    toValPokaz       = 4905;  // значения показателей качества

    cwTipProbeSklad  = 0;     // тип пробы-складская
    cwTipProbeMnf    = 1;     // тип пробы-производственная
    cwTipProbePost   = 2;     // тип пробы-поставщик
    cwTipProbePoluch = 3;     // тип пробы-получатель
    cwTipProbeAny    = 65535; // тип пробы-любой


    cPickKatSopr        = 220;
    cPickMnPlan         = 19891;
    cPickSpMnPlan       = 19892;
    cPickSpMnPl         = 19893;
    cPickSpObjAcc       = 19896;
    cPickMarshSp        = 19897;
    cPickSpMnPlanInterf = 20000;
    cPickIstInOutDoc    = 19898;  // для интерфейса выбора входящих/исходящих документов
    cPickDestInOutDoc   = 19899;  // для интерфейса выбора входящих/исходящих документов
    cPickBufDoc         = 19900;
    cPickCopyBufPos     = 19901;

    //.. категория(типы изделий) из КаtMc или KatUsl
    tiPurchased   = 0;
    tiManufacture = 1;
    tiIntegrated  = 2;
    tiFantom      = 3;
    tiSubcontract = 4;

    toZAll      = 34;
    toSpZAll    = 35;

    //=================================================
    //'ПАРАМЕТРЫ'
    //=================================================
    //'ПлПр  SpObjPar.TypeNorm
    tnTexp            = 1;   // способы изготовления
    tnBrak            = 16;  // Брак/потери
    tnNzp             = 32;  // НЗП
    //'ПлПр  SpObjPar.TypePos
    edParZ            = 33;  // партия запуска
    edParV            = 34;  // пратия выпуска
    edLevelPlan       = 35;  // уровень планирования

    //'ПлСб  SpObjPar.TypePos
    edOstGotProdBegin = 41;
    edNormZapasEnd    = 42;

    //'ПлСн  SpObjPar.TypePos
    edOstBegin        = 81;
    edStrahZapas      = 82;
    edMinParty        = 83;
    edSrokPost        = 84;
    edMinZapas        = 85;
    edMaxZapas        = 86;
    edSrokGodn        = 87;
    //=================================================

    //'Типы ед.изм.
    edEdIzmNull       = 0;
    edEdIzmKol        = 1;
    edEdIzmTime       = 2;
    edEdIzmVar        = 3;

    //== Коды параметров планирования ==========================================
    kpnMethodZakaz                               = word(30);  // Механизм пополнения (правило заказа)
    kpnZapasStrah                                = word(82);  // Страховой запас (=edStrahZapas)
    kpnZapasMin                                  = word(85);  // Минимальный нормативный запас (=edMinZapas)
    kpnZapasMax                                  = word(86);  // Максимальный нормативный запас (=edMaxZapas)
    kpnZakazOverLevel                            = word(61);  // Уровень перезаказа
    kpnTermSupply                                = word(84);  // Срок поставки (=edSrokPost)
    kpnReservTimeSupply                          = word(62);  // Подготовительное время (резервное время поставки)
    kpnTermValid                                 = word(87);  // Срок годности (=edSrokGodn)
    kpnReservTimeVipusk                          = word(63);  // Резервное время выпуска
    //kpnPartyZakupMin                             = word(83);  // Минимальный размер партии закупки (=edMinParty)
    kpnZakazMin                                  = word(83);  // Минимальный размер заказа (=edMinParty)
    kpnPartyZapusk                               = word(64);  // Размер партии запуска
    kpnDuration                                  = word(65);  // Длительность производственного цикла
    kpnNZP                                       = word(66);  // Норматив незавершенного производства
    kpnPartyPostav                               = word(67);  // Размер партии поставки
    kpnKoefExecNorm          = word(88);  // Плановый коэффициент выполнения норм

//== КПН для ОПЗ ==========================================
    //01. Правила расчета рекомендованного заказа
    kpn01OrderRule = word(101); //Правило расчета требуемого заказа
    //Kpn01ReordPnt = word(103); //=Точка перезаказа==
    Kpn01InvData   =   word(104);  //=Откуда   брать   данные   об    остатках=
    Kpn01IDPodr = word(105); // Типы подразделений =Битовая маска
    Kpn01IDMan = word (106); // =Список складских разрезов=???=
    Kpn01CurRemains = word(107); // Остатки (используется в объекте iOPParams)

    // 02 Правила расчета размера заказа
    Kpn02FixPer  = word(111); //=Суммировать в заказ за  период  (тип периода)
      kpnvO2FPPotr = word(1);// Дата заказа=
      kpnvO2FPBeg = word(2);//
      kpnvO2FPEnd = word(3);//
    Kpn02FixQuant   =  word(112);  //  Фиксированный  размер   заказа (количество)==
    //Kpn02FixLot = word(113); // Кратность партии==
    kpnZakazMax = word(114); //Максимальный размер заказа
    Kpn02ShRate = word(115); //Коэффициент брака (Shrinkage Rate)

    // 3. Правила расчета дат заказа
    Kpn03FixLT = word(121); //Постоянное время (Fixed Lead Time)
    Kpn03VarLT  = word(122); //Переменное (штучное) время   (Variable Lead Time)

    // 4.  Временны`е границы
    Kpn04PlanTimeFence = word(131); //Временная граница планирования
    Kpn04DemTimeFence = word(132); //Временная граница спроса
    Kpn04AcEarlyDays = word(133); //Допустимое время отсрочки

    // 5. Правила формирования заказа
    Kpn05PlanType = word(141); // Как планируется
    Kpn05PotrSrc  =  word(142);  // Источник  расчета  потребности  в компонентах (Битовая маска)
    Kpn05DefSuppl = word(143); // Поставщик по умолчанию
    Kpn05DefSkl = word(144); // Склад поставки по умолчанию
    // 7. Расчет доступности
    kpn07DRZSupInfTF   =   word(161);  //   Граница   неограниченного предложения (дней)
    kpn07DRZRule = word(162); // Как считать ДРЗ(Учитывать ДРЗ прошлых периодов / Учитывать переходящий ДРЗ)

    kpnMcDirection = word(108); // Направление (категория) МЦ

    // Дополнительные КПН (согласно ТЗ "ОПЗ. MPS/MRP расчеты") -- МОЖНО ВЫКИНУТЬ
  //  kpnTimeBoundOfPlanning     = word(100); // Временная граница планирования
  //  kpnTimeBoundOfDemand       = word(101); // Временная граница спроса
  //  kpnAllowedTimeOfDelay      = word(102); // Допустимое время отсрочки
  //  kpnShrinkageRate           = word(103); // Коэффициент потерь
  //  kpnComponentYield          = word(104); // Коэффициент использования
  //  kpnFixedLeadTime           = word(105); // Постоянное время
  //  kpnVariableLeadTime        = word(105); // Переменное (штучное) время
  //  kpnTotalLeadTime           = word(107); // Длительность заказа
  //  kpnCumulativeMnfLeadTime   = word(108); // Полная длительность производства
  //  kpnCumulativeTotalLeadTime = word(109); // Полная длительность заказа
  //  kpnFixedSizeOfOrder        = word(111); // Фиксированный размер заказа (количество)
  //  kpnMaxSizeOfOrder          = word(112); // Максимальный размер заказа

    // 99. Учет в производстве
    kpnCntRoundPrecisionForNakl = word(201); // Точность округления количества в накладных

    //-- Для параметра "Механизм пополнения (правило заказа)" ------------------
    kpnvMZPeriod        = word(1);   // за период
    kpnvMZParty         = word(2);   // по размеру оптимальной партии
    kpnvMZPotreb        = word(3);   // точно по потребности
    kpnvMZMinMax        = word(4);   // МиниМакс
    // и для Правило заказа   ОПЗ
    kpnv01ORStand = word(10);
    kpnv01ORMinMax = word(11);
    kpnv01ORReord = word(12);
    kpnv01ORMTO = word(13);
    // для Как планируется
    kpnv05PTMPS  = word(20);
    kpnv05PTMRP  = word(21);
    kpnv05PTNone = word(22);
    // для источника расчета потребности
    kpn05PotrSP      = word(30); // по ПС
    kpn05PotrMK      = word(31); // по МК
    kpn05PotrSPMK    = word(32); // по ПС и MK
    kpn05PotrNone    = word(33); // не рассчитывается
    kpn05PotrSP_FP   = word(34); // по ПС с учетом изготовителя
    kpn05PotrMK_FP   = word(35); // по МК с учетом изготовителя
    kpn05PotrSPMK_FP = word(36); // по ПС и MK с учетом изготовителя
    // откуда брать данные об остатках
    kpnv01IDPodr = word(40);
    kpnv01IDOP = word(41);
    kpnv01IDMan = word(42);
    kpnv01IDNone = word(43);
    // для как считать ДРЗ
    kpnv07DRZNone = word(51); // за период
    kpnv07DRZPast = word(52); // ДРЗ прошлых периодов
    kpnv07DRZPastAccum = word(53); // ДРЗ прошлых периодов и переходящий остаток


    //==========================================================================

   // Константы полей для быстрого поиска специф. в док-ах планирования
    field_None      = 1;   // ничего
    field_Number    = 2;   // номер
    field_Name      = 3;   // наименование
    field_Code      = 4;   // код
    field_Obozn     = 5;   // обозначение
    field_Anal1     = 6;   // аналитика1
    field_Anal2     = 7;   // аналитика2
    field_Anal3     = 8;   // аналитика3
    field_DateB     = 9;   // дата начала
    field_DateE     = 10;   // дата окончания


    //'Константы состояний документов и позиций спецификации (CondRec)
    condManual = 0;  //'запись сформирована вручную
    condAuto   = 1;  //'запись сформирована автоматически

   // Константы типа единиц измерения  SpObjAcc.TypeNorm1
    teAll    = 1;   // 'на план / остаток',
    teProc   = 2;   // 'процент'
    teOtpEd  = 3;   // 'заданное кол-во'
    teAutoFN = 4;   // 'для авт.подбора норм'
  // Константы типа единиц измерения SPOBJACC.TypeEd

   // Константы типа единиц измерения  SpObjAcc.TypeNorm1
    tnRez    = 1;   // потребность в ресурсах
    tnMat    = 2;   // потребность в материалах


  //.... константы перехода в состояния
  stInitSelPlan     = 1;  // произошел выбор инерфейс выбора  планов
  stSelSpMnPlan     = 2;  // активизация основного окна
  stNoVtHor         = 4;  // грохнули интерфейс
  stRunGrAlg        = 8;  // выполнили групповой алгоритм - сбросить Cashe
  stCreateMnPlan    = 16; // создали план

  //.... константы для идентификации модуля (RARS)
  rars_Module_MnfPlan    = 1 ; // Модуль "Производственное планирование"
  rars_Module_UprZakaz   = 2 ; // Модуль "Управление заказами"
  rars_Module_MTO        = 4 ; // Модуль "Материально техническое обеспечение"
  rars_Module_UMP        = 8 ; // Модуль "Учет материалов в производстве"
  rars_Module_CorpoPlan  = 16; // Модуль "Корпоративное планирование"
  rars_Module_BOM        = 32; // Модуль "Спецификации продуктов"
  rars_Module_Transp     = 64; // Модуль "Управление транспортом"
  //....константы для идентификации группы процессов (RARS)
  rars_Process_ClaimReg      = 1;  //
  rars_Process_NeedForm      = 2;  //
  rars_Process_DeliveryForm  = 3;  //
  rars_Process_ManufForm     = 4;  //
  rars_Process_BalanceForm   = 5;  //
  rars_Process_Report        = 6;  //
  rars_Process_ManufReport   = 7;  //
  rars_Process_PlanSbForm    = 8;  //
  rars_Process_PlanSnabForm  = 9;  //
  rars_Process_PlanForm      = 10; //
  rars_Process_NeedMtForm    = 11; //
  rars_Process_NeedTrPlan    = 12; //
  rars_Process_NeedEqForm    = 13; //
  rars_Process_MnfZakazForm  = 14; //
  rars_Process_LZKForm          = 15;
  rars_Process_ActDopOtpuskForm = 16;
  rars_Process_NaklOtpForm      = 17;
  rars_Process_NaklPrihGPForm   = 18;
  rars_Process_NaklVozvrSirForm = 19;
  rars_Process_ActSpicMCForm    = 20;
  rars_Process_NaklVnutrPerForm = 21;
  rars_Process_NaklMCehForm     = 22;
  rars_Process_ActOkazUslForm   = 23;
  rars_Process_ActBrakForm      = 24;
  rars_Process_SpSkladOilEdit   = 25;
  rars_Process_PutLstForm       = 26;
  rars_Process_NeedAuForm       = 27;
  //....константы для идентификации типа документов (RARS)
  rars_Doc_Claim          = 3 ;  // (= toZClient)
  rars_Doc_CorpoNeed      = 50;  // (= toCorpoNeed)
  rars_Doc_CorpoDelivery  = 51;  // (= toCorpoDelivery)
  rars_Doc_CorpoManuf     = 52;  // (= toCorpoManuf)
  rars_Doc_CorpoBalance   = 53;  // (= toCorpoBalance)
  rars_Doc_ManufReport    = 62;  // (= toRepHead)
  rars_Doc_ReportClaim    = 200; // (= toRepClaim)
  rars_Doc_ReportMnPlan   = 201; // (= toRepMnPlan)
  rars_Doc_ReportCDSB     = 202; // (= toRepCDSB)
  rars_Doc_ReportBOM      = 203; // (= toRepBOM)
  rars_Doc_ReportOPZ      = 211; // (= toRepOPZ)
  rars_Doc_PlanSb         = 5  ; // (= toPlanSb)
  rars_Doc_PlanSnab       = 29 ; // (= toPlanSnab)
  rars_Doc_Plan           = 4  ; // (= toPlan)
  rars_Doc_NeedMt         = 37 ; // (= toNeedMt)
  rars_Doc_NeedTr         = 36 ; // (= toNeedTr)
  rars_Doc_NeedEq         = 38 ; // (= toNeedEq)
  rars_Doc_NeedAu         = 107; // (= toNeedAu)
  rars_Doc_MnfZakaz       = 17 ; // (= toMnfZakaz)
  rars_Doc_PlanOper       = 61 ; // (= toPlanOper)
  rars_Doc_PlanSvod       = 68 ; // (= toPlanSvod)
  rars_Doc_LZK            = 34;  // (= toBaseDoc)
  rars_Doc_ActDopOtpusk   = 204;
  rars_Doc_NaklOtp        = 44;  // (= toKatSopr)
  rars_Doc_NaklPrihGP     = 205;
  rars_Doc_NaklVozvrSir   = 206;
  rars_Doc_ActSpicMC      = 207;
  rars_Doc_NaklVnutrPer   = 208;
  rars_Doc_NaklMCeh       = 209;
  rars_Doc_ActOkazUsl     = 210;
  rars_Doc_ActBrak        = 59;  // (= toAktBrak)
  rars_Doc_SpSkladOil     = 500;
  rars_Doc_PutLst         = 501;
  //.... константы для формирования наименования документов
  NameDoc_Null     = 0 ; // Не участвует в формировании
  NameDoc_Abbr     = 1 ; // По аббревиатуре типа документа
  NameDoc_Setup    = 2 ; // По наименованию шаблона документа
  NameDoc_Anal1    = 3 ; // По аналитике 1
  NameDoc_Anal2    = 4 ; // По аналитике 2
  NameDoc_Anal3    = 5 ; // По аналитике 3
  NameDoc_Anal4    = 6 ; // По аналитике 4
  NameDoc_Anal5    = 7 ; // По аналитике 5
  NameDoc_vPlan    = 8 ; // По группе документов
  //....
  //----------------------------------------------------------------
  //.... константы функционального назначения полей в представлениях
  //.... для каждого типа документа
              // ... для toPlan
  toFunFld_Plan_Plan        = 1 ;     // Плановое количество
  toFunFld_Plan_Fact        = 2 ;     // Фактическое количество
  toFunFld_Plan_NZP         = 4 ;     // в НЗП
  toFunFld_Plan_NormNZP     = 8 ;     // норматив НЗП
  toFunFld_Plan_PlCost      = 16;     // Плановая  цена
  toFunFld_Plan_PlSum       = 32;     // Плановая сумма
  toFunFld_Plan_FactCost    = 64;     // Фактическая  цена
  toFunFld_Plan_FactSum     = 128;    // Фактическая сумма
              // ... для toPlanSb
  toFunFld_PlanSb_Plan      = 1 ;     // Плановое количество
  toFunFld_PlanSb_Fact      = 2 ;     // Фактическое количество
  toFunFld_PlanSb_PlCost    = 4 ;     // Плановая цена
  toFunFld_PlanSb_PlSum     = 8 ;     // Плановая сумма
  toFunFld_PlanSb_FactCost  = 16;     // Фактическая цена
  toFunFld_PlanSb_FactSum   = 32;     // Фактическая сумма
              // ... для toPlanSnab
  toFunFld_PlanSnab_Plan     = 1 ;     // Плановое количество
  toFunFld_PlanSnab_Fact     = 2 ;     // Фактическое количество
  toFunFld_PlanSnab_PlCost   = 4 ;     // Плановая цена
  toFunFld_PlanSnab_PlSum    = 8 ;     // Плановая сумма
  toFunFld_PlanSnab_FactCost = 16;     // Фактическая цена
  toFunFld_PlanSnab_FactSum  = 32;     // Фактическая сумма
              // ... для toMnfZakaz
  toFunFld_MnfZakaz_Plan     = 1 ;     // Плановое количество
  toFunFld_MnfZakaz_Fact     = 2 ;     // Фактическое количество
  toFunFld_MnfZakaz_NZP      = 4 ;     // в НЗП
  toFunFld_MnfZakaz_PlCost   = 8 ;     // Плановая цена
  toFunFld_MnfZakaz_PlSum    = 16;     // Плановая сумма
  toFunFld_MnfZakaz_FactCost = 32;     // Фактическая цена
  toFunFld_MnfZakaz_FactSum  = 64;     // Фактическая сумма
              // ... для toNeedMt
  toFunFld_NeedMt_Plan      = 1 ;     // Плановое количество
  toFunFld_NeedMt_Fact      = 2 ;     // Фактическое количество
  toFunFld_NeedMt_NZP       = 4 ;     // в НЗП
  toFunFld_NeedMt_PlCost    = 8 ;     // Плановая цена
  toFunFld_NeedMt_PlSum     = 16;     // Плановая сумма
  toFunFld_NeedMt_FactCost  = 32;     // Фактическая цена
  toFunFld_NeedMt_FactSum   = 64;     // Фактическая сумма
              // ... для toNeedTr
  toFunFld_NeedTr_KolRab    = 1 ;     // Количество рабочих
  toFunFld_NeedTr_TrEm      = 2 ;     // Трудоемкость
  toFunFld_NeedTr_Zarpl     = 4 ;     // Зарплата
  toFunFld_NeedTr_PlCost    = 8 ;     // Плановая цена
  toFunFld_NeedTr_PlSum     = 16;     // Плановая сумма
  toFunFld_NeedTr_Reserve   = 32;     // Резерв
  toFunFld_NeedTr_FactCost  = 64;     // Фактическая цена
  toFunFld_NeedTr_FactSum   = 128;    // Фактическая сумма
              // ... для toNeedEq
  toFunFld_NeedEq_TimeWork  = 1 ;     // Требуемое время работы
  toFunFld_NeedEq_PlCost    = 2 ;     // Резерв
  toFunFld_NeedEq_PlSum     = 4 ;     // Остаток
							// ... для toNeedAu
  toFunFld_NeedAu_TimeWork  = 1 ;     // Требуемое время работы
  toFunFld_NeedAu_PlCost    = 2 ;     // Резерв
  toFunFld_NeedAu_PlSum     = 4 ;     // Остаток
              // ... для toPlanOper
  toFunFld_PlanOper_KolIzd       = 1 ;     // количество изделий
  toFunFld_PlanOper_PlanPZTime   = 2 ;     // плановое подгот. заключит. время
  toFunFld_PlanOper_FactPZTime   = 4 ;     // фактическое подгот. заключит. время
  toFunFld_PlanOper_PlanDlOp     = 8 ;     // плановая длительность операции
  toFunFld_PlanOper_FactDlOp     = 16;     // фактическая длительность операции
  toFunFld_PlanOper_PlanTimeBeg  = 32;     // плановое время начала операции
  toFunFld_PlanOper_FactTimeBeg  = 64;     // фактическое время начала операции
  toFunFld_PlanOper_PlanTimeEnd  = 128;    // плановое время окончания операции
  toFunFld_PlanOper_FactTimeEnd  = 256;    // фактическое время окончания операции
  toFunFld_PlanOper_Tariff       = 512;    // расценка
              // ... для toPlanSvod
  toFunFld_PlanSvod_Plan         = 1 ;     // Плановое количество
  toFunFld_PlanSvod_Fact         = 2 ;     // Фактическое количество
  toFunFld_PlanSvod_NZP          = 4 ;     // в НЗП
  toFunFld_PlanSvod_NormNZP      = 8 ;     // норматив НЗП
  toFunFld_PlanSvod_PlCost       = 16;     // Плановая  цена
  toFunFld_PlanSvod_PlSum        = 32;     // Плановая сумма
              // ... для toCorpoNeed
              // ... для toCorpoDelivery
              // ... для toCorpoManuf
              // ... для toCorpoBalance
  //----------------------------------------------------------------
  toConvSysNumVid                = 1000;   // Конвертируем номер представления для iCalcFldPlan
	toViewAllvPlanForMnPlan   		 = 65535;  // Показать все группы документов для плановых документов


  // Константы для Шаблона ТРК

  // Типы полей для ТРК
#ifndef GAL7_12
  toCompositeBOM                 = 0;      // Многоуровнывые спецификации
  toQualityManagement            = 1;      // Управление качеством
  toNZPCalc                      = 2;      // Расчет НЗП
#else
  toCompositeBOM                 = 0;      // Многоуровнывые спецификации
  toNZPCalc                      = 10;     // Расчет НЗП
  toQualityManagement            = 20;     // Управление качеством
  toQualityNorm                  = 21;     // Управление качеством
  toAnotherFld_TCV               = 65000;  // Доп.Поля для ТРК

// Список дополнительных полей для ТРК
  toDopFld_TCV                   = 1;
  toSvOstSect                    = 2;
#endif

  // Варианты привязки к полям шаблона ТРК (для расчета НЗП)
  toOperNone                     = 0;      // Не задано
  toPutTotal                     = 1;      // Всего запущено
  toMadeTotal                    = 2;      // Всего произведено
  toGiveMaterial                 = 3;      // Отпущено по накладным на отпуск сырья
  toGiveInnerShift               = 4;      // Отпущено по накладным на внутреннее перемещение
  toGiveInterplant               = 5;      // Отпущено по межцеховым накладным
  toReturnMaterial               = 6;      // Возвращено по накладным на возврат сырья
  toMadeFinishedProd             = 7;      // Произведено по накладным на приход готовой продукции
  toMadeInterplant               = 8;      // Произведено по межцеховым накладным
  toPassInnerShift               = 9;      // Передано по накладным на внутреннее перемещение
  toRemoveMaterial               = 10;     // Списано по актам на списание сырья
  toDoService                    = 11;     // Оказано по актам на оказание услуг
  toRemoveMT_for_GP              = 12;     // Списано по накладным на прием готовой продукции  //???????????? iiiiiiiiiiiiiii отследить что у нас хранится в toRemoveMaterial ???????????? iiiiiiiii

  // Константы для управления качеством продукции
        //
  cntErrToMes = 0;
  cntErrToLog = 1;
        //
  cntQOperPri =   1; // приход
  cntQOperRas =   2; // расход
  cntQOperIzm =   1; // изменение (контроль качества)
  cntQOperPln =   8;
  cntQOperNon = 256;
        //
  cntQCondAvto = 0;
  cntQCondManu = 1;
        //
  cntQKindOrd   = 0;
  cntQKindNoOrd = 1;
  //
  cntDiffQPUser   = 0;
  cntDiffQPChange = 1;
  cntDiffQPNo     = 2;
  cntDiffQPStats  = 3;
  cntDiffQPNew    = 4;
  cntDiffQPCancel = 5;
        //
        cntQTypeKS101   =  101; // НПТ управления снабжением
        cntQTypeKS201   =  201; // НОТ управления сбытом
        cntQTypeKS600   =  600; // НВП (складская)
        cntQTypeKS630   =  630; // Акт пересортицы
        cntQTypeKS501   =  501; // НОС
        cntQTypeKS502   =  502; // НГП
        cntQTypeKS503   =  503; // НВС
        cntQTypeKS504   =  504; // АСС
        cntQTypeKS505   =  505; // МЦН
        cntQTypeKS506   =  506; // НВП (произвосдтвенная)
        cntQTypeKS508   =  508; // АОУ
        cntQTypeMixWh   = 1001; // смешивание на складе
        cntQTypeDivWh   = 1002; // разделение на складе
        cntQTypeMixMn   = 1003; // смешивание в производстве
        cntQTypeDivMn   = 1004; // разделение в производстве
        cntQTypePKContr = 2000; // контроль качества
        cntQTypePKStats = 2001; // изменение статуса
        cntQTypePKSort  = 2002; // изменение сорта
        cntQTypePKQP    = 2003; // изменение паспорта
				cntQTypePKUser  = 2004; // пользовательский контроль качества
        // статусы проб
        cntSProbePlan   =  0;
        cntSProbeTake   =  1;
        cntSProbeAccept =  2;
        cntSProbeCancel =  3;
        cntSProbeDelete = 99;
        // статусы результатов контроля
        cntSResultLook   = 0;
        cntSResultAccept = 1;
        cntSResultCancel = 2;

  cntSkladPlanTakeDont = 0;
  cntSkladPlanTakeRash = 1;
  cntSkladPlanTakePrih = 2;
  cntSkladPlanTakeBoth = 3;

#define planoper
#ifdef GAL7_11
  #define GAL7_11_OPI
#endif

#define Deb(aMess) Message(#aMess)
