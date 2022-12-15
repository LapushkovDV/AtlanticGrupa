const
// список групп
  csCommon      = 'Common';
  csCompilers   = 'Compilers';
  csPrinters    = 'Printers';
  csFiles       = 'Files';
  csDeskTop     = 'DeskTop';
  csDataBase    = 'DataBase';
  csNetwork     = 'Network';
  csLot         = 'Lot';
  csVip         = 'Vip';
  csLogin       = 'Login';
  csEnvironment = 'Environment';
  csGalaGraf    = 'GalaGraf';
  csSystem      = 'System';
  csForms       = 'Forms';
  csDebug       = 'Debug';
  csSQLDriver   = 'SQLDriver';
  csInternal    = 'Internal';
  csBtrieve     = 'Btrieve';
  csWindows     = 'Windows';
  csKey         = 'HardwareKey';
  csLicense     = 'LicParam';
  csAQA         = 'AQA';
  csCalendar    = 'Calendar';
  csQuickChoice = 'QuickChoice';
  csAPI         = 'API';
  csConfigurator= 'Configurator';
  csMacro       = 'Macro';
  csDesigner    = 'Designer';
  csRepository  = 'Repository';

// Внутреняя секция для multibase
  csInternalDataBase       = '__InternalDB__';
  csClient      = 'Client';

// список параметров секции csCommon
  isHelp                  = 'Help';
    poHelp                = 'H';
    poQuest               = '?';
  isWriteHelpToFile       = 'HelpToFile';
    pkHelpToFile          = '?';
  isAddConfigFile         = 'AddConfigFile';
  isConfigFile            = 'ConfigFile';
    pkConfigFile          = 'C';
  isSaveConfigFile        = 'SaveConfigFile';
    poSave                = 'S';
  isSavingFullCfg         = 'SavingFullCfg';
    psSavingFullCfg       = 'SF';
  isSavingAliases         = 'SavingAliases';
    psSavingAliases       = 'SA';
  isSaveCfgToFile         = 'SaveCfgToFile';
    pkSaveCfgToFile       = 'Save';
  isResourcePrimerName    = 'Primer';
  isVersion               = 'Version';
    poVersion             = 'Version';

  isTrimDosFileName       = 'TrimFileName';
  isDeltaDouble           = 'DeltaDouble';
  isShowAllDigits         = 'ShowAllDigits';
  isDefaultFormat         = 'DefaultFormat';

// список параметров секции csCompilers
  isFull                  = 'Full';
    poFull                = 'F';
  isBuild                 = 'Build';
    poBuild               = 'B';
  isMake                  = 'Make';
    poMake                = 'M';
  isMakeUsingAllResourceFiles = 'MakeUsingAllResourceFiles';
    poMakeUsingAllResourceFiles = 'MR';
  isSubDir                = 'SubDir';
    poSubDir              = 'D';
  isErrorLevel            = 'ErrorLevel';
    pkErrorLevel          = 'E';
  isInclude               = 'IncludesPath';
    pkInclude             = 'I';
  isOutputResource        = 'OutputResourceName';
    pkResource            = 'R';
    SrcName               = 'Atlantis_%user%.res';
  isInhSaveLevel          = 'InhSaveLevel';
    pkInhSaveLevel        = 'ISL';
  isRun                   = 'Run';
    poRun                 = 'R';
  isRunIdent              = 'RunIdent';
    pkRunIdent            = 'RI';
  isWriteToResource       = 'WriteToResource';
    psResource            = 'R';
  isNewRes                = 'ClearResource';
    poNewRes              = 'N';
  isListing               = 'WriteListing';
    psListing             = 'L';
  isListingTo             = 'WriteListingTo';
    psListingTo           = 'LT';
  isWriteIncludes         = 'WriteIncludes';
    psInclude             = 'I';
  isPascal                = 'WritePascalSources';
    psPascal              = 'P';
  isDebug                 = 'WriteDebugInfo';
    psDebug               = 'U';
  isSourceExtension       = 'SourceExtension';

  isMaxLineLength         = 'MaxLineLength';
    pkMaxLineLength       = 'ML';
  isVisualFrequency       = 'VisualFrequency';
    pkVisualFrequency     = 'VF';

  isDefaultDateFormat     = 'DefaultDateFormat';
  isSubServientResource   = 'SubServientResource';

  isIncludeRecursion      = 'IncludeRecursion';
  isSource                = 'SourcesPath';
    pkSource              = 'SRC';

  isBadInclude            = 'BadIncPath';
  isCheckRightInclude     = 'ChRightIncPath';
  isWorkBadInclude        = 'WorkBadIncludes';
  isShortMessages         = 'ShortMessages';
  isMessagesDateFormat    = 'MessagesDateFormat';
  isMessagesTimeFormat    = 'MessagesTimeFormat';

  isIncludeCache          = 'IncludeCache';
  isMinVisual             = 'MinVisual';
  isConstantPreference    = 'ConstantPreference';
    psConstantPreference  = 'CP';

  isDisableIfcLicWarnings = 'DisableIfcLicWarnings';

  isCheckModifyOnly       = 'CheckModifyOnly';
    poCheckModifyOnly     = 'CMO';

  isVipDocEnable          = 'VipDoc';
  isVipDocUnusedCheck     = 'VipDocUnusedCheck';

  isDecimalConstantMode   = 'DecimalConstantMode';
  isDecimalDivisionMode   = 'DecimalDivisionMode';

  isCSVlogFile            = 'CSVlogFile';
  isLockAlterByDBStatus   = 'LockAlterByDBStatus';

  isIdentifiersFile       = 'IdsFile';
    pkIdentifiersFile     = 'IDF';
  isSaveIds               = 'SaveIds';
    psSaveIds             = 'SI';
  isLoadIds               = 'LoadIds';
    psLoadIds             = 'LI';
  isSaveIDF               = 'SaveIds2File';
    psSaveIDF             = 'SIF';
  isExcludeSaveIds        = 'ExcludeSaveIds';
    pkExcludeSaveIds      = 'ESI';
  isLoadConst             = 'LoadConst';
  isSaveSources           = 'SaveSrc';
    psSaveSources         = 'SS';
  isDumpSources           = 'DumpSrc';

  isVerboseMake           = 'VerboseMake';

