const ttyDefault     =     0;
const ttyData        =     1;  // $0001 - Обычная таблица с данными
const ttySyst        =     2;  // $0002 - Системная таблица
const ttyMemo        =     4;  // $0004 - Признак присутствия мемо-поля
const ttyNRec        =     8;  // $0008 - Признак присутствия NREC'a
const ttyDict        =    16;  // $0010 - Словарная (структурная) таблица
const ttyCreateUser  =    32;  // $0020 - Таблица создана пользователем
const ttyCurrentJ    =    64;  // $0040 - Таблица в данный момент журналируется (выставляется только при работе)
const ttyAutoInc     =   128;  // $0080 - Признак присутствия поля autoinc
const ttyTemporary   =   256;  // $0100 - Временная таблица
const ttyHeader      =   512;  // $0200 - Таблица с заголовком
const ttyJournal     =  1024;  // $0400 - Таблица может журналироваться
const ttyCorpo       =  2048;  // $0800 - Таблица может участвовать в обмене
const ttyNoProtect   =  4096;  // $1000 - Таблица не защищается PROTECT'ом
const ttyBranched    =  8192;  // $2000 - Таблица участвует в филиальности
const ttyUser        = 16384;  // $4000 - Пользовательская таблица
const ttyShared      = 32768;  // $8000 - Таблица разделяема (выставляется только при работе)

// X$FILES.XF$FLAGS2 , этих флагов нет в TableDef
const tf2_PublicBranched = 2; // Общая таблица (работа вообще без филиального фильтра)
const tf2_MonoBranched = 4; // Таблица при работе в 1 филиале видна только из этого филиала

const tmffHasMemo = 1;
const tmffMemoNoHeader = 2;

// Флажки сегментов индексов
const kmDup          =     1;  // $0001
const kmModif        =     2;  // $0002
const kmBin          =     4;  // $0004
const kmNull         =     8;  // $0008
const kmMoreSeg      =    16;  // $0010
const kmAlter        =    32;  // $0020
const kmDesc         =    64;  // $0040
const kmSup          =   128;  // $0080
const kmExtType      =   256;  // $0100
const kmSurrogate    =   512;  // $0200
const kmExpr         = 16384;  // $4000 - сегмент без смещения, вычисляемое выражение

const kmVarLength    =     1;  // $0001
const kmBlankTrunc   =     2;  // $0002
const kmCompress     =     8;  // $0008
const kmRepeatDup    =   128;  // $0080
const kmUseVAT       =  2048;  // $0800 
const kmIndexDropped = 16384;  // $4000 - Индекс временно удален 

const kmJournal      =  1024;  // $0400 - Ключ для журнализации
const kmString       =  2048;  // $0800 - exact "string" type (for OFFSET)
const kmChar         =  4096;  // $1000 - segment attribute "String"|"Char"
const kmCreateUser   =  8192;  // $2000 - помечает поле или индекс как пользовтельское
const kmWReplace     = 16384;  // $4000 - table attribute "WithReplace"
const kmAutoinc      = 32768;  // $8000 - segment attribute "Autoinc"

const kmBtrvAttr     =   511;  // $01FF - Mask for ALL btrieve attrib.
const kmAny          = 65535;  // $FFFF
const kmUpCase       = kmAlter; // attribute "Upcase" same as "Alter"

// x$indexes.xi$flags2
const kmBranched     = 1;   // уникальность в рамках филиала (иначе сквозная). Для неуникальных индексов пофиг
                            // флаг заполняется в саппорте на вкус админа
const kmActualBranchFirst = 4; // У существующего индекса сегмент филиальности в начале, и с этим надо считаться при навигации!
                               // Пофиг, что по правилам индекс должен быть другой, его ещё не починили
                               // Этот флаг заполняется после создания индекса в СУБД


// В первазиве такой флаг у последнего сегмента индекса означет, что он усечён до итоговой длины индекса 255
// Может быть наложено только на последний сегмент, и только если он строковый, и только если без него длина была меньше 255
const kmPartial     =   512;


// Флаги полей (помимо kmCreateUser)
const ffUpcase = 1; // В PSQL-описании базы означает, что это поле сравнивается CASE INSENSITIVE
const ffACS = 4; // В PSQL-описании базы означает, что сравнение осуществляется согласно NLS-таблице, прилагающейся к таблице

// Опции сравнения
const TDCmpOpt_Fields = 1;
const TDCmpOpt_Indexes = 2;
const TDCmpOpt_All = 65535;
