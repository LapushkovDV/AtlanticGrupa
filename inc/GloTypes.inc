//------------------------------------------------------------------------------
//                                                      (c) Корпорация Галактика
// Галактика ERP 9.1
// Глобальные типы
//------------------------------------------------------------------------------

#ifNdef _GloTypes_Inc_Included
#define _GloTypes_Inc_Included

#include GloDefs.inc
#include DocDefs.inc            // Макроопределения для документирования

#include DicTypes.def           // Словарные типы данных.
#include ExtAttr.vih            // внешние атрибуты
#include ExtClass.vih           // внешняя классификация
#include ValFunc.vih            // работа с курсами валют
#include ExcelFormat.vih
#include ShowSchet26.vih        // 26-разрядный счет для бюджетников
#include oEdIzm.vih             // работа с отпускными единицами измерения
#include TekRun.vih             // работа с текущими остатками
#include CalcSum.vih


//******************************************************************************
type
#ifdef Atl60
  // для типов переменных и параметров функций
  TPtr = pointer;
  // для типов табличных полей
  TSurrPtr = comp;
#else
  TPtr = longint;
  TSurrPtr = longint;
#end

#end  // _GloTypes_Inc_Included

//******************************************************************************