// список параметров секции csPrinters
  isManualCopy            = 'ManualCopy';
    pkManualCopy          = 'ManualCopy';

// список параметров секции csFiles
  isTemp                  = 'TmpFilesDirectory';
    pkTemp                = 'T';
  isFileHandles           = 'FileHandles';           //NotHelp
    pkFiles               = 'F';                     //NotHelp
  isOutput                = 'OutputFilesDirectory';
    pkOutput              = 'O';
  isTmpFilesShortDirectory= 'TmpFilesShortDirectory';
    pkTmpFilesShortDirectory = 'TShort';
  isHelpFilesPath         = 'HelpFilesPath';
  isWebHelpURL            = 'WebHelpURL';
  isLogs                  = 'LogFilesDirectory';

// список параметров секции csDeskTop
  isEnableHelpLine        = 'EnableHelpLine';
    psEnableHelpLine      = 'H';
  isEnableStatusLine      = 'EnableStatusLine';
    psEnableStatusLine    = 'SL';
  isEnable3D              = 'Enable3D';
    psEnable3D            = '3D';
  isEnableToolbar         = 'EnableToolbar';
    psEnableToolbar       = 'TB';
  isAutoConfig            = 'AutoConfig';
    psAutoConfig          = 'AC';
  isDesktopAutoLoad       = 'LoadDesktopLayout';
    psDesktopAutoLoad     = 'B';
  isDesktopAutoSave       = 'SaveDesktopLayout';
    psDesktopAutoSave     = 'D';
  isDeskTop               = 'DeskTopFileName';
    pkDeskTop             = 'G';
  isGlobalDesktop         = 'GlobalDesktopFileName';
  isNoVisual              = 'NoVisual';
  isCalculator            = 'Calculator';
  isShowHints             = 'ShowHints';
  isCurrentDateInSearch   = 'CurrentDateInSearch';
  isInterfaceLayout       = 'InterfaceLayout';

// список параметров секции csDataBase
  isDictionary            = 'DictionaryDirectory';
    pkDictionary          = 'D';
  ppData                  = 'DATA';
  ppUser                  = 'USER';
  ppNetUser               = 'NETUSER';
  isFullCheck             = 'CheckTableStructure';
    poFullCheck           = '!';
  isFiltersRes            = 'FiltersResource';
    pkFiltersRes          = 'FILTERS';  // Имя файла - ресурса фильтров
  isOldFiltersDialog      = 'OldFiltersDialog';
  isMemoViewer            = 'MemoViewer';
    pkViewer              = 'VIEWER';   // Viewer'ы для мемо полей
  isMemoNotTextPrefixes   = 'MemoNotTextPrefixesList';
    pkMemoNotText         = 'NOTTEXT';  // Префиксы без просмотра
  isUnlockDelay           = 'UnlockDelayMinutes';
    pkUnlockDelay         = 'UNLOCK';   // Время в минутах через которое разблокировать запись
  isUnlockWarning         = 'UnlockWarning';
    pkUnlockWarning       = 'unlockwarning'; // Процент времени визуализации предстоящей разблокировки
  isDataBaseDriver        = 'DataBaseDriver';// Указывает драйвер какой базы использовать
    pkDataBaseDriver      = 'DataBaseDriver';
  isUseRandomSurrKeys     = 'RandomSurrKeys';// Генерировать случайно распределенные суррогатные ключи
  isRandomSurrKeysExclude = 'RandomSurrKeysExcludeList';// Список таблиц для которых генерация
                                                        // суррогатных ключей всегда происходит через таблицу суррогатных ключей. Этот
                                                        // параметр имеет смысл только, если RandomSurrKeys=True
  isMemoPrinter           = 'MemoPrinter';
    pkMPrinter            = 'MPrinter';      // Printer'ы для мемо полей
  isNoUpdateSurrKeys      = 'NoUpdateSurrKeys';
    poNoUpdateSurrKeys    = 'NUsK';
  isExclusiveTables       = 'ExclusiveTables';
  isCompatibleMode        = 'Compatible210';
  isDataBaseID            = 'DatabaseName';
  isSchemaID		  = 'SchemaName';
  isSchemeAlias           = 'SchemeAlias';
  isDefaultDB             = 'DefaultDB';
  isTempTableInMem        = 'TempTableInMem';
  isUserTableInMem        = 'UserTableInMem';
  isExternalInMem         = 'ExternalInMem';
  isUserTablesCache       = 'UserTablesCache';
  isUserTablesLocalCache  = 'UserTablesLocalCache';
  isUserTablesPriority    = 'UserTablesPriority';
  isUserTablesNoLocalCache= 'UserTablesNoLocalCache';
  isUserTablesDirectry    = 'UserTablesDirectory';
  isMemFree               = 'MemFree';

  isCacheSize             = 'CacheSize';
  pkCacheSize             = isCacheSize;
  isCacheTables           = 'CacheTables';
  pkCacheTables           = isCacheTables;
  isCacheTime             = 'CacheTime';
  pkCacheTime             = isCacheTime;
  isCacheProtocol         = 'CacheProtocol';
  pkCacheProtocol         = isCacheProtocol;

  isParallelImpExp        = 'ParallelImpExp';
    poParallelImpExp      = 'PIE';

  isAttachProfiler        = 'AttachProfiler';
  isProfileTablesAsWell   = 'ProfileTablesAsWell';
  isConverterSleep        = 'ConverterSleep';
  isTablesCache           = 'TablesCache';
  isCheckRepository       = 'CheckRepository';
  isSolidJournalClear     = 'SolidJournalClear';

  isMaxCacheLiveTime      = 'MaxDriverCacheLiveTime';
  isDSQLJoin2Where        = 'DSQLJoin2Where';
  isDisableSetCacheTime   = 'DisableSetCacheTime';
  isDSQLErrorOutput       = 'DSQLErrorOutput';
  isDSQLUnknownIdReaction = 'DSQLUnknownIdReaction';
  isDSQLShowOverflowWarning = 'DSQLShowOverflowWarning';
  isDSQLForcePrefetch     = 'DSQLForcePrefetch';
  isSpanManySemaphorNames = 'SpanManySemaphorNames';
  isCountRecordDeletePach = 'CountRecordDeletePach';
  isDisableSqlImpl        = 'DisableSqlImpl';
  isRCacheOptions         = 'RCacheOptions';

