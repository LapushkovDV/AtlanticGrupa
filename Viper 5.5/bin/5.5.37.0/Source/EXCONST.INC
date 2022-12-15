const
  scEmpty           =     0;
  scName            =     1;
  scTitle           =     2;
  scConst           =     5;
  scCheck           =     8;
  scError           =     9; // Возвращается в случае необходимости выдать ошибку

const
  gfrConst          = $0001; // константа
  gfrField          = $0002; // поле (переменная, табличное поле, модификатор и т.д.)
  gfrRegFunc        = $0003; // зарегистрированная функция
  gfrRegMethod      = $0004; // метод объекта
  gfrADVFunc        = $0005; // ADV функция
  gfrExtPoint       = $0006; // точка расширения
  gfrType           = $0007; // тип
  gfrVarNum         = $0008; // номер поля в интерфесе
  gfrSelfPublic     = $0009; // собственный public-метод
  gfrAggrFunc       = $000A; // агрегатная функция
  gfrClassMask      = $000F;
                   
  gfrHaveType       = $0010; // заполнено поле FoundType
  gfrHaveTypeEx     = $0020; // заполнено поле FoundTypeEx
  gfrHaveAI         = $0040; // заполнено поле FoundAI
  gfrGenConst       = $0080; // константа сформирована в процессе компиляции (номер поля, таблицы и т.д.)
  gfrFComID         = $0100; // поле из FCom'а (к ним нужен особый подход :)
  gfrLotID          = $0200; // поле из лог. таблицы
  gfrInheritedCall  = $0400; // inherited вызов перегруженной локальной функции

const
  prFrameCo         =    30; // коэффициент приоритета для одного фрейма
  prRegFunc         =     1; // приоритет глобальных зарегистрированных функций
                         
  prAutoIfcShift    =    -2; // интерфейс без прототипа
  prVarNumShift     =     2; // номер поля в интерфейсе #<имя поля>
  prTabFldNumShift  =     3; // номер поля в ЛТ #<таблица>.<поле>
  prTabNumShift     =     3; // номер таблицы в ЛТ
  prBodyMethodShift =     3; // зарегистрированные методы объектов
  prVarShift        =    10; // переменные объекта
  prPublicShift     =    20; // вызов собстственного public-метода
  prLTTFShift       =    22; // поле таблицы ЛТ указанное как <таблица>.<поле>
                         
  prLTVarShift      =    -2; // переменные НЕ текущей лог.таблицы относительно prVarShift
  prCurLTVarShift   =     6; // переменные ТЕКУЩЕЙ лог.таблицы относительно prVarShift
  prLTOFShift       =    -2; // OutField'ы лог таблицы (относительно переменных лог. таблицы)
  prLTSTFShift      =    -8; // поле узла без указания имени узла (относительно переменных лог. таблицы)
