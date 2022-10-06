//------------------------------------------------------------------------------
//                                                      (c) корпорация Галактика
// Галактика 9.10 - "XLT отчеты"
// Внешние функции : "Resource Transformation Server"
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
Function RTS_GetFileExists  (String)          : Boolean; external 'RTSFilerLib.dll';
Function RTS_GetFileAge     (String)          : LongInt; external 'RTSFilerLib.dll';
Function RTS_SetFileAge     (String, LongInt) : LongInt; external 'RTSFilerLib.dll';
Function RTS_SetFileReadOnly(String, Boolean) : Boolean; external 'RTSFilerLib.dll';