// список параметров секции csVip
  isProjectFile           = 'Project'; // Файл проекта
  isStrictVip             = 'StrictVip'; // "Строгий" язык VIP. В перспективе mb язык будет все более и более строгий (по ключу).
   pkStrictVip             = 'SV';
  isDebugInfo             = 'Debug';   // Нужна ли отладочная информация
  isCreateLocalDbgInfo    = 'LocalDebug'; // локальная отладочная информация
  isDupNamesWarning       = 'DupNamesWarning'; // Ругаться на одинаковые имена Screen/Browse
  isMSIncompatibleTables  = 'MSIncompatibleTables';
  isLicenseControlInclude = 'LicenseControlInclude';
   pkLicenseControlInclude = 'LInc';
  isBaseTypesWarning      = 'BaseTypesWarning'; // предупреждения при приведении типов
  isAlwaysPutInterface    = 'AlwaysPutInterface';
  isTWObjInterfacePrefix  = 'twObjInterfacePrefix';
  isTWVipInterfacePrefix  = 'twVipInterfacePrefix';
  isComponentName         = 'ComponentName';
  isTablesUsageInfo       = 'ShowTablesUsage';
  isTableCodePrefix       = 'TableCodePrefix';
  isNoTablesInComponent   = 'NoTablesInComponent';
  isVisibleAllInterface   = 'VisibleAllInterface'; // При запуске интерфейса, показывать все интерфейсы
  isDefaultEnviroment     = 'DefaultEnv';
   pkDefaultEnviroment    = 'Env';
  isIgnoreNewConstants    = 'IgnoreNewConstants';
   pkIgnoreNewConstants   = 'Ic';
  isEmptyBlockWarnings    = 'EmptyBlockWarnings';
  isFuncAsProcWarnings    = 'FuncAsProcWarnings';
  isInitVarWarnings       = 'InitVarWarnings';

// список параметров секции csLot
  isOutPutName            = 'OutputFileName';
    pkOutPutName          = 'N';
  isSelectFile            = 'SelectFile';
    pkSelectFile          = 'SD';
  isSelectFormat          = 'SelectFormat';
    pkSelectFormat        = 'SF';
  isSelectCharset         = 'SelectCharset';
    pkSelectCharset       = 'CS';
  isInsertFormat          = 'InsertFormat';
    pkInsertFormat        = 'IF';
  isInsertFile            = 'InsertFile';
    pkInsertFile          = 'IS';
  isImportFile            = 'ImportFile';
    pkImportFile          = 'IMS';
  isImportFormat          = 'ImportFormat';
    pkImportFormat        = 'IMF';
  isImportCharset         = 'ImportCharset';
    pkImportCharset       = 'ICS';
  isSoftRoot              = 'SoftRoot';
  isExportCompToStr       = 'ExportCompToStr';
    psExportCompToStr     = '@';
  isExportDoubleToStr     = 'ExportDoubleToStr';
  isDisableErrorsOnDupFld = 'DisableErrorsOnDupFld';
    psDisableErrorsOnDupFld = 'DED';
  isLotFieldWarnings      =  'LotFieldWarnings';
  isDBFfieldNameSize      =  'DBFfieldNameSize';
  isDBFspaceConvertSymbol =  'DBFspaceConvertSymbol';
  isDBFmaxNumericLength   =  'DBFmaxNumericLength';
  isDBFmaxNumericDigits   =  'DBFmaxNumericDigits';
  isDBFKeepMemoFieldSize  =  'DBFKeepMemoFieldSize';
  isUseTableDefCash       =  'UseTableDefCash';
  isOptimizeLoop          =  'OptimizeLoop';
  isJournal               =  'Journal';
    pkJournal             =  'J';
  isJournalFile           =  'JournalFile';
    pkJournalFile         =  'JF';
  isJournalRewrite        =  'JournalRewrite';
    pkJournalRewrite      =  'JR';

  isImportBatchMode       = 'ImportBatchMode';
  isImportBatchRowCount   = 'ImportBatchRowCount';

  isFileTableInMemory     =  'FileTableInMemory';
  isUseFileTableDefCache  =  'UseFileTableDefCache';
  isTableDefCacheFile     =  'TableDefCacheFile';
    pkTableDefCacheFile   =  'TDCF';

  isLotExpressionCache    = 'LotExpressionCache';

  isSelectBase            = 'SelectBase';
    pkSelectBase          = 'SB';
  isSelectTable           = 'SelectTable';
    pkSelectTable         = 'ST';

