//------------------------------------------------------------------------------
//                                                      (c) корпорация Галактика
// Галактика 8.10 - Целевой учет запасов
// Структура для передачи аналитик целевого учета
//------------------------------------------------------------------------------

Type
  TMTRKauArray = record
    wTable    : word;                  // coTable
    cSpecRec  : comp;                  // Table.nRec
    cSaldTune : comp;                  // SaldTune.nRec
    wKau      : array [1..10] of word;
    cKau      : array [1..10] of comp;
    cRole     : array [1..10] of comp;
    wParam    : word;                  // future
    cParam    : comp;                  // future
  end;
