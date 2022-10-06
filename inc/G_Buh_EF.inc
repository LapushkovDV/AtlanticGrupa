/*
 ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
 บ                     (c) 1994,2002 ชฎเฏฎเ ๆจ๏ €€’€                    บ
 บ ‘จแโฅฌ        : €€’€                                                 บ
 บ เฎฅชโ        : ใๅฃ ซโฅเแชจฉ ชฎญโใเ                                      บ
 บ ฅเแจ๏        : 5.84                                                      บ
 บ  งญ ็ฅญจฅ    : ญฅ่ญจฅ ฏเฎๆฅคใเ๋ จ ไใญชๆจจ จง G_Buh.dll                  บ
 บ โขฅโแโขฅญญ๋ฉ : ฅเฌ ญ เจฉ คใ เคฎขจ็                                    บ
 ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ
*/

//------------------------------------------------------------------------------
// B_Errors.pas
procedure BuhErrorOpen                                   ; external 'G_Buh.dll';
procedure BuhErrorPrint         (String)                 ; external 'G_Buh.dll';
procedure BuhErrorCloseAndShow                           ; external 'G_Buh.dll';
procedure BuhErrorCurrentShow                            ; external 'G_Buh.dll';
function  BuhErrorCurrentStatus                 : Boolean; external 'G_Buh.dll';
//------------------------------------------------------------------------------
// KoefRash.pas
function KoefRasch
         (Integer,Comp,String,Comp,Date,Comp)   : Double;  external 'G_Buh.dll';
function OpenKoefRasch                          : Boolean; external 'G_Buh.dll';
function CloseKoefRasch                         : Boolean; external 'G_Buh.dll';
function ExtNextNumStr          (String)        : String;  external 'G_Buh.dll';
function ModAmortStr            (Word)          : String;  external 'G_Buh.dll';
//------------------------------------------------------------------------------
// B_NewOld.pas
function Go_BuhNewMon                           : boolean; external 'G_Buh.dll';
function Go_BuhOldMon                           : boolean; external 'G_Buh.dll';
//------------------------------------------------------------------------------
// RepRun.pas
function  RunPascalReport    (Word, Word)       : boolean; external 'G_Buh.dll';
function  RunPasRep_Record
                (Word, Word, var AnyType)       : boolean; external 'G_Buh.dll';
function  AnInitTreeBuilder
                (Integer,Boolean,Integer)       : LongInt; external 'G_Buh.dll';
procedure AnDoneTreeBuilder  (Longint)                   ; external 'G_Buh.dll';
procedure AnTune
                (Longint,Byte,Byte,Byte,Byte,Byte,
                         Byte,Byte,Byte,Byte,Byte)       ; external 'G_Buh.dll';
procedure AnUploadTemp       (Longint,Word)              ; external 'G_Buh.dll';
procedure AnUploadTemp_New   (Longint,Word,var AnyType)  ; external 'G_Buh.dll';
//------------------------------------------------------------------------------
// ServFin.pas
function  Calc_NewSaldo
          (word,comp,integer,string,string,comp,comp,
           comp,comp,comp,comp,comp,Date,Date)  : boolean; external 'G_Buh.dll';
//------------------------------------------------------------------------------
// B_Saldo.pas
procedure SaldoReportInit    (comp,Date,boolean,comp,word,word,word,word,word,word)
                                                         ; external 'G_Buh.dll';
procedure SaldoDasReportInit (comp,Date,comp,word,word,word,word,word,word,word,word)
                                                         ; external 'G_Buh.dll';
//------------------------------------------------------------------------------
// RepTree.pas & TreeRep.pas
function  InitTreeBuilder       (LongInt)                   : longInt; external 'G_Buh.dll';
procedure DoneTreeBuilder       (Longint)                            ; external 'G_Buh.dll';
function  SetReportStyles       (LongInt,LongInt,String)    : boolean; external 'G_Buh.dll';
function  BuildTreeOverTable    (Longint,Integer,Word,Word,
                                 Word,Word,Word,Word,Word,
                                 Word,Word,Word)            : boolean; external 'G_Buh.dll';
function  TuneLevel             (Longint,Byte,Word,LongInt,
                                 String,Word,LongInt,Word)  : boolean; external 'G_Buh.dll';
function  TuneSum               (LongInt,Byte,Byte,LongInt) : boolean; external 'G_Buh.dll';
function  BuildTunedTree        (LongInt,Integer)           : boolean; external 'G_Buh.dll';
Procedure SetTempIndex          (LongInt,Byte)                       ; external 'G_Buh.dll';
procedure RepTreeNameFromKauFun (LongInt,Word,Word,Word,
                                 Word,Word,Word,Word,
                                 Word,Word,Word)                     ; external 'G_Buh.dll';
//------------------------------------------------------------------------------
// ServBuh.pas
Procedure CheckPlansAndCurRep                                        ; external 'G_Buh.dll';

//------------------------------------------------------------------------------
// BuhgTune.pas
procedure BuhgTuneInit                                               ; external 'G_Buh.dll';
procedure BuhgTuneDone                                               ; external 'G_Buh.dll';
function  BuhgTuneClear: boolean                                     ; external 'G_Buh.dll';
function  BuhgTuneInitFilter(word,comp,string): boolean              ; external 'G_Buh.dll';
function  BuhgTuneFoundFilter(word,string,string,comp,comp,comp,comp,comp,comp): boolean
                                                                     ; external 'G_Buh.dll';