// список параметров секции csLogin
  isUserName              = 'UserName';
    pkUserName            = 'U';
  isPassword              = 'Password';
    pkPassword            = 'P';
  isUserOffice            = 'UserOffice';
    pkUserOffice          = 'UO';
  isNTS                   = 'NTSecurity';
    poNTS                 = 'NTS';
  isEnableDuplicateUser   = 'EnableDuplicateUser';
  isSetToMainMenu         = 'MainMenuNoLic';

// список параметров секции csNetwork
  isUpdateTable           = 'UpdateTable';
    pkUpdateTable         = 'UPDATETABLE';
  isSystemID              = 'SystemID';
    pkSystemID            = 'SYSTEMID';
  isWorkProtocol          = 'WORKPROTOCOL';
  isTimeServer            = 'TimeServer';
  isMQBroker              = 'MQBroker';
  isMQserverUserQueueLength = 'MQserverUserQueueLength';
  isMQserverAllQueuesLength = 'MQserverAllQueuesLength';
  isMQserverUserLiveTime    = 'MQserverUserLiveTime';

// список параметров секции csEnvironment
  isSourcePath            = 'SourceFilesDirectory';
    pkSourcePath          = 'SOURCE';    // Пути для поиска исходных текстов

// список параметров секции csSystem
  isStartMenu             = 'StartMenuName';
    pkStartMenu           = 'StartUpMenu';
  isOpenResources         = 'OpenResources';
    pkResources           = 'RESOURCES'; // Список ресурсов через точку с запятой
  isVisualType            = 'VisualType';
    pkVisualType          = 'VISUAL';    // Тип визуализации
  ppStartPath             = 'StartPath';
  ppClientStartPath       = 'ClientStartPath';
  ppCurPath               = 'CurPath';   // Путь запуска программы
  ppClientCurPath         = 'ClientCurPath';// Путь запуска программы
  ppExeName               = 'ExeName';
  ppRoot                  = 'Root';         // корневой каталог для всех файлов юзера
  ppClientRoot            = 'ClientRoot';   // на сервере клиентский root
  isFileMask              = 'EditorFileMask';
    pkFileMask            = 'W';
  isQueryInsert           = 'QueryInsert';
    pkQueryInsert         = 'QI';
  isQueryUpdate           = 'QueryUpdate';
    pkQueryUpdate         = 'QU';
  isQueryDelete           = 'QueryDelete';
    pkQueryDelete         = 'QD';
  isQueryExit             = 'QueryExit';
  isSavedInterfaceLayout  = 'SavedInterfaceLayout';
    pkSavedInterfaceLayout= 'SIL';
  isLocalizeResources     = 'LocalizeResources';
  isObjectCashCount       = 'ObjectCachCount';
  isFullSQL               = 'FullSQL';
  isArmName               = 'ArmName';
  isUpdateDictCheckSumm   = 'UpdateDictCheckSumm';
  isEnableModifyField     = 'EnableModifyField';
  isModifyProtectedField  = 'ModifyProtectedField';
  isDebugMode             = 'DebugMode';
  isDebugKey              = 'DebugKey';
  isGUIDfile              = 'GUIDfile';
  isResourceFastCompress  = 'ResourceFastCompress';
    pkRFC                 = 'RFC';
  isResourcePackLevel     = 'ResourcePackLevel';
    pkRPL                 = 'RPL';
  isSpecialServerCatalogs = 'SpecialServerCatalogs';
  isResourceUpdateVersion = 'ResourceUpdateVersion';
  isCalcObjRelOptimization= 'CalcObjRelOptimization';
  isDefaultRegionalSet    = 'DefaultRegionalSet';
  isAppCaptionSet         = 'AppCaptionSet';
  isIdleTimeToQuit        = 'IdleTimeToQuit';
  isRegCOMfile            = 'RegCOMfile';
  isResourcerFullIndex    = 'ResourcerFullIndex';
  isLovelyProgsFile       = 'LovelyProgsFile';
  isFilials               = 'Filials';
  isScriptFile            = 'ScriptFile';
  pkScriptFile            = 'SSF';
  isInterfaceIdleTimeout  = 'InterfaceIdleTimeout';
  isInterfacePanelRebuidTimeout = 'InterfacePanelRebuidTimeout';
  isInterfaceMemoRebuidTimeout = 'InterfaceMemoRebuidTimeout';
  isDuplicateStartMessage = 'DuplicateStartMessage';
  isUseBrowserCacheAndSort = 'UseBrowserCacheAndSort';
  isAcceptDictVersion = 'AcceptDictVersion';
  isResourceCheckEnable       = 'ResourceCheckEnable';
  isResourceCheckLogFileName  = 'ResourceCheckLogFileName';
  isResourceCheckErrorLevel   = 'ResourceCheckErrorLevel';
  isResourceCheckDebugLevel   = 'ResourceCheckDebugLevel';
  isResourceCheckDetailLevel  = 'ResourceCheckDetailLevel';
  isResourceCheckPrefixList   = 'ResourceCheckPrefixList';
  isUseBrowserGroups      = 'UseBrowserGroups';
  isDisableBrowseAggregates = 'DisableBrowseAggregates';
  isUseBrowserScrollCount = 'UseBrowserScrollCount';
  isUseBrowserFixedColumn = 'UseBrowserFixedColumn';
  isUseTreeCacheAndSort = 'UseTreeCacheAndSort';


