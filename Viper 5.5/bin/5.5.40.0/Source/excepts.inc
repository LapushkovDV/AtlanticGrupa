const

ExVip      = 1000;          { Все исключения VIP'а }
  ExFieldNotValid         = 1001;   { Невалидное поле }
  ExUserBreak             = 1002;   { Пользователь сделал break в NextVisual'е }
  ExArrayRangeError       = 1003;   { Выход за границы массива }
  ExInternalError         = 1004;   { Некоторая внутренняя ошибка }
  ExToolBarNotFound       = 1005;   { Toolbar не найден }
  ExWindowNotExist        = 1006;   { Окно не существует }
  ExBadFieldType          = 1007;   { Поле неподходящего типа }
  ExBadFieldTypeFatal     = 1008;   { Неподходящий тип поля }
  ExIncompatibleFieldData = 1009;   { Несовместимые типы данных в полях }
  ExFieldNoFound          = 1010;   { Поле не существует }
  ExIncompatiblePositionField = 1011; {Попытка присвоения не совместимых позиций}
  ExDebugAssertion        = 1012;   { Assert для отладчика }
  ExPopPosEmptyStack      = 1013;   { Пустой стэк позиций при вызове poppos }
  ExLoadMenuError         = 1014;   { Ошибка при загрузке меню из ресурса }
  ExRunMenuError          = 1015;   { Ошибка при запуске загруженного меню }
  ExAddMenuItemError      = 1016;   { Ошибка при добавлении пункта меню }
  ExFormatIDError         = 1017;   { Несуществующий идентификатор формата }
  ExArrayFieldNotValid    = 1018;   { Поле не является массивом }
  ExMenuItemStateError    = 1019;   { Ошибка при попытке установить статус пункта меню }
  ExConstEvaluation       = 1020;   { Попытка присвоения константе }
  ExStringOverflow        = 1021;   { Длина строки выражения больше длины результата  }
  ExInconsistentResource  = 1022;   { Несоответствие элементов составного ресурса }

  ExMath     = 1300;          { Все математические исключения }
  ExLogError      = 1301;   { Ошибка при вычислении логарифма }
  ExDivToZero     = 1302;   { division by zero }
  ExNumberConvert = 1304;   { Исключение при конвертации строки в число }
  ExMathOverflow  = 1305;   { переполнение }

{$I berror.inc}

ExDataBase = 1400;          { Все исключения базы данных }
  ExDbNotFound                   = tsFileNotOpen;
  ExDbDuplicateKey               = tsDuplicateKey;
  ExDbModifiableKeyValueError    = tsModifiableKeyValueError;
  ExDbTransactionError           = tsTransactionError;
  ExDbTransactionIsActive        = tsTransactionIsActive;
  ExDbInvalidRecordAddress       = tsInvalidRecordAddress;
  ExDbLockError                  = tsLockError;
  ExDbRecordInUse                = tsRecordInUse;
  ExDbSurrKeyZero                = tsSurrKeyZero;
  ExDbInvalidIndexNumber         = tsInvalidIndexNumber;
  ExDbNoPosition                 = tsNoPosition;
  ExDbInvalidRelation            = tsInvalidRelation;
  ExDbAccessToFieldDenied        = tsAccessToFieldDenied;
  ExDbAccessToFileDenied         = tsAccessToFileDenied;
  ExDbFileInTransaction          = tsFileInTransaction;
  ExDbSemaphorNotExist           = tsSemaphorNotExist;
  ExDbSemaphorIsBusy             = tsSemaphorIsBusy;
  ExDbSemaphorModeError          = tsSemaphorModeError;
  ExDbSemaphorError              = tsSemaphorError;
  ExDbInvalidField               = tsFieldNotFound;

ExOle = 1900;                { Исключения OLE-объектов }
  ExOleCantCreateObject          = 1901;
  ExOleBadHandle                 = 1902;
  ExOleEventNotExist             = 1903;
  ExOleRecursiveCall             = 1904;
  ExOleBadCall                   = 1905;
  ExOleNoDriver                  = 1906;

ExFile = 2000;          { Все исключения при работе с файлами }
  ExFileNotFound                 = ExFile +   2; { Файл не найден }
  ExPathNotFound                 = ExFile +   3; { Путь не найден }
  ExTooManyHandlers              = ExFile +   4; { Слишком много открытых файлов }
  ExFileAccessDenied             = ExFile +   5; { Доступ запрещен. }
  ExBadFileHandler               = ExFile +   6; { Некорректный код файла }
  ExDriveNotFound                = ExFile +  15; { Указан несуществующий диск }
  ExCannotDeleteCurDir           = ExFile +  16; { Невозможно удалить текущий каталог }
  ExDiskIsWriteProtected         = ExFile +  19; { Попытка записи на защищенный от записи диск }
  ExDriveNotReady                = ExFile +  21; { Диск не готов }
  ExFileWriteError               = ExFile +  29; { Ошибка записи }
  ExFileReadError                = ExFile +  30; { Ошибка чтения }
  ExFileSharingViolation         = ExFile +  32; { Нарушение разделения файла }
  ExFileIsLocked                 = ExFile +  33; { Нарушение блокировки файла }
  ExFileAlreadyExist             = ExFile +  80; { Файл уже существует }
  ExCannotCreateDirectory        = ExFile +  82; { Ошибка создания каталога }
  ExFileUniversalErrors          = ExFile +  90; { Общие ошибки работы с файлами }
  ExNetworkError                 = ExFile +  91; { Ошибка при работе с сетью }
  ExNullFileName                 = ExFile +  92; { Пустое имя файла }
  ExFileNotOpened                = ExFile +  93; { Файла не открыт }

ExAQA = 2200; {Все исключения AQA}
  ExAQAResynch                   = ExAQA  + 1; {Рассинхронизация}
  ExAQAAbort                     = ExAQA  + 2; {Выполнение прервали}

ExRef = 2400;      { Ислкючения при работе со ссылками }
  ExObjIfcNoInit                 = 2401;   { ссылка на интерфейс не проинициализирована }
  ExObjIfcNoLoad                 = 2402;   { Vip-интерфейс не может быть загружен }
  ExObjIfcNoImpl                 = 2403;   { VipInterface не реализует ObjInterface }
  ExObjIfcBadVar                 = 2404;   { Переменная типа ссылки не соответствует запрошенной операции}
  ExCantActivateEmbedded         = 2405;   { Ошибка астивизации окна интерфейса }
  ExAbstractMethodCall           = 2406;   { Вызов абстрактного метода }
  ExVipIfcNoParent               = 2407;   { VipInterface нет в иерархии }
  ExIfcBrokenLink                = 2408;   { Интерфейс выгружен, хотя ссылки на него остались }
  ExIfcBadCheckSum               = 2409;   { Не совпадает контрольная сумма интерфейса }
  ExDelegateNotOwnLink           = 2410;   { Делегирование чужой ссылки }
  ExPanelNotEmbedded             = 2411;   { Панель не может содержать встроенных интерфейсов }

ExDataStream = 2500;
  ExDSErrorId                    = 2501;   { Задан ID поля превышающий их число в запросе}
  ExDSErrorFormatID              = 2501;   { Ожидалось ID поля }

ExExcel = 2600;
  ExcelInvalidObject             = ExExcel + 1; { Ошибка создания объекта для работы с Excel }
  ExcelNotLoadDll                = ExExcel + 2; { Ошибка загрузки длл }
  ExcelNotFoundFunction          = ExExcel + 3; { Не найдена функция }
  ExcelInternalError             = ExExcel + 4; { Ошибка создания файла }