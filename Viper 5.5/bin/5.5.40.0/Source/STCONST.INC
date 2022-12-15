Const
  { TStream access modes }
  stCreate    = 22; { 01 01 10: CREATE_ALWAYS | GENERIC_READ | GENERIC_WRITE | FILE_SHARE_READ }
  stOpenWrite =  1; { 00 00 01: OPEN_EXISTING | GENERIC_WRITE }
  stOpen      =  2; { 00 00 10: OPEN_EXISTING | GENERIC_READ | GENERIC_WRITE }
  stDenyNone  = 12; { 00 11 00: FILE_SHARE_READ | FILE_SHARE_WRITE }
  stDenyWrite =  4; { 00 01 00: FILE_SHARE_READ }
  stFileOpen  =  0; { 00 00 00: OPEN_EXISTING | GENERIC_READ }
  stOpenRead  =  4; { 00 01 00: OPEN_EXISTING | GENERIC_READ | FILE_SHARE_READ }
  stDenyAll   =  0; { 00 00 00: }
  stDenyRead  =  8; { 00 10 00: FILE_SHARE_WRITE }
  stReOpen    = 38; { 10 01 10: OPEN_ALWAYS | GENERIC_READ | GENERIC_WRITE | FILE_SHARE_READ }
  stAppend    = 54; { 11 01 10: OPEN_ALWAYS | GENERIC_READ | GENERIC_WRITE | FILE_SHARE_READ }

  stCaseSens  = $0001; { search mode }

  { TStream error codes }

  stOk         =  0;              { No error }
  stError      = -1;              { Access error }
  stInitError  = -2;              { Cannot initialize stream }
  stReadError  = -3;              { Read beyond end of stream }
  stWriteError = -4;              { Cannot expand stream }
  stGetError   = -5;              { Get of unregistered object type }
  stPutError   = -6;              { Put of unregistered object type }

Type
  { TStreamRec }

  PStreamRec = ^ TStreamRec;
  TStreamRec = Record
    ObjType : Word;
    VmtLink : {$IfDef Win32} Pointer {$Else} Word {$EndIf Win32};
    Load    : Pointer;
    Store   : Pointer;
    {$IfDef MsDos}
      Next  : PStreamRec;
    {$EndIf MsDos}
    {$IfNDef Win32}
      VmtDSeg : Word;
    {$EndIf ~Win32}
  End;

const
  deFileNotFound           =  2;
  dePathNotFound           =  3;
  deBadPathName            =  161;

  DefaultBufferSize : Word = 48 * 1024;