// список параметров секции csGalaGraf
  isUseGrum               = 'ShowGraphReportAsGraphic';
    psUseGrum             = 'G';

// список параметров секции csForms
  isWordFileName          = 'WordFileName';
  isExcelFileName         = 'ExcelFileName';
  isFullStructure         = 'WriteFullInfo';
    poFullStructure       = 'U';
  isTopology              = 'WriteBriefInfo';
    poTopology            = 'T';
  isAllowDuplicate        = 'AllowDuplicateIdent';
    poAllowDuplicate      = 'A';
  isHeshLoopHandler       = 'HeshLoopHandler';
  isSourcesFormPath       = 'SourcesFormPath';
    pkFrmPath             = 'FrmPath';
  isFormExtensions        = 'FormExtensions';
  isDebugSaveStream       = 'DebugSaveStream';
  isFcenv                 = 'Fcenv';
  isNoNextHeader          = 'NoNextHeader';
  isCompatibility         = 'Compatibility';
//  isXMLReportTemplatesDirectory = 'XMLReportTemplatesDirectory';
  isOldSlkCompile         = 'OldSlkCompile';
  isOldRtfCompile         = 'OldRtfCompile';
  isRtfPageBreak          = 'RtfPageBreak';
  isDateDelimiter         = 'DateDelimiter';
  isClearDate             = 'ClearDate';
//  isEnableFRM2XMLConverter= 'EnableFRM2XMLConverter';
  isEuroLang              = 'EuroLang';
  isUserDirOlapReport     = 'UserDirOlapReport';
  isOldStyleDialog        = 'OldStyleDialog';
  isUserOlapResource      = 'UserOlapResource';
  isFRHTMLFormat          = 'FRHTMLFormat';
  isFROldStyleDialog      = 'FROldStyleDialog';
  isFROneReportMode       = 'FROneReportMode';
  isFROneReportExtension  = 'FROneReportExtension';
  isFROpenIsSilence       = 'FROpenIsSilence';
  isFRAutoPageNumbers     = 'FRAutoPageNumbers';

// список параметров секции csDebug
  isLogErrors             = 'LogErrors';
  isDebugMessages         = 'DebugMessages';
  isVisionDllPath         = 'VisionDllPath';
  isIndexCounter          = 'IndexCounter';
  isPrinterLog            = 'PrinterLog';
  isDragDropLog           = 'DragDropLog';
  isDebugAllInterfaces    = 'DebugAllInterfaces';
  isDebugInterfacesList   = 'DebugInterfacesList';
  isDebugAllExceptions    = 'DebugAllExceptions';
  isProfiler              = 'Profiler';
  isRepositoryLog         = 'RepositoryLog';
  isEnableVipDebugger     = 'EnableVipDebugger';
  isEntryPointProfiler    = 'EntryPointProfiler';
  isDriverProtocolSize    = 'DriverProtocolSize';
  isDriverProtocolTop     = 'DriverProtocolTop';
  isEnablePassDebugger    = 'EnablePassDebugger';
  isDebugPassClearAll     = 'DebugPassClearAll';
  isCheckStatic           = 'CheckStatic';
  isStopAtDebugStartUp    = 'StopAtDebugStartUp';
  isSeparatedEventQueue   = 'SeparatedEventQueue';
  isDebugInfoLoadMode     = 'DebugInfoLoadMode';
  isDebugInfoLoadList     = 'DebugInfoLoadList';
  isTraceDataBaseDriverMode = 'TraceDataBaseDriverMode';
  isTraceDataBaseDriverList = 'TraceDataBaseDriverList';
  isTraceDataBaseDriverExtendedMode = 'TraceDataBaseDriverExtendedMode';
  isTraceDataBaseDriverExtendedSize = 'TraceDataBaseDriverExtendedSize';
  isCalcOptions           = 'CalcOptions';
  isSQLExprLogs           = 'SQLExprLogs';

// список параметров секции csSQLDriver
  isSQLServer             = 'SQLServer';
  isPublicGroup           = 'PublicGroup';
  isForceRights           = 'ForceRights';
  isFullLoginName         = 'FullLoginName';
  isDictCacheOnOff        = 'DictCache';
  isDictCacheFile         = 'DictCacheFile';
  isDropUnusedLogins      = 'DropUnusedLogins';
  isUseSystemTransaction  = 'UseSystemTransaction';
  isPrefetchBufferSize    = 'PrefetchBufferSize';
  isUseSQLRole            = 'UseSQLRole';
  isCachedPrefetchBuffersCount = 'CachedPrefetchBuffersCount';
  isMaxRecordCountInTransaction = 'MaxRecordCountInTransaction';
  isDetectDeadLocks       = 'DetectDeadLocks';
  isAnsiJoin              = 'AnsiJoin';
  isNotDSN                = 'NotDSN';
  isClearJournalBlockSize  = 'ClearJournalBlockSize';
  isClearJournalBlockSizeForJTables = 'ClearJournalBlockSizeForJTables';
  isSortType              = 'SortType';
  isBrowsingPreloadCount  = 'BrowsingPreloadCount';
  isManageJRights         = 'ManageJRights';
  isParallelIndexingDegree = 'ParallelIndexingDegree';
  isNologgingIndexing = 'NologgingIndexing';
  isSuppressOR_Expansion = 'SuppressOR_Expansion';
  isODBC_DSN              = 'ODBC_DSN';
  isNoOrderScanSeverity = 'NoOrderScanSeverity'; // 'none'('0') 'filial'('1') 'filialWarning'('2') 'alwaysWarning'('3')
  isValidateOraCache = 'ValidateOraCache';
  isBCPBufferInMemory = 'BCPBufferInMemory';
  isMaxCursorCount = 'OpenCursorsLimit';
  isPeakCursorsCountReport = 'PeakCursorsCountReport';
  isSequentialAlterTableLimit = 'SequentialAlterTableLimit';
  isEnforceStandardPlan = 'EnforceStandardPlan';
  isUseTop = 'UseTop';
  isNavigationMaximumTop = 'NavigationMaximumTop';
  isNavigationNoLock = 'NavigationNoLock';
  isParameterizedLimit = 'ParameterizedLimit';
  isNavigationDefaultLimit = 'NavigationDefaultLimit';
  isDuplicates              = 'LogDuplicates';

