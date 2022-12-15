const cfmSetProp            = 1; // установить свойство
const cfmGetProp            = 2; // считать свойство
const cfmSetPropDefault     = 3; // установить свойство в значение по-умолчанию
const cfmCheckProp          = 4; // проверить свойство для редактирования
const cfmGetPropList        = 5; // получить список строковых значений свойства
const cfmGetPropListValues  = 6; // получить список значений свойства

const cfmCreate             = 7; // создать объект
const cfmDestroy            = 8; // уничтожить объект
const cfmCheckCreate        = 9; // проверить насчет создания объекта
const cfmLoad               = 10; // загрузить объект
const cfmStore              = 11; // сохранить объект
const cfmDeleteConf         = 12; // удалить конфигурацию в ресурсе

// флаги функций SetState, ClearState, TestState

const osObjectsModified   = 1; // изменились свойства объектов
const osSelectedModified  = 2; // изменился перечень выбранных объектов
const osObjectsAddDelete  = 4; // изменился перечень объектов
const osConfigWriting     = 8; // идет запись объекта конфигурации
const osDesignerSetProp   = 16; // Вызов SetProp из списка св-в дизайнера


