// ╔═══════════════════════════════════════════════════════════════════════════╗
// ║                     (c) 1994,97 корпорация ГАЛАКТИКА                      ║
// ║ Проект        : Реестр настроек                                           ║
// ║ Версия        : 5.80                                                      ║
// ║ Назначение    : Описание констант                                         ║
// ║ Ответственный : Пстыга М.В.                                               ║
// ╚═══════════════════════════════════════════════════════════════════════════╝


// Тип настройки (поле SYSTYPE таблицы TuneDef)
ttSysTune       = 0;  // Системная
ttUserTune      = 2;  // Пользователя
ttSYSUSERTUNE   = 1;  // Системная и Пользователя для Разделов содержащих обе

// Тип Филиальности настройки (поле ResWord таблицы TuneDef)
ttFilialTune    = 0;  // Филиальная
ttCorpoTune     = 1;  // Корпоративная

// Номера битов поля ResWord таблицы TuneDef
ttBitCorpo      = 0;  // Корпоративная
ttBitIzmCorpo   = 1;  // Изменен тип Корпоративная
ttBitIzmSys     = 4;  // Изменен тип Системная-пользователя

// Типы данных
// Определены в Атлантисе и доступны в Настройках
// ftBoolean    =  1;  // Да/Нет
// ftChar       =  2;
// ftWord       =  4;
// ftLongInt    =  6;
// ftDate       =  7;
// ftTime       =  8;
// ftDouble     = 11;
// ftString     = 12;
// ftComp       = 17;
// Мы определили
   ftList       = 50;   // Список (Word)
   ftCompString = 60;   // Есть интерфейс выбора и ручной ввод


// Коды возврата функций настроек
ttTuneOk              =  0; // Операция выполнена успешно
ttTuneWriteError      =  2; // Физическая ошибка записи в таблицу
ttTuneReadError       =  3; // Физическая ошибка чтения
ttTuneAccessDenied    =  4; // Доступ к ключу запрещен
ttTuneInvalidType     =  5; // Неверно запрошен тип ключа
ttTuneKeyNotFound     =  6; // Ключ не найден
ttTuneValNotFound     =  7; // Значение не найдено
ttTuneListNotFound    =  8; // Не найдено значение List для настройки
ttTuneDeleteError     =  9; // Физическая ошибка удаления записи из таблицы
ttTuneHoHaveRightRead = 10; // нет прав на чтение настройки
// коды ошибок в случае запуска обновления реестра настроек
ttRunUpdatesOk               =  0; // упешно запустилась 
ttRunUpdatesManyFilials      =  1; // не запустилась изза филиального режима при выборе нескольких филиалов
ttRunUpdatesTuneLock         =  2; // не запустилась изза блокирования настроек в настроечном файле galaxy.tuneLock=on
ttRunUpdatesNotFindTunesRead =  4; // не запустилась изза невозможности прочитать данные по причине отсутсвия прав на чтение TuneDef
ttRunUpdatesNotAdmin         =  8; // не адиминистатор
ttRunUpdatesNotRecTuneDef    = 16; // нет записей в TuneDef
ttRunUpdatesError            = 32; // не запустилась изза прочих ошибок

// Уровень доступа (поле Rgh таблицы TuneDef, TuneRgh)
ttMODIF         = 0;  // Модифицировать
ttREAD          = 1;  // Только Читать
ttInVISIBLE     = 2;  // Нет доступа
ttREADInVISIBLE = 3;  // Читать и  Нет доступа

// Типы прав доступа (поле TuneRgh.TypeRgh)
// и тип объекта настройки (поле OBJ таблицы TuneVal - ttUSER либо ttGroup)
ttUSER      = 0;  // Пользователя
ttGroup     = 1;  // Группы
ttCalcUser  = 2;  // Расчитанная Пользователя
ttTmpUser   = 3;  // Временная для Пользователя
ttTmpOffice = 5;  // Временная для офиса (филиала)    не используется в 8.1

//Строка - разделитель в файле сохранённых настроек
ttSeparator : string[40] = '******************TUNE******************';
ttDelimiter = ';';    //разделитель в файле

// Номера настроек по разделам
Common_StartNumber    =   100;  // Общие         -   100-999
KL_StartNumber        =  1000;  // Логистика     -  1000-4999
KBU_StartNumber       =  5000;  // КБУ           -  5000-9999
Proizv_StartNumber    = 10000;  // Производство  - 10000-14999
Zarp_StartNumber      = 15000;  // Зарплата      - 15000-19999
DifModul_StartNumber  = 20000;  // Другие модули - 20000-24999
MinNumberTunePatch    = 25000;  // Минимальный номер настроек созданных для служебных целей

MinNumberBatchInterface = 26000;  // Минимальный номер настроек созданных для пакетных интерфейсов
ttDefaultPrior = 500;             // Приоритет интерфейса по умолчанию

// Лог-файл для отладки
ttTuneLogFile : string[40] = 'c:\temp\CreateTune.Log';

// для объединения Филиала и Офиса в одно поле (ttConstFilial * Филиал + Офис)
ttConstFilial = 1000000;
ttConstNastrsByGroup = -1;// в поле OBj храниться настройки установленные по группам

ttConstTypeOfficeOffice = 1; //возможное значение поля typeOffice - офис в поле cOffice
ttConstTypeOfficeFilial = 2; //возможное значение поля typeOffice - филиал в поле cOffice
ttConstTypeOfficeGroup = 3; //возможное значение поля typeOffice - группа в поле cOffice

// Префикс кода настройки - дата изменения компонент
ttDataUpdateComp : string[20] = 'DATE_UPDATE_COMP.';

// режим работы постобработки
ttNone    = 0; // обычный 
ttSpecial = 1; // спецрежим 

// флаги запуска создания/обновления реестра настроек
ttShowMsg   = 1;// показывать сообщения при проверке
ttRunAuto   = 2;// автоматический запуск
ttRunManual = 4;// ручной запуск


// взяты из атлантиса
  // Типы пользователей
  utUser         = 0;
  utAdmin        = 1;
  utGroup        = 2;

  uflAccountDisabled      =     8;
  uflArchive              = 16384;
  clrDisable     = 20;
///////////////////////////////////////