// Список параметров секции csInternal
// Эти параметры регистрируются только в процессе работы программы.
  isUserScrLvlCls         = 'UserScrLvlCls'; // Номер уровня секретности
  isProtectIsOn           = 'ProtectIsOn'; // Включена ли система разграничения
                                           // прав в текущем офисе. Временное отключение Protect во время сессии с
                                           // системой не влияет на этот параметр.
  isUserPassword          = '5763620'; // Пароль текущего пользователя
  isAllowReconnect        = 'AllowReconnect'; // Можно ли динамически менять имя пользователя
  isSystemPassword        = 'Gray_goat';
  isDefaultTemp           = 'DefaultTemp';//заведено для переинициализации юзера.
  isDefaultOutput         = 'DefaultOutput';//лежат параметры с макросами, если они есть
  isDefaultUser           = 'DefaultUser';
  isDefaultLogs           = 'DefaultLogs';
  isAqaMode               = 'AQAMode';
  isInternalFileMask      = 'InternalFileMask';

// список параметров секции csBtrieve
  isDetectBtrieve         = 'DetectBtrieve'; // метод коннекта к btrieve'у
    pkDetectBtrieve       = 'BTR';
  isBtrieveCacheSize      = 'BtrieveCacheSize';
    pkBtrieveCacheSize    = 'BCS';
  isTableCacheSize        = 'OpenTablesCacheSize';
    pkTableCacheSize      = 'TCS';
  isProhibitionOnCompAutoInc = 'ProhibitionOnCompAutoInc';
  isIndexRejectCount      = 'IndexRejectCount';
  isNoIndexRejectCount    = 'NoIndexRejectCount';
  isCutLongUserName       = 'CutLongUserName';
  isMaxJournalRecordCountInMem = 'MaxJournalRecordCountInMem';
  isMaxTableHandles       = 'MaxTableHandles';

// список параметров секции csWindows
  isCalcFileName          = 'CalcFileName';
  isCloseConsole          = 'CloseConsole';
  isConsole               = 'Console';
  isSlideBrowser          = 'SlideBrowser';
  isSystemFont            = 'SystemFont';
  isSystemFixedFont       = 'SystemFixedFont';
  isCharacterSet          = 'CharacterSet';
  isFontSize              = 'FontSize';
  isFixedFontSize         = 'FixedFontSize';
  isPaletteNames          = 'PaletteNames';
  isPaletteColors         = 'PaletteColors';
  isPaletteColors16       = 'PaletteColors16';
  isBitmapCacheSize       = 'BitmapCacheSize';
  isDefaultEditorScale    = 'DefaultEditorScale';
  isDefaultEditorQuality  = 'DefaultEditorQuality';
  isExcelColumns          = 'ExcelColumns';
  isVisualDelay           = 'VisualDelay';
  isVisualThread          = 'VisualThread';
  isVisualBarType         = 'VisualBarType';
  isVisualThreadDelay     = 'VisualThreadDelay';
  isVisualBarLength       = 'VisualBarLength';
  isVisualStepCount       = 'VisualStepCount';
  isFastVisual            = 'FastVisual';
  isEditorDelForBlock     = 'EditorDelForBlock';
  isEditorUndoCount       = 'EditorUndoCount';
  isEditorUserCount       = 'EditorUserCount';
  isNewSelectDirDialog    = 'NewSelectDirDialog';
  isEmbeddedMemoEdit      = 'EmbeddedMemoEdit';
  isCentreInterface       = 'CentreInterface';
  isZoomInterface         = 'ZoomInterface';
  isDisableExitToMenuOnEmptyDesktop = 'DisableExitToMenuOnEmptyDesktop';
  isBadSplitterBehaviour  = 'BadSplitterBehaviour';
  isIntegrator      = 'Integrator';  //#grib#desk_to_dll
  isMemoOnlyJFIF    = 'MemoOnlyJFIF';  //#grib#101.22902
  isRowColorDarkening   = 'RowColorDarkening';
  isLayoutXML             = 'LayoutXML';
  isLayout2XML            = 'Layout2XML';
  isLayoutName            = 'LayoutName';
  isSplashLayoutXML       = 'SplashLayoutXML';
  isSplashLayout2XML      = 'SplashLayout2XML';
  isSplashLayoutName      = 'SplashLayoutName';

  isWinHelpImpostor            = 'WinHelpImpostor';
  isWinHelpImpostorScarlets    = 'WinHelpImpostorScarlets';
  isUserSpellDict         = 'UserSpellDict';
  isSpellCheckEnable      = 'SpellCheckEnable';
  isTreeNoLines           = 'TreeNoLines';
  isColorerCatalog        = 'ColorerCatalog';
  isCopyPasteKeyMask      = 'CopyPasteKeyMask';
  isNoFilterFindFile      = 'NoFilterFindFile';
  isBrowserViewFlags      = 'BrowserViewFlags';
  isNoActivMode           = 'NoActivMode';
  isSearchFromCBbyCharacter = 'SearchFromCBbyCharacter';

// список параметров секции csKey
  isSharedPath            = 'SharedPath';
  isCheckPeriod           = 'CheckPeriod';
  isTransportType         = 'TransportType';

// список параметров секции csLicense
  isLicFileName           = 'LicFileName';
  isLogFileWriteFlag      = 'LogFileWriteFlag';
  isLogFileFullName       = 'LogFileFullName';
  isTryLockPeriod         = 'TryLockPeriod';
  isStatisticFile         = 'StatisticFile';
  isCheckBurstMode        = 'CheckBurstMode';

// список параметров секции csCalendar
  isShowWeeks             = 'ShowWeeks';
  isShowToday             = 'ShowToday';

// список параметров секции csQuickChoice
  isLines                 = 'Lines';
  isHistorySize           = 'HistorySize';
  isIdle                  = 'Idle';
  isFixedListWidth        = 'FixedListWidth';
  isDisable               = 'Disable';

// список параметров секции csAQA
  isAQAWriteDataDir       = 'WriteDataDir';
  isAQAReadDataDir        = 'ReadDataDir';
  isAQADebug              = 'Debug';
  isAQALogFile            = 'LogFile';
  isAQADelay              = 'Delay';
  isAQAStartPlan          = 'StartPlan';
  isAQAStartPlanContinue  = 'StartPlanContinue';
  isAQAImportArchive      = 'ImportArchive';
  isAQASilentMode         = 'SilentMode';
  isAQAContinueMode       = 'ContinueMode';
  isAQAStartContour       = 'StartContour';
  isAQAStartModule        = 'StartModule';
  isAQAStageNames         = 'StageNames';
  isAQATimingReport       = 'TimingReport';
  isAQAQuickPlay          = 'AQAQuickPlay';
  isAQAEnablePlanSwitch   = 'PlanSwitch';

  isAQACPAlwaysView       = 'AlwaysViewCheckPoint';
  isAQAFileCheckPointView = 'CheckPointView';
  isAQACheckDescription   = 'CheckDescription';

  isAQACheckRegen         = 'CheckRegenerate';
  isManualCheckPointFilter= 'ManualCheckPointFilter';
  isAQAMaxRes             = 'MaxDiff';
  isAQAFontCheck          = 'FontCheck';
  isAQACheckpointRewrite  = 'ResetControlPoint';
  isAQALogSystemInformation  = 'AQALogSysInfo';
  isAQADisableNonCrit     = 'DisableNonCrit';
  isAQAOutSegment         = 'AQAOutSegment';
  isAQALogSegmentSoftInfo = 'LogSegmentSoftInfo';

  isAQAExternalFileComparer = 'AQAExternalFileComparer';
  isAQACompatibleCPFR     = 'AQACompatibleCPFR';

  isAQAMessageTimeout     = 'AutoMessageTimeout';
  isAQAMessagePatterns    = 'AutoMessagePatterns';
  isAQAMessageLogFile     = 'AutoMessageLogFile';
  isAQAMessageCountDown   = 'AutoMessageCountDown';
  isAQAMessage2AQALog     = 'AutoMessage2AQALogFile';
  isAQAMessageSilentPatterns = 'AutoMessageSilentPatterns';

  isAQAComponentVersion   = 'ComponentVersion';
  isAQAFilialFile         = 'FilialFile';
  isAQAJournalFile        = 'JournalFile';
  isAQAProtectFile        = 'ProtectFile';
  isAQAProtectAdmin       = 'ProtectAdmin';

  isAQASaveConfig         = 'SaveConfig';
  isAQASelectFilePath     = 'SelectFilePath';

// список параметров секции csAPI
  isCOMAutomation         = 'COMAutomation';
    pkEmbedding           = 'Embedding';
    pkAutomation          = 'Automation';
  isComRegServer          = 'COMRegServer';
    pkRegServer           = 'RegServer';
  isCOMUnRegServer        = 'COMUnRegServer';
    pkUnRegServer         = 'UnRegServer';
  isCOMRegSilent          = 'COMRegSilent';
    pkRegSilent           = 'RegSilent';
  isCOMProgID             = 'COMProgID';
    pkProgID              = 'ProgID';

// список параметров секции csConfigurator
  isUserConfigRes         = 'Resource';
  isConfEnabled           = 'Enabled';
  isConfDesigner          = 'Designer';
  isAddResources          = 'AddResources';
  isExpertMode            = 'ExpertMode';
  isObsoleteResourceNames = 'ObsoleteResourceNames';
  isExtsCreateOnLoad      = 'ExtsCreateOnLoad';

// список параметров секции csMacro
  isMacroDisable                = 'Disable';
  isMacroListingEnable          = 'ListEnable';
  isMacroListingExtension       = 'ListExtension';
  isMacroListingFileName        = 'ListFileName';
  isMacroListingAppend          = 'ListAppend';
  isMacroDefine                 = 'Define';
    pkMacroDefine               = 'DEF';
  isMacroDefinesInfo            = 'ListDefines';
  isMacroListingShowSource      = 'ShowSource';
  isMacroListingNoDup           = 'ListNoDup';
  isMacroSourceCrossRef         = 'SourceCrossRef';
  isMacroDefineSource           = 'DefineSource';
  isMacroCheckCondition         = 'CheckCondition';
  isMacroBuffered               = 'Buffered';
  isMacroInclux                 = 'Inclux';
  isMacroCaseSense              = 'CaseSense';
  isMacroStatistic              = 'Statistic';
  isMacroInvulnerable           = 'Invulnerable';
  isMacroListingDebug           = 'ListDebug';
  isMacroIncludeEatLine         = 'IncludeEatLine';
  isMacroCrossRefVipOnly        = 'CrossRefVipOnly'; //##grib##
    pkMacroIncludeEatLine       = 'MIEL';

// список параметров секции csDesigner
  isCompiledFile                = 'CompiledFile';
  isCompiledInterface           = 'CompiledInterface';
  isGetProjectFilesOnly         = 'GetProjectFilesOnly';

// список параметров секции csRepository
  isImportFromXML               = 'ImportFromXML';
    pkImportFromXML             = 'XML2Rep';
  isExportToXML                 = 'ExportToXML';
    pkExportToXML               = 'Rep2XML';

// список параметров секции csClient
  isServer                      = 'Server';
  isProtocol                    = 'Protocol';
  isApplication                 = 'Application';
  isAlias                       = 'Alias';
  isiniFile                     = 'iniFile';
  isNoCheckResource             = 'NoCheckResource';
  isWaitServerVisualDelay       = 'WaitServerVisualDelay';
  isLocalNetworkMode            = 'LocalNetworkMode';

//--------------------------------------------------------
  ppsNone     = 0;   // нигде не установлен, значение установлено при инициализации в дефолтное значение типа
  ppsDefault  = 1;   // присвоено в при регистрации в функции RegisterParameterEx
  ppsConfig   = 2;   // присвоено в конфигурационном файле
  ppsFunction = 4;   // установлено в прикладном коде через функцию Set...Parameter
  ppsTune     = 8;   // установлено в интерфейсе настройки параметров
  ppsNotFind  = 255; // параметр не найден

  pprHistory  = 0;   // возвратить маску, где устанавливалось значение (неважно, менялось оно при этом или нет)
  pprCurrent  = 1;   // возвратить константу, где установлено текущее значение

// Метки границ диапазонов допустимых значений параметров
  BeginRange  = '@_Begin_@';          // Метка нижней границы диапазона
  EndRange    = '@_End_@';            // Метка верхней границы диапазона

// Типы параметров
  ptNoSuchParameter = 0;
  ptBoolean         = 1;
  ptDouble          = 2;
  ptString          = 3;
  ptLongint         = 4;
  ptPath            = 5;
  ptFile            = 7;
  ptMacro           = 8;
  ptComp            = 9;

// Типы синонимов
  ptKey             = 0;  // ключ
  ptOption          = 1;  // опция
  ptSwitch          = 2;  // переключатель

// Флаги параметров
  ifWriteCommonFile         =     1;  // Записывается в общий файл конфигурации
  ifWriteUsersFile          =     2;  // Записывается в файл конфигурации пользователя
  ifMayBeCollected          =     8;  // Значения могут накапливаться в списке параметров
  ifStringTrim              =    16;  // Надо ли вытирать пробелы на краях строки
  ifStringUpCase            =    32;  // Приводить содержимое строки к верхнему регистру
  ifCanDuplicate            =    64;  // Можно ли хранить дубликаты параметров
  ifHelpNotAvail            =   128;  // Подсказка по параметру не выдается
  ifNoExpandPath            =   256;  // Не прибавлять CurPath к параметру ptFile или ptPath
  ifNoTranslateMacro        =   512;  // Не раскрывать макросы
  ifDontAllowInClientConfig =  1024;  // не клиентский параметр
  ifDontMargeClientConfig   =  2048;  // раздельный параметр
  ifDeprecated              = 16384;  // Устаревший параметр, принять, но выдать сообщение
  ifMaskParam               = 32768;  // параметр содержит значение битовой маски (для проверки корректности ввода)

// Флаги макро
  ifGetFullPathName         =     1;  // При работе TranslateMacro добавить ppCurPath

// Флаги секций
  sfEnableCreateNew         =     1;  // В секцию можно добавлять параметры пользователю
  sfUserSection             =     2;  // Это секция, придуманная пользователем для самого
  sfHelpNotAvail            =   128;  // Подсказка по секции не выдается
  sfDontAllowInClientConfig =  1024;  // не клиентская секция
  sfDontMargeClientConfig   =  2048;  // раздельная секция

// Флаги засылки значения
  ifAppendParameter         =     0;  // Очистить параметр до засылки в него нового значения
  ifClearParameter          =     1;  // Очистить параметр до засылки в него нового значения
  ifNoModifiedFlag          =     2;  // Не выставлять поле Modifed у параметра

// Флаги выборки значения
  ifFirstParameter          =     0;  // Взять первый параметр из списка или вообще первый
  ifNextParameter           =     1;  // Взять следующий параметр из списка или никакой если его нет

// Флаги формирования конфигурационного файла
  pesNone                   =     0;  // Не определено 
  pesSkipDeprecate          =     1;  // Не выводить устаревшие параметры
  pesSkipDefault            =     2;  // Не выводить параметры, значения которых совпадают со значениями по умолчанию
  pesSkipComment            =     4;  // Не выводить комментарии
  pesOnlyUsers              =     8;  // Выводить только те параметры, которые имеют флаг ifWriteUsersFile
  pesParameters             =     1;  // Выводить в формате [Секция]Параметр= (формат ini-файла)
