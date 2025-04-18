//******************************************************************************
//                                                      (c) ª®à¯®à æ¨ï  « ªâ¨ª 
//  « ªâ¨ª  8.10 - ®£¨áâ¨ª 
//  ¯®«­¥­¨¥ â ¡«¨æ ¢ ¯ ¬ïâ¨ ¯® ¤ ­­ë¬ ¯à®â®â¨¯  TOVN
//******************************************************************************

//******************************************************************************
// «¨­ª-ä®à¬ , ¢ë¯®«­ïîé ï á¢ï§ì á ¤ ­­ë¬¨ ¯à®â®â¨¯ 
.linkform 'FillTmpTbl' prototype is tovn
.nameInList 'ë£àã§ª  ¤ ­­ëå ¨§ ¯à®â®â¨¯  TOVN ¢ FastReport'
.group 'FastReport'
.var
  recNakl  : TMPrnSoprNakl;
  recOrg   : TMPrnSoprOrg;
  recTTI   : TMPrnSoprTTI;
  recSpec  : TMPrnSoprSpNakl;
  recUsl   : TMPrnSoprUslNakl;
  recAttr  : TMPrnSoprAttr;
  recTTISp : TMPrnSoprSpTTI;
#ifdef _DROGA
  drogaFunc: iDrogaFunc;
  extAttr: iExtAttr;
  mcCountry: mcOriginCountry;
#end
.endvar
#include ttnf_var.frn
.create view MemTblSopr
from
  MPrnSoprNakl
, MPrnSoprOrg
, MPrnSoprTTI
, MPrnSoprSpNakl
, MPrnSoprUslNakl
, MPrnSoprAttr
, MPrnSoprSpTTI
, KatSopr
;
#ifdef _DROGA
.create view v_base as select * from katsopr, stepdoc where ((
­ ª« ¤­ ï_­à¥ª==katsopr.nrec
and katsopr.cstepdoc==stepdoc.nrec
));
.create view v_cert as select * from spsopr, sertific, katorg where ((
¯¥æ¨ä¨ª æ¨ï_­à¥ª==spsopr.nrec
and spsopr.cMcUsl == sertific.cmc
and sertific.ctasteorg == katorg.nRec
)) and  â >=sertific.ddoc and  â <=sertific.dend
and sertific.status = 1
;

// LapushkovDV
.create view vMarshrut as select
 MARAVT.NPADDR  //-  ¤à¥á ¨§ ¬ àèàãâ 
,MARREL.NAME    //- ­ ¨¬¥­®¢ ­¨¥ ¨§ ¯ã­ªâ  à §£àã§ª¨
,MARREL.NOMLICH //-  ¨§ ¯ã­ªâ  à §£àã§ª¨
from MARREL, MARPUNKT, MARAVT
Where ((
              1109 == TTNDOC.WTABLE
and ­ ª« ¤­ ï_­à¥ª == TTNDOC.CDOC
and TTNDOC.CPUNKTR == MARPUNKT.nrec
and TTNDOC.CPUNKTR == MARREL.CMARPUNKT
and MARREL.cMarAvt == MARAVT.Nrec
      ))
;

;
#end
#include summa.frn
!ç¨áâª  â ¡«¨æ ¢ ¯ ¬ïâ¨
.begin
  MemTblSopr.Delete All MPrnSoprNakl;
  MemTblSopr.Delete All MPrnSoprOrg;
  MemTblSopr.Delete All MPrnSoprTTI;
  MemTblSopr.Delete All MPrnSoprSpNakl;
  MemTblSopr.Delete All MPrnSoprUslNakl;
  MemTblSopr.Delete All MPrnSoprAttr;
  MemTblSopr.Delete All MPrnSoprSpTTI;
end.
.{
.begin
//******************************************************************************
! ä®à¬¨à®¢ ­¨¥ MPrnSoprNakl
  ClearAdvRecord(recNakl);

  recNakl.KatSoprNRec        := ­ ª« ¤­ ï_­à¥ª;
  recNakl.UNN                := unn_inn;
  recNakl.KolSpSopr          := ª®«¨ç¥áâ¢®_SpSopr;
  recNakl.TypeParentDoc      := â¨¯_à®¤¨â¥«ìáª®£®_¤®ªã¬¥­â ;
  recNakl.LicPost            := ¨æ¥­§¨ï_®áâ ¢é¨ª;
  recNakl.LicGrouzOtp        := ¨æ¥­§¨ï_àã§®®â¯à ¢¨â¥«ì;
  recNakl.LicGrouzPol        := ¨æ¥­§¨ï_àã§®¯®«ãç â¥«ì;
  recNakl.LicPol             := ¨æ¥­§¨ï_®«ãç â¥«ì;
  recNakl.LicPlat            := ¨æ¥­§¨ï_« â¥«ìé¨ª;
  recNakl.LicZakPlat         := ¨æ¥­§¨ï_ ª §ç¨ª_« â¥«ìé¨ª;
  recNakl.grotp_gl_name      := àã§®®â¯à ¢¨â¥«ì_®«®¢­ ï_à£_ ¨¬¥­;
  recNakl.grpol_gl_name      := àã§®¯®«ãç â¥«ì_®«®¢­ ï_à£_ ¨¬¥­;
  recNakl.PriceList          := à¥©áªãà ­â¥­;
  recNakl.Director           := ¨à¥ªâ®à;
  recNakl.DirectorTabNom     := ¨à¥ªâ®à_ ¡®¬;
  recNakl.DirectorApp        := ¨à¥ªâ®à_®«¦­®áâì;
  recNakl.GBuhName           := « ¢­ë©_ãå£ «â¥à;
  recNakl.GbuhNom            := « ¢­ë©_ãå£ «â¥à_ ¡®¬;
  recNakl.GbuhApp            := « ¢­ë©_ãå£ «â¥à_®«¦­®áâì;
  recNakl.KatSopr_NSopr      := ®¬¥à;
  recNakl.KatSopr_Descr      := ¯¥à â®à;
  recNakl.KatSopr_DescNum    := ®¬¥à_á_¤¥áªà¨¯â®à®¬;
  recNakl.KatSopr_UserField  := ®«¥®«ì§®¢ â¥«ï;
  recNakl.Dogovor_NoDoc      := ®¬¥à_®£®¢®à ;
  recNakl.Dogovor_dDoc       :=  â _®£®¢®à ;
  recNakl.Dogovor_NoDoc_Ext  := ®¬¥à_®£®¢®à _Ext;
  recNakl.KatSopr_dSopr      :=  â ;
  recNakl.Day_KatSopr_dSopr  :=  â ¥­ì;
  recNakl.Mon_KatSopr_dSopr  :=  â ¥áïæ;
  recNakl.Year_KatSopr_dSopr :=  â ®¤;
  recNakl.KatSopr_dOpr       :=  â _â£àã§ª¨;
  recNakl.KatSopr_nDover     := ®¬¥à®¢¥à;
  recNakl.KatSopr_dDover     :=  â ®¢¥à;
  recNakl.KatSopr_sDover     := ®¢¥à;
  recNakl.DovFIO_Name        := ®¢¨æ®;
  recNakl.DovFIO_Post        := ®¢¨æ®®«¦­®áâì;
  recNakl.DovFIO_PasSer      := ®¢¨æ® á¯¥à¨ï;
  recNakl.DovFIO_PasNumb     := ®¢¨æ® á¯®¬¥à;
  recNakl.DovFIO_WhereVid    := ®¢¨æ® á¯¤¥;
  recNakl.DovFIO_DatVid      := ®¢¨æ® á¯®£¤ ;
  recNakl.DoverOrgName       := à£®¢¥à;
  recNakl.KatSopr_Name       :=  §¢ ­_­ ª« ¤­®©;
  recNakl.KatPodr_Name       := ª« ¤;
  recNakl.KatPodr_Addr       := ª« ¤_¤à¥á;
  recNakl.KatPodrTo_Name     := ª« ¤_®«;
  recNakl.KatPodrTo_Addr     := ª« ¤_®«_¤à¥á;
  recNakl.KatMol_Name        := ;
  recNakl.MolTabNom          := ®«_ ¡®¬;
  recNakl.MolApp             := ®«®«¦­®áâì;
  recNakl.SkladBoss          := ª« ¤ãª®¢®¤¨â¥«ì;
  recNakl.KatMolTo_Name      := _®«;
  recNakl.MolPolTabNom       := ®«_®«_ ¡®¬;
  recNakl.MolPolApp          := ®«®«¦­®áâì_®«;
  recNakl.SkladBossPol       := ª« ¤ãª®¢®¤¨â¥«ì_®«;
  recNakl.TXO_Name           :=  §¢ ­_;
#ifdef _DROGA
  recNakl.Class_OsnOtp       :=  §¢ ­_­ ª« ¤­®©;
  if pos(' ', recNakl.Class_OsnOtp) > 0
    recNakl.Class_OsnOtp     := substr(recNakl.Class_OsnOtp, 1, pos(' ', recNakl.Class_OsnOtp)- 2);
#else
  recNakl.Class_OsnOtp       := á­®¢ ­¨¥_®â¯ãáª ;
#end
  recNakl.Class_CelPriobr    := ¥«ì_¯à¨®¡à¥â¥­¨ï;
  recNakl.SchFact_NRec       := ç ªâ_¥ª;
  recNakl.SchFact_Num        := ç ªâ_®¬¥à;
  recNakl.BaseDoc_NoDoc      := á­®¢ ­¨¥;
  recNakl.BaseDoc_DDoc       :=  â á­®¢ ­¨ï;
  recNakl.KatNazna_Name      :=  §­ ç¥­¨¥;
  recNakl.NZakaz_NoDoc       :=  àï¤ ª §®¬¥à;
  recNakl.NZakaz_DDoc        :=  àï¤ ª § â ;
  recNakl.NakSymbol          :=  ª¨¬¢®«;
  recNakl.NacSymbol          :=  æ¨¬¢®«;
  recNakl.ValSymbol          :=  «¨¬¢®«;
  recNakl.CurseSpis          := ãàá_á¯¨á ­¨ï;
  recNakl.Attr_SdalOptApp    := á¤ «_®â¯à ¢¨â¥«ì_¤®«¦­®áâì;
  recNakl.Attr_SdalOptFIO    := á¤ «_®â¯à ¢¨â¥«ì;
  recNakl.Attr_OptRazApp     := ®â¯ãáª_à §à¥è¨«_¤®«¦­®áâì;
  recNakl.Attr_OptRazFIO     := ®â¯ãáª_à §à¥è¨«;
  recNakl.Attr_OptRazApp2    := ®â¯ãáª_à §à¥è¨«_¤®«¦­®áâì2;
  recNakl.Attr_OptRazFIO2    := ®â¯ãáª_à §à¥è¨«2;
  recNakl.Attr_OptRazApp3    := ®â¯ãáª_à §à¥è¨«_¤®«¦­®áâì3;
  recNakl.Attr_OptRazFIO3    := ®â¯ãáª_à §à¥è¨«3;
  recNakl.Attr_Driver        := ¢®¤¨â¥«ì;
  recNakl.Attr_Forw          := íªá¯¥¤¨â®à;
  recNakl.Attr_MyAuto        := á®¡áâ¢¥­­ë©_âà ­á¯®àâ;
  recNakl.Attr_AutoName      := ¢â®¯à¥¤¯à¨ïâ¨¥_­ §¢;
  recNakl.MetLoad_Name       := _ã­ªâ_¥â®¤_2;
  recNakl.Attr_Auto          :=  ¢â®¬®¡¨«ì;
  recNakl.Attr_MetTrans      := á¯®á®¡_âà ­á¯®àâ¨à®¢ª¨;
  recNakl.Attr_KolEzd        := ª®«¨ç¥áâ¢®_¥§¤®ª;
  recNakl.TranspUsl1         := âà ­á¯®àâ­ ï_ãá«ã£ _1;
  recNakl.TranspUsl2         := âà ­á¯®àâ­ ï_ãá«ã£ _2;
  recNakl.KatSopr_cVal       :=  «îâ _­à¥ª;

  // âà¨å-ª®¤ ­ ª« ¤­®©
  if ( MemTblSopr.GetFirst KatSopr where (( ­ ª« ¤­ ï_­à¥ª == KatSopr.nRec )) = tsOk )
  {
    // ¢®¤­ ï ­ ª« ¤­ ï
    if ( ( MemTblSopr.KatSopr.cGrSopr <> 0 ) AND ( MemTblSopr.KatSopr.wADoc = 13 ) )
    {
      recNakl.BarCode := GenerateBarCodeEx(coGrSopr, MemTblSopr.KatSopr.cGrSopr);
    }
    else
    {
      recNakl.BarCode := GenerateBarCodeEx(coKatSopr, ­ ª« ¤­ ï_­à¥ª);
    }
  }

//******************************************************************************
! ä®à¬¨à®¢ ­¨¥ MPrnSoprTTI
  ClearAdvRecord(recTTI);
  recTTI.KatSoprNRec         := recNakl.KatSoprNRec;
  recTTI.MarKod              := _ àèàãâ_®¤;
  recTTI.MarName             := _ àèàãâ_¬ï;
  recTTI.MarSpKod            := _ àèàãâ_¯®á®¡à ­_®¤;
  recTTI.MarSpName           := _ àèàãâ_¯®á®¡à ­_¬ï;
  recTTI.MarRasst            := _ àèàãâ_ ááâ;
  recTTI.MarSpeed            := _ àèàãâ_ª®à®áâì;
  recTTI.SpeedKod            := _ª®à®áâì_®¤;
  recTTI.SpeedName           := _ª®à®áâì_¬ï;
  recTTI.SpeedMin            := _ª®à®áâì_¨­;
  recTTI.SpeedMax            := _ª®à®áâì_ ªá;
  recTTI.Speed               := _ª®à®áâì;
  recTTI.BasisKod            := _ §¨á_®¤;
  recTTI.BasisName           := _ §¨á_¬ï;
  recTTI.SpOtgrKod           := _¯®á®¡â£à_®¤;
  recTTI.SpOtgrName          := _¯®á®¡â£à_¬ï;
  recTTI.SpOtgrBasisKod      := _¯®á®¡â£à_ §¨á_®¤;
  recTTI.SpOtgrBasisName     := _¯®á®¡â£à_ §¨á_¬ï;
  recTTI.SpTransKod          := _¯®á®¡â£à_¯®á®¡à ­_®¤;
  recTTI.SpTransName         := _¯®á®¡â£à_¯®á®¡à ­_¬ï;
  recTTI.PunktRNormRazgr     := _ã­ªâ_®à¬ â¨¢_ §£à;
  recTTI.PunktRNormMar       := _ã­ªâ_ ááâ_ àèàãâ;
  recTTI.PunktRName          := _ã­ªâ_¬ï;
  recTTI.PunktRRasst         := _ã­ªâ_ ááâ;
  recTTI.PunktRCountryKod    := _ã­ªâ__;
  recTTI.PunktRCountryName   := _ã­ªâ__;
  recTTI.PunktRCountryNal    := _ã­ªâ__;
  recTTI.PunktRSityKod       := _ã­ªâ__;
  recTTI.PunktRSityName      := _ã­ªâ__;
  recTTI.PunktRSityTel       := _ã­ªâ__;
  recTTI.PunktRSCountryKod   := _ã­ªâ___;
  recTTI.PunktRSCountryName  := _ã­ªâ___;
  recTTI.PunktRSCountryNal   := _ã­ªâ___;
  recTTI.PunktRAddr          := _ã­ªâ_¤à¥á;
  recTTI.PunktRDateIn        := _ã­ªâ_ â _;
  recTTI.PunktRTimeIn        := _ã­ªâ_à¥¬ï_;
  recTTI.PunktRDateOut       := _ã­ªâ_ â _®;
  recTTI.PunktRTimeOut       := _ã­ªâ_à¥¬ï_®;
  recTTI.PunktRMet           := _ã­ªâ_¥â®¤;
  recTTI.PunktRDopName       := _ã­ªâ_®¯_¬ï;
  recTTI.PunktRDopKol        := _ã­ªâ_®¯_®«¨ç;
  recTTI.PunktRDopTime       := _ã­ªâ_®¯_à¥¬ï;
  recTTI.PunktPNormRazgr     := _ã­ªâ_®à¬ â¨¢_®£à;
  recTTI.PunktPNormMar       := _ã­ªâ_ ááâ_ àèàãâ;
  recTTI.PunktPName          := _ã­ªâ_¬ï;
  recTTI.PunktPRasst         := _ã­ªâ_ ááâ;
  recTTI.PunktPCountryKod    := _ã­ªâ__;
  recTTI.PunktPCountryName   := _ã­ªâ__;
  recTTI.PunktPCountryNal    := _ã­ªâ__;
  recTTI.PunktPSityKod       := _ã­ªâ__;
  recTTI.PunktPSityName      := _ã­ªâ__;
  recTTI.PunktPSityTel       := _ã­ªâ__;
  recTTI.PunktPSCountryKod   := _ã­ªâ___;
  recTTI.PunktPSCountryName  := _ã­ªâ___;
  recTTI.PunktPSCountryNal   := _ã­ªâ___;
  recTTI.PunktPAddr          := _ã­ªâ_¤à¥á;
  recTTI.PunktPDateIn        := _ã­ªâ_ â _;
  recTTI.PunktPTimeIn        := _ã­ªâ_à¥¬ï_;
  recTTI.PunktPDateOut       := _ã­ªâ_ â _®;
  recTTI.PunktPTimeOut       := _ã­ªâ_à¥¬ï_®;
  recTTI.PunktPMet           := _ã­ªâ_¥â®¤;
  recTTI.PunktPDopName       := _ã­ªâ_®¯_¬ï;
  recTTI.PunktPDopKol        := _ã­ªâ_®¯_®«¨ç;
  recTTI.PunktPDopTime       := _ã­ªâ_®¯_à¥¬ï;
  recTTI.Summa               := _ã¬¬ ;
  recTTI.Val                 := _ «îâ ;
  recTTI.Putlst_Kformpl      := _¨áâ_®¤;
  recTTI.Putlst_NPL          := _¨áâ_®¬¥à;
  recTTI.Putlst_Nseria       := _¨áâ_¥à¨ï;
  recTTI.Putlst_Nomer        := _¨áâ_®á®¬¥à;
  recTTI.Putlst_DatPl        := _¨áâ_ â ë¤ ç¨;
  recTTI.Putlst_ExitDn       := _¨áâ_ â ë¥§¤ ;
  recTTI.Putlst_ReturnDn     := _¨áâ_ â ®§¢à â ;
  recTTI.TTNDoc_sPList       := _®¬¥à_¨áâ;
  recTTI.KnDriver_TABN       := _®¤¨â¥«ì_ ¡¥«ì;
  recTTI.KnDriver_Name       := _®¤¨â¥«ì_¬ï;
  recTTI.KnDriver_Klassv     := _®¤¨â¥«ì_« áá;
  recTTI.KnDriver_KatgA      := _®¤¨â¥«ì_ âA;
  recTTI.KnDriver_KatgB      := _®¤¨â¥«ì_ âB;
  recTTI.KnDriver_KatgC      := _®¤¨â¥«ì_ âC;
  recTTI.KnDriver_KatgD      := _®¤¨â¥«ì_ âD;
  recTTI.KnDriver_KatgE      := _®¤¨â¥«ì_ âE;
  recTTI.KnDriver_StagVd     := _®¤¨â¥«ì_â ¦;
  recTTI.KnDriver_Nudov      := _®¤¨â¥«ì_®¬¥à¤®áâ;
  recTTI.KnForwarder_TABN    := _ªá¯¥¤¨â®à_ ¡¥«ì;
  recTTI.KnForwarder_Name    := _ªá¯¥¤¨â®à_¬ï;
  recTTI.KnForwarder_Klassv  := _ªá¯¥¤¨â®à_« áá;
  recTTI.KnForwarder_KatgA   := _ªá¯¥¤¨â®à_ âA;
  recTTI.KnForwarder_KatgB   := _ªá¯¥¤¨â®à_ âB;
  recTTI.KnForwarder_KatgC   := _ªá¯¥¤¨â®à_ âC;
  recTTI.KnForwarder_KatgD   := _ªá¯¥¤¨â®à_ âD;
  recTTI.KnForwarder_KatgE   := _ªá¯¥¤¨â®à_ âE;
  recTTI.KnForwarder_StagVd  := _ªá¯¥¤¨â®à_â ¦;
  recTTI.KnForwarder_Nudov   := _ªá¯¥¤¨â®à_®¬¥à¤®áâ;
  recTTI.Transp_Nomer        := _¢â®_®¬¥à;
  recTTI.Transp_Marka        := _¢â®_ àª ;
  recTTI.Transp_Volume       := _¢â®_¡ê¥¬;
  recTTI.Transp_Passport     := _¢â®_®¬¥à;
  recTTI.Transp_nPassp       := _¢â®_®¬¥à;
  recTTI.Transp_INNUM        := _¢â®_­¢®¬¥à;
  recTTI.Transp_Godv         := _¢â®_ â ë¯ãáª ;
  recTTI.Transp_Nomchas      := _¢â®_®¬¥à áá¨;
  recTTI.Transp_ForceLs      := _¢â®_®é­®áâì;
  recTTI.Transp_NomKuz       := _¢â®_®¬¥àã§®¢;
  recTTI.Transp_GruzPod      := _¢â®_àã§;
  recTTI.Transp_Weight       := _¢â®_¥á;
  recTTI.Transp1_Nomer       := _à¨æ¥¯1_®¬¥à;
  recTTI.Transp1_Marka       := _à¨æ¥¯1_ àª ;
  recTTI.Transp1_Volume      := _à¨æ¥¯1_¡ê¥¬;
  recTTI.Transp1_Passport    := _à¨æ¥¯1_®¬¥à;
  recTTI.Transp1_nPassp      := _à¨æ¥¯1_®¬¥à;
  recTTI.Transp1_INNUM       := _à¨æ¥¯1_­¢®¬¥à;
  recTTI.Transp1_Godv        := _à¨æ¥¯1_ â ë¯ãáª ;
  recTTI.Transp1_GarNom      := _à¨æ¥¯1_®¬¥à à ¦;
  recTTI.Transp1_Nomdvig     := _à¨æ¥¯1_®¬¥à¢¨£ â¥«ì;
  recTTI.Transp1_Nomchas     := _à¨æ¥¯1_®¬¥à áá¨;
  recTTI.Transp1_ForceLs     := _à¨æ¥¯1_®é­®áâì;
  recTTI.Transp1_NomKuz      := _à¨æ¥¯1_®¬¥àã§®¢;
  recTTI.Transp1_GruzPod     := _à¨æ¥¯1_àã§;
  recTTI.Transp1_Weight      := _à¨æ¥¯1_¥á;
  recTTI.Transp2_Nomer       := _à¨æ¥¯2_®¬¥à;
  recTTI.Transp2_Marka       := _à¨æ¥¯2_ àª ;
  recTTI.Transp2_Volume      := _à¨æ¥¯2_¡ê¥¬;
  recTTI.Transp2_Passport    := _à¨æ¥¯2_®¬¥à;
  recTTI.Transp2_nPassp      := _à¨æ¥¯2_®¬¥à;
  recTTI.Transp2_INNUM       := _à¨æ¥¯2_­¢®¬¥à;
  recTTI.Transp2_Godv        := _à¨æ¥¯2_ â ë¯ãáª ;
  recTTI.Transp2_GarNom      := _à¨æ¥¯2_®¬¥à à ¦;
  recTTI.Transp2_Nomdvig     := _à¨æ¥¯2_®¬¥à¢¨£ â¥«ì;
  recTTI.Transp2_Nomchas     := _à¨æ¥¯2_®¬¥à áá¨;
  recTTI.Transp2_ForceLs     := _à¨æ¥¯2_®é­®áâì;
  recTTI.Transp2_NomKuz      := _à¨æ¥¯2_®¬¥àã§®¢;
  recTTI.Transp2_GruzPod     := _à¨æ¥¯2_àã§;
  recTTI.Transp2_Weight      := _à¨æ¥¯2_¥á;
  recTTI.Transp3_Nomer       := _à¨æ¥¯3_®¬¥à;
  recTTI.Transp3_Marka       := _à¨æ¥¯3_ àª ;
  recTTI.Transp3_Volume      := _à¨æ¥¯3_¡ê¥¬;
  recTTI.Transp3_Passport    := _à¨æ¥¯3_®¬¥à;
  recTTI.Transp3_nPassp      := _à¨æ¥¯3_®¬¥à;
  recTTI.Transp3_INNUM       := _à¨æ¥¯3_­¢®¬¥à;
  recTTI.Transp3_Godv        := _à¨æ¥¯3_ â ë¯ãáª ;
  recTTI.Transp3_GarNom      := _à¨æ¥¯3_®¬¥à à ¦;
  recTTI.Transp3_Nomdvig     := _à¨æ¥¯3_®¬¥à¢¨£ â¥«ì;
  recTTI.Transp3_Nomchas     := _à¨æ¥¯3_®¬¥à áá¨;
  recTTI.Transp3_ForceLs     := _à¨æ¥¯3_®é­®áâì;
  recTTI.Transp3_NomKuz      := _à¨æ¥¯3_®¬¥àã§®¢;
  recTTI.Transp3_GruzPod     := _à¨æ¥¯3_àã§;
  recTTI.Transp3_Weight      := _à¨æ¥¯3_¥á;

  MemTblSopr.MPrnSoprTTI.Buffer := recTTI;
  MemTblSopr.Insert Current MPrnSoprTTI;

//------------------------------------------------------------------------------
! âà¨¡ãâë KatSopr
  ClearAdvRecord(recAttr);
  recAttr.KatSoprNRec         := recNakl.KatSoprNRec;
  recAttr.SpSoprNRec          := 0;
  recAttr.wTable              := coKatSopr;
  recAttr.AttrVal[1]          :=  âà1_­ ª;
  recAttr.AttrVal[2]          :=  âà2_­ ª;
  recAttr.AttrVal[3]          :=  âà3_­ ª;
  recAttr.AttrVal[4]          :=  âà4_­ ª;
  recAttr.AttrVal[5]          :=  âà5_­ ª;
  recAttr.AttrVal[6]          :=  âà6_­ ª;
  recAttr.AttrVal[7]          :=  âà7_­ ª;
  recAttr.AttrVal[8]          :=  âà8_­ ª;
  recAttr.AttrVal[9]          :=  âà9_­ ª;
  recAttr.AttrVal[10]         :=  âà10_­ ª;

  MemTblSopr.MPrnSoprAttr.Buffer := recAttr;
  MemTblSopr.Insert Current MPrnSoprAttr;

//------------------------------------------------------------------------------
! âà¨¡ãâë KatOrg
  ClearAdvRecord(recAttr);
  recAttr.KatSoprNRec         := recNakl.KatSoprNRec;
  recAttr.SpSoprNRec          := 0;
  recAttr.wTable              := coKatOrg;
  recAttr.AttrVal[1]          :=  âà1_¯®«;
  recAttr.AttrVal[2]          :=  âà2_¯®«;
  recAttr.AttrVal[3]          :=  âà3_¯®«;
  recAttr.AttrVal[4]          :=  âà4_¯®«;
  recAttr.AttrVal[5]          :=  âà5_¯®«;
  recAttr.AttrVal[6]          :=  âà6_¯®«;
  recAttr.AttrVal[7]          :=  âà7_¯®«;
  recAttr.AttrVal[8]          :=  âà8_¯®«;
  recAttr.AttrVal[9]          :=  âà9_¯®«;
  recAttr.AttrVal[10]         :=  âà10_¯®«;

  MemTblSopr.MPrnSoprAttr.Buffer := recAttr;

  MemTblSopr.Insert Current MPrnSoprAttr;

//------------------------------------------------------------------------------
! âà¨¡ãâë TTNDOC
  ClearAdvRecord(recAttr);
  recAttr.KatSoprNRec         := recNakl.KatSoprNRec;
  recAttr.SpSoprNRec          := 0;
  recAttr.wTable              := coTtnDoc;
  recAttr.AttrVal[1]          :=  âà1_ââ¨;
  recAttr.AttrVal[2]          :=  âà2_ââ¨;
  recAttr.AttrVal[3]          :=  âà3_ââ¨;
  recAttr.AttrVal[4]          :=  âà4_ââ¨;
  recAttr.AttrVal[5]          :=  âà5_ââ¨;
  recAttr.AttrVal[6]          :=  âà6_ââ¨;
  recAttr.AttrVal[7]          :=  âà7_ââ¨;
  recAttr.AttrVal[8]          :=  âà8_ââ¨;
  recAttr.AttrVal[9]          :=  âà9_ââ¨;
  recAttr.AttrVal[10]         :=  âà10_ââ¨;

  MemTblSopr.MPrnSoprAttr.Buffer := recAttr;

  MemTblSopr.Insert Current MPrnSoprAttr;

//------------------------------------------------------------------------------
! ä®à¬¨à®¢ ­¨¥ MPrnSoprOrg
! ®áâ ¢é¨ª - 1
  ClearAdvRecord(recOrg);
  recOrg.KatSoprNRec         := recNakl.KatSoprNRec;
  recOrg.SpSoprNRec          := 0;
  recOrg.PrOrg               := 1;
  recOrg.KatOrg_Name         := ®áâ ¢é¨ª;
  recOrg.KatOrg_TipOrg       := ®áâ ¢é¨ª®¤;
  recOrg.KatOrg_Addr         := ®áâ ¢é¨ª_¤à¥á;
  recOrg.KatOrg_OKPO         := ®áâ ¢é¨ª_;
  recOrg.KatOrg_OKONH        := ®áâ ¢é¨ª_;
  recOrg.KatOrg_TEL          := ®áâ ¢é¨ª_;
  recOrg.KatOrg_CONTAKT      := ®áâ ¢é¨ª_®­â­ä;
  recOrg.KatOrg_EMAIL        := ®áâ ¢é¨ª_Email;
  recOrg.KatOrg_OKATO        := ®áâ ¢é¨ª_OKATO;
  recOrg.KatOrg_KBK          := ®áâ ¢é¨ª_KBK;
  recOrg.KatOrg_OGRN         := ®áâ ¢é¨ª_OGRN;
  recOrg.KatOrg_REGNO        := ®áâ ¢é¨ª_¥£®¬_¢_;
  recOrg.KatOrg_REGNOS       := ®áâ ¢é¨ª_¥£®¬_âà å®¢ â¥«ï;
  recOrg.KatOrg_INSNA        := ®áâ ¢é¨ª_à£ ­_á¯®«­_« áâ¨;
  recOrg.FormSobs_Name       := ®áâ ¢é¨ª_®à¬ _®¡áâ¢¥­­®áâ¨;
  recOrg.FormSobs_VidD       := ®áâ ¢é¨ª_¨¤_¥ïâ¥«ì­®áâ¨;
  recOrg.KatState_KOD        := ®áâ ¢é¨ª__;
  recOrg.KatState_Name       := ®áâ ¢é¨ª__;
  recOrg.KatState_IsNal      := ®áâ ¢é¨ª__;
  recOrg.KatCity_KOD         := ®áâ ¢é¨ª__;
  recOrg.KatCity_Name        := ®áâ ¢é¨ª__;
  recOrg.KatCity_TEL         := ®áâ ¢é¨ª__;
  recOrg.KatStateS_KOD       := ®áâ ¢é¨ª___;
  recOrg.KatStateS_Name      := ®áâ ¢é¨ª___;
  recOrg.KatStateS_IsNal     := ®áâ ¢é¨ª___;
  recOrg.KatOrg_CorpoIn      := ®áâ ¢é¨ª_;
  recOrg.KatOrg_UNN          := ®áâ ¢é¨ª;
  recOrg.KatOrg_KODPLAT      := ®áâ ¢é¨ª;
  recOrg.KatB_Name           := ®áâ ¢é¨ª__¬ï;
  recOrg.KatB_Remark         := ®áâ ¢é¨ª__®¬¥­â à¨©;
  recOrg.KatB_Addr           := ®áâ ¢é¨ª__¤à¥á;
  recOrg.KatB_MFO1           := ®áâ ¢é¨ª__ä®;
  recOrg.KatB_MFO2           := ®áâ ¢é¨ª__ªæ;
  recOrg.KatB_Schet1         := ®áâ ¢é¨ª__ç¥â;
  recOrg.KatB_Schet2         := ®áâ ¢é¨ª__ç¥â_ªæ;
  recOrg.KatB_Schet3         := ®áâ ¢é¨ª__ç¥â_« â;
  recOrg.KatB_TipSchet       := ®áâ ¢é¨ª__¨¯_ç¥â ;
  recOrg.KatB_Aktiv          := ®áâ ¢é¨ª__¨¤_ç¥â ;
  recOrg.KatOrg_UrAddr       := ®áâ ¢é¨ª_à¤à¥á;

  MemTblSopr.MPrnSoprOrg.Buffer := recOrg;

  MemTblSopr.Insert Current MPrnSoprOrg;

//******************************************************************************
! àã§®®â¯à ¢¨â¥«ì - 2
  ClearAdvRecord(recOrg);
  recOrg.KatSoprNRec         := recNakl.KatSoprNRec;
  recOrg.SpSoprNRec          := 0;
  recOrg.PrOrg               := 2;
  recOrg.KatOrg_Name         := àã§®®â¯à ¢¨â¥«ì;
  recOrg.KatOrg_TipOrg       := àã§®®â¯à ¢¨â¥«ì®¤;
  recOrg.KatOrg_Addr         := àã§®®â¯à ¢¨â¥«ì_¤à¥á;
  recOrg.KatOrg_OKPO         := àã§®®â¯à ¢¨â¥«ì_;
  recOrg.KatOrg_OKONH        := àã§®®â¯à ¢¨â¥«ì_;
  recOrg.KatOrg_TEL          := àã§®®â¯à ¢¨â¥«ì_;
  recOrg.KatOrg_CONTAKT      := àã§®®â¯à ¢¨â¥«ì_®­â­ä;
  recOrg.KatOrg_EMAIL        := àã§®®â¯à ¢¨â¥«ì_Email;
  recOrg.KatOrg_OKATO        := àã§®®â¯à ¢¨â¥«ì_OKATO;
  recOrg.KatOrg_KBK          := àã§®®â¯à ¢¨â¥«ì_KBK;
  recOrg.KatOrg_OGRN         := àã§®®â¯à ¢¨â¥«ì_OGRN;
  recOrg.KatOrg_REGNO        := àã§®®â¯à ¢¨â¥«ì_¥£®¬_¢_;
  recOrg.KatOrg_REGNOS       := àã§®®â¯à ¢¨â¥«ì_¥£®¬_âà å®¢ â¥«ï;
  recOrg.KatOrg_INSNA        := àã§®®â¯à ¢¨â¥«ì_à£ ­_á¯®«­_« áâ¨;
  recOrg.FormSobs_Name       := àã§®®â¯à ¢¨â¥«ì_®à¬ _®¡áâ¢¥­­®áâ¨;
  recOrg.FormSobs_VidD       := àã§®®â¯à ¢¨â¥«ì_¨¤_¥ïâ¥«ì­®áâ¨;
  recOrg.KatState_KOD        := àã§®®â¯à ¢¨â¥«ì__;
  recOrg.KatState_Name       := àã§®®â¯à ¢¨â¥«ì__;
  recOrg.KatState_IsNal      := àã§®®â¯à ¢¨â¥«ì__;
  recOrg.KatCity_KOD         := àã§®®â¯à ¢¨â¥«ì__;
  recOrg.KatCity_Name        := àã§®®â¯à ¢¨â¥«ì__;
  recOrg.KatCity_TEL         := àã§®®â¯à ¢¨â¥«ì__;
  recOrg.KatStateS_KOD       := àã§®®â¯à ¢¨â¥«ì___;
  recOrg.KatStateS_Name      := àã§®®â¯à ¢¨â¥«ì___;
  recOrg.KatStateS_IsNal     := àã§®®â¯à ¢¨â¥«ì___;
  recOrg.KatOrg_CorpoIn      := àã§®®â¯à ¢¨â¥«ì_;
  recOrg.KatOrg_UNN          := oPrnSoprFun.GetOrgUNN(àã§®®â¯à ¢¨â¥«ì, àã§®®â¯à ¢¨â¥«ì, ®áâ ¢é¨ª);
  recOrg.KatOrg_KODPLAT      := àã§®®â¯à ¢¨â¥«ì;
  recOrg.KatB_Name           := àã§®®â¯à ¢¨â¥«ì__¬ï;
  recOrg.KatB_Remark         := àã§®®â¯à ¢¨â¥«ì__®¬¥­â à¨©;
  recOrg.KatB_Addr           := àã§®®â¯à ¢¨â¥«ì__¤à¥á;
  recOrg.KatB_MFO1           := àã§®®â¯à ¢¨â¥«ì__ä®;
  recOrg.KatB_MFO2           := àã§®®â¯à ¢¨â¥«ì__ªæ;
  recOrg.KatB_Schet1         := àã§®®â¯à ¢¨â¥«ì__ç¥â;
  recOrg.KatB_Schet2         := àã§®®â¯à ¢¨â¥«ì__ç¥â_ªæ;
  recOrg.KatB_Schet3         := àã§®®â¯à ¢¨â¥«ì__ç¥â_« â;
  recOrg.KatB_TipSchet       := àã§®®â¯à ¢¨â¥«ì__¨¯_ç¥â ;
  recOrg.KatB_Aktiv          := àã§®®â¯à ¢¨â¥«ì__¨¤_ç¥â ;
  recOrg.KatOrg_UrAddr       := àã§®®â¯à ¢¨â¥«ì_à¤à¥á;

  MemTblSopr.MPrnSoprOrg.Buffer := recOrg;

  MemTblSopr.Insert Current MPrnSoprOrg;

//******************************************************************************
! àã§®¯®«ãç â¥«ì - 3
  ClearAdvRecord(recOrg);
  recOrg.KatSoprNRec         := recNakl.KatSoprNRec;
  recOrg.SpSoprNRec          := 0;
  recOrg.PrOrg               := 3;
/* lapushkovdv
 âãâ ¬¥­ï¥¬ ­ ¨¬¥­®¢ ­¨¥,  ¤à¥á ¨  ¨ ¢ FR ¨§¬¥­¨¬ ­ ¨¬¥­®¢ ­¨¥ £àã§®¯®«ãç â¥«ï ­  grpol.name ¨  ¤à¥á ­  grpol.ur_addr
 ­ ç «  § ¯®«­¨¬ áâ ­¤ àâ®¬,   ¯®â®¬ ¢ìîå®©
*/

  recOrg.KatOrg_Name         := oPrnSoprFun.GetOrgFullName(­ ª« ¤­ ï_­à¥ª, 2, 0); //àã§®¯®«ãç â¥«ì; âãâ áâ ¢¨¬ áà §ã ª ª ¢ ª®¤¥ ¤ «¥¥ ¡ã¤¥â oPrnSoprFun.GetOrgFullName(fr_dochead.KatSoprNRec, 2, 0);
  recOrg.KatOrg_KODPLAT      := àã§®¯®«ãç â¥«ì;

  recOrg.KatOrg_UrAddr       := oPrnSoprFun.GetAddr(_ã­ªâ_¤à¥á, _ã­ªâ_¬ï, àã§®¯®«ãç â¥«ì_¤à¥á);//àã§®¯®«ãç â¥«ì_à¤à¥á; ¬¥­ï¥¬ â ª, çâ®¡ë á ãç¥â®¬ ­ áâà®©ª¨  ¤à¥á à §£àã§ª¨ ¨§ ¯ã­ªâ  à §£àã§ª¨

 if(vMarshrut.getfirst TTNDOC = tsOK)
 if(vMarshrut.getfirst MARPUNKT = tsOK)
 if(vMarshrut.getfirst MARREL = tsOK)
  {
    recOrg.KatOrg_Name    := if(vMarshrut.MARREL.NAME    <> '', vMarshrut.MARREL.NAME   , recOrg.KatOrg_Name  ); //- ­ ¨¬¥­®¢ ­¨¥ ¨§ ¬ àèàãâ 
    recOrg.KatOrg_KODPLAT := if(vMarshrut.MARREL.NOMLICH <> '', vMarshrut.MARREL.NOMLICH, recOrg.KatOrg_KODPLAT); //-  ¨§ ¬ àèàãâ 
    if(vMarshrut.getfirst MARAVT = tsOK)
     {
      recOrg.KatOrg_UrAddr := if(vMarshrut.MARAVT.NPADDR <> '', vMarshrut.MARAVT.NPADDR, recOrg.KatOrg_UrAddr); //-  ¤à¥á ¨§ ¬ àèàãâ 

     }
  }
  if SubStr(recOrg.KatOrg_UrAddr,length(recOrg.KatOrg_UrAddr)-1,1) = ','
    then recOrg.KatOrg_UrAddr := SubStr(recOrg.KatOrg_UrAddr,1,length(recOrg.KatOrg_UrAddr)-1) ;

  recOrg.KatOrg_UrAddr := recOrg.KatOrg_UrAddr + '   ';

  recOrg.KatOrg_Addr         := àã§®¯®«ãç â¥«ì_¤à¥á;
  recOrg.KatOrg_TipOrg       := àã§®¯®«ãç â¥«ì®¤;
  recOrg.KatOrg_OKPO         := àã§®¯®«ãç â¥«ì_;
  recOrg.KatOrg_OKONH        := àã§®¯®«ãç â¥«ì_;
  recOrg.KatOrg_TEL          := àã§®¯®«ãç â¥«ì_;
  recOrg.KatOrg_CONTAKT      := àã§®¯®«ãç â¥«ì_®­â­ä;
  recOrg.KatOrg_EMAIL        := àã§®¯®«ãç â¥«ì_Email;
  recOrg.KatOrg_OKATO        := àã§®¯®«ãç â¥«ì_OKATO;
  recOrg.KatOrg_KBK          := àã§®¯®«ãç â¥«ì_KBK;
  recOrg.KatOrg_OGRN         := àã§®¯®«ãç â¥«ì_OGRN;
  recOrg.KatOrg_REGNO        := àã§®¯®«ãç â¥«ì_¥£®¬_¢_;
  recOrg.KatOrg_REGNOS       := àã§®¯®«ãç â¥«ì_¥£®¬_âà å®¢ â¥«ï;
  recOrg.KatOrg_INSNA        := àã§®¯®«ãç â¥«ì_à£ ­_á¯®«­_« áâ¨;
  recOrg.FormSobs_Name       := àã§®¯®«ãç â¥«ì_®à¬ _®¡áâ¢¥­­®áâ¨;
  recOrg.FormSobs_VidD       := àã§®¯®«ãç â¥«ì_¨¤_¥ïâ¥«ì­®áâ¨;
  recOrg.KatState_KOD        := àã§®¯®«ãç â¥«ì__;
  recOrg.KatState_Name       := àã§®¯®«ãç â¥«ì__;
  recOrg.KatState_IsNal      := àã§®¯®«ãç â¥«ì__;
  recOrg.KatCity_KOD         := àã§®¯®«ãç â¥«ì__;
  recOrg.KatCity_Name        := àã§®¯®«ãç â¥«ì__;
  recOrg.KatCity_TEL         := àã§®¯®«ãç â¥«ì__;
  recOrg.KatStateS_KOD       := àã§®¯®«ãç â¥«ì___;
  recOrg.KatStateS_Name      := àã§®¯®«ãç â¥«ì___;
  recOrg.KatStateS_IsNal     := àã§®¯®«ãç â¥«ì___;
  recOrg.KatOrg_CorpoIn      := àã§®¯®«ãç â¥«ì_;
  recOrg.KatOrg_UNN          := oPrnSoprFun.GetOrgUNN(àã§®¯®«ãç â¥«ì, àã§®¯®«ãç â¥«ì, ®áâ ¢é¨ª);
  recOrg.KatB_Name           := àã§®¯®«ãç â¥«ì__¬ï;
  recOrg.KatB_Remark         := àã§®¯®«ãç â¥«ì__®¬¥­â à¨©;
  recOrg.KatB_Addr           := àã§®¯®«ãç â¥«ì__¤à¥á;
  recOrg.KatB_MFO1           := àã§®¯®«ãç â¥«ì__ä®;
  recOrg.KatB_MFO2           := àã§®¯®«ãç â¥«ì__ªæ;
  recOrg.KatB_Schet1         := àã§®¯®«ãç â¥«ì__ç¥â;
  recOrg.KatB_Schet2         := àã§®¯®«ãç â¥«ì__ç¥â_ªæ;
  recOrg.KatB_Schet3         := àã§®¯®«ãç â¥«ì__ç¥â_« â;
  recOrg.KatB_TipSchet       := àã§®¯®«ãç â¥«ì__¨¯_ç¥â ;
  recOrg.KatB_Aktiv          := àã§®¯®«ãç â¥«ì__¨¤_ç¥â ;

  #ifdef _DROGA
    #include mercury.frn
  #end

  MemTblSopr.MPrnSoprOrg.Buffer := recOrg;

  MemTblSopr.Insert Current MPrnSoprOrg;

//******************************************************************************
! ®«ãç â¥«ì - 4
  ClearAdvRecord(recOrg);
  recOrg.KatSoprNRec         := recNakl.KatSoprNRec;
  recOrg.SpSoprNRec          := 0;
  recOrg.PrOrg               := 4;
  recOrg.KatOrg_Name         := ®«ãç â¥«ì;
  recOrg.KatOrg_TipOrg       := ®«ãç â¥«ì®¤;
  recOrg.KatOrg_Addr         := ®«ãç â¥«ì_¤à¥á;
  recOrg.KatOrg_OKPO         := ®«ãç â¥«ì_;
  recOrg.KatOrg_OKONH        := ®«ãç â¥«ì_;
  recOrg.KatOrg_TEL          := ®«ãç â¥«ì_;
  recOrg.KatOrg_CONTAKT      := ®«ãç â¥«ì_®­â­ä;
  recOrg.KatOrg_EMAIL        := ®«ãç â¥«ì_Email;
  recOrg.KatOrg_OKATO        := ®«ãç â¥«ì_OKATO;
  recOrg.KatOrg_KBK          := ®«ãç â¥«ì_KBK;
  recOrg.KatOrg_OGRN         := ®«ãç â¥«ì_OGRN;
  recOrg.KatOrg_REGNO        := ®«ãç â¥«ì_¥£®¬_¢_;
  recOrg.KatOrg_REGNOS       := ®«ãç â¥«ì_¥£®¬_âà å®¢ â¥«ï;
  recOrg.KatOrg_INSNA        := ®«ãç â¥«ì_à£ ­_á¯®«­_« áâ¨;
  recOrg.FormSobs_Name       := ®«ãç â¥«ì_®à¬ _®¡áâ¢¥­­®áâ¨;
  recOrg.FormSobs_VidD       := ®«ãç â¥«ì_¨¤_¥ïâ¥«ì­®áâ¨;
  recOrg.KatState_KOD        := ®«ãç â¥«ì__;
  recOrg.KatState_Name       := ®«ãç â¥«ì__;
  recOrg.KatState_IsNal      := ®«ãç â¥«ì__;
  recOrg.KatCity_KOD         := ®«ãç â¥«ì__;
  recOrg.KatCity_Name        := ®«ãç â¥«ì__;
  recOrg.KatCity_TEL         := ®«ãç â¥«ì__;
  recOrg.KatStateS_KOD       := ®«ãç â¥«ì___;
  recOrg.KatStateS_Name      := ®«ãç â¥«ì___;
  recOrg.KatStateS_IsNal     := ®«ãç â¥«ì___;
  recOrg.KatOrg_CorpoIn      := ®«ãç â¥«ì_;
  recOrg.KatOrg_UNN          := ®«ãç â¥«ì;
  recOrg.KatOrg_KODPLAT      := ®«ãç â¥«ì;
  recOrg.KatB_Name           := ®«ãç â¥«ì__¬ï;
  recOrg.KatB_Remark         := ®«ãç â¥«ì__®¬¥­â à¨©;
  recOrg.KatB_Addr           := ®«ãç â¥«ì__¤à¥á;
  recOrg.KatB_MFO1           := ®«ãç â¥«ì__ä®;
  recOrg.KatB_MFO2           := ®«ãç â¥«ì__ªæ;
  recOrg.KatB_Schet1         := ®«ãç â¥«ì__ç¥â;
  recOrg.KatB_Schet2         := ®«ãç â¥«ì__ç¥â_ªæ;
  recOrg.KatB_Schet3         := ®«ãç â¥«ì__ç¥â_« â;
  recOrg.KatB_TipSchet       := ®«ãç â¥«ì__¨¯_ç¥â ;
  recOrg.KatB_Aktiv          := ®«ãç â¥«ì__¨¤_ç¥â ;
  recOrg.KatOrg_UrAddr       := ®«ãç â¥«ì_à¤à¥á;

  MemTblSopr.MPrnSoprOrg.Buffer := recOrg;

  MemTblSopr.Insert Current MPrnSoprOrg;

//******************************************************************************
! « â¥«ìé¨ª - 5
  ClearAdvRecord(recOrg);
  recOrg.KatSoprNRec         := recNakl.KatSoprNRec;
  recOrg.SpSoprNRec          := 0;
  recOrg.PrOrg               := 5;
  recOrg.KatOrg_Name         := « â¥«ìé¨ª;
  recOrg.KatOrg_TipOrg       := « â¥«ìé¨ª®¤;
  recOrg.KatOrg_Addr         := « â¥«ìé¨ª_¤à¥á;
  recOrg.KatOrg_OKPO         := « â¥«ìé¨ª_;
  recOrg.KatOrg_OKONH        := « â¥«ìé¨ª_;
  recOrg.KatOrg_TEL          := « â¥«ìé¨ª_;
  recOrg.KatOrg_CONTAKT      := « â¥«ìé¨ª_®­â­ä;
  recOrg.KatOrg_EMAIL        := « â¥«ìé¨ª_Email;
  recOrg.KatOrg_OKATO        := « â¥«ìé¨ª_OKATO;
  recOrg.KatOrg_KBK          := « â¥«ìé¨ª_KBK;
  recOrg.KatOrg_OGRN         := « â¥«ìé¨ª_OGRN;
  recOrg.KatOrg_REGNO        := « â¥«ìé¨ª_¥£®¬_¢_;
  recOrg.KatOrg_REGNOS       := « â¥«ìé¨ª_¥£®¬_âà å®¢ â¥«ï;
  recOrg.KatOrg_INSNA        := « â¥«ìé¨ª_à£ ­_á¯®«­_« áâ¨;
  recOrg.FormSobs_Name       := « â¥«ìé¨ª_®à¬ _®¡áâ¢¥­­®áâ¨;
  recOrg.FormSobs_VidD       := « â¥«ìé¨ª_¨¤_¥ïâ¥«ì­®áâ¨;
  recOrg.KatState_KOD        := « â¥«ìé¨ª__;
  recOrg.KatState_Name       := « â¥«ìé¨ª__;
  recOrg.KatState_IsNal      := « â¥«ìé¨ª__;
  recOrg.KatCity_KOD         := « â¥«ìé¨ª__;
  recOrg.KatCity_Name        := « â¥«ìé¨ª__;
  recOrg.KatCity_TEL         := « â¥«ìé¨ª__;
  recOrg.KatStateS_KOD       := « â¥«ìé¨ª___;
  recOrg.KatStateS_Name      := « â¥«ìé¨ª___;
  recOrg.KatStateS_IsNal     := « â¥«ìé¨ª___;
  recOrg.KatOrg_CorpoIn      := « â¥«ìé¨ª_;
  recOrg.KatOrg_UNN          := « â¥«ìé¨ª;
  recOrg.KatOrg_KODPLAT      := « â¥«ìé¨ª;
  recOrg.KatB_Name           := « â¥«ìé¨ª__¬ï;
  recOrg.KatB_Remark         := « â¥«ìé¨ª__®¬¥­â à¨©;
  recOrg.KatB_Addr           := « â¥«ìé¨ª__¤à¥á;
  recOrg.KatB_MFO1           := « â¥«ìé¨ª__ä®;
  recOrg.KatB_MFO2           := « â¥«ìé¨ª__ªæ;
  recOrg.KatB_Schet1         := « â¥«ìé¨ª__ç¥â;
  recOrg.KatB_Schet2         := « â¥«ìé¨ª__ç¥â_ªæ;
  recOrg.KatB_Schet3         := « â¥«ìé¨ª__ç¥â_« â;
  recOrg.KatB_TipSchet       := « â¥«ìé¨ª__¨¯_ç¥â ;
  recOrg.KatB_Aktiv          := « â¥«ìé¨ª__¨¤_ç¥â ;
  recOrg.KatOrg_UrAddr       := « â¥«ìé¨ª_à¤à¥á;

  MemTblSopr.MPrnSoprOrg.Buffer := recOrg;

  MemTblSopr.Insert Current MPrnSoprOrg;

//******************************************************************************
!  ª §ç¨ª_« â¥«ìé¨ª - 6
  ClearAdvRecord(recOrg);
  recOrg.KatSoprNRec         := recNakl.KatSoprNRec;
  recOrg.SpSoprNRec          := 0;
  recOrg.PrOrg               := 6;
  recOrg.KatOrg_Name         :=  ª §ç¨ª_« â¥«ìé¨ª;
  recOrg.KatOrg_TipOrg       :=  ª §ç¨ª_« â¥«ìé¨ª®¤;
  recOrg.KatOrg_Addr         :=  ª §ç¨ª_« â¥«ìé¨ª_¤à¥á;
  recOrg.KatOrg_OKPO         :=  ª §ç¨ª_« â¥«ìé¨ª_;
  recOrg.KatOrg_OKONH        :=  ª §ç¨ª_« â¥«ìé¨ª_;
  recOrg.KatOrg_TEL          :=  ª §ç¨ª_« â¥«ìé¨ª_;
  recOrg.KatOrg_CONTAKT      :=  ª §ç¨ª_« â¥«ìé¨ª_®­â­ä;
  recOrg.KatOrg_EMAIL        :=  ª §ç¨ª_« â¥«ìé¨ª_Email;
  recOrg.KatOrg_OKATO        :=  ª §ç¨ª_« â¥«ìé¨ª_OKATO;
  recOrg.KatOrg_KBK          :=  ª §ç¨ª_« â¥«ìé¨ª_KBK;
  recOrg.KatOrg_OGRN         :=  ª §ç¨ª_« â¥«ìé¨ª_OGRN;
  recOrg.KatOrg_REGNO        :=  ª §ç¨ª_« â¥«ìé¨ª_¥£®¬_¢_;
  recOrg.KatOrg_REGNOS       :=  ª §ç¨ª_« â¥«ìé¨ª_¥£®¬_âà å®¢ â¥«ï;
  recOrg.KatOrg_INSNA        :=  ª §ç¨ª_« â¥«ìé¨ª_à£ ­_á¯®«­_« áâ¨;
  recOrg.FormSobs_Name       :=  ª §ç¨ª_« â¥«ìé¨ª_®à¬ _®¡áâ¢¥­­®áâ¨;
  recOrg.FormSobs_VidD       :=  ª §ç¨ª_« â¥«ìé¨ª_¨¤_¥ïâ¥«ì­®áâ¨;
  recOrg.KatState_KOD        :=  ª §ç¨ª_« â¥«ìé¨ª__;
  recOrg.KatState_Name       :=  ª §ç¨ª_« â¥«ìé¨ª__;
  recOrg.KatState_IsNal      :=  ª §ç¨ª_« â¥«ìé¨ª__;
  recOrg.KatCity_KOD         :=  ª §ç¨ª_« â¥«ìé¨ª__;
  recOrg.KatCity_Name        :=  ª §ç¨ª_« â¥«ìé¨ª__;
  recOrg.KatCity_TEL         :=  ª §ç¨ª_« â¥«ìé¨ª__;
  recOrg.KatStateS_KOD       :=  ª §ç¨ª_« â¥«ìé¨ª___;
  recOrg.KatStateS_Name      :=  ª §ç¨ª_« â¥«ìé¨ª___;
  recOrg.KatStateS_IsNal     :=  ª §ç¨ª_« â¥«ìé¨ª___;
  recOrg.KatOrg_CorpoIn      :=  ª §ç¨ª_« â¥«ìé¨ª_;
  recOrg.KatOrg_UNN          := oPrnSoprFun.GetOrgUNN( ª §ç¨ª_« â¥«ìé¨ª,  ª §ç¨ª_« â¥«ìé¨ª, ®áâ ¢é¨ª);
  recOrg.KatOrg_KODPLAT      :=  ª §ç¨ª_« â¥«ìé¨ª;
  recOrg.KatB_Name           :=  ª §ç¨ª_« â¥«ìé¨ª;
  recOrg.KatB_Remark         :=  ª §ç¨ª_« â¥«ìé¨ª__®¬¥­â à¨©;
  recOrg.KatB_Addr           :=  ª §ç¨ª_« â¥«ìé¨ª__¤à¥á;
  recOrg.KatB_MFO1           :=  ª §ç¨ª_« â¥«ìé¨ª__ä®;
  recOrg.KatB_MFO2           :=  ª §ç¨ª_« â¥«ìé¨ª__ªæ;
  recOrg.KatB_Schet1         :=  ª §ç¨ª_« â¥«ìé¨ª__ç¥â;
  recOrg.KatB_Schet2         :=  ª §ç¨ª_« â¥«ìé¨ª__ç¥â_ªæ;
  recOrg.KatB_Schet3         :=  ª §ç¨ª_« â¥«ìé¨ª__ç¥â_« â;
  recOrg.KatB_TipSchet       :=  ª §ç¨ª_« â¥«ìé¨ª__¨¯_ç¥â ;
  recOrg.KatB_Aktiv          :=  ª §ç¨ª_« â¥«ìé¨ª__¨¤_ç¥â ;
  recOrg.KatOrg_UrAddr       :=  ª §ç¨ª_« â¥«ìé¨ª_à¤à¥á;

  MemTblSopr.MPrnSoprOrg.Buffer := recOrg;

  MemTblSopr.Insert Current MPrnSoprOrg;

//******************************************************************************
! _¢â®à£ - 7
  ClearAdvRecord(recOrg);
  recOrg.KatSoprNRec         := recNakl.KatSoprNRec;
  recOrg.SpSoprNRec          := 0;
  recOrg.PrOrg               := 7;
  recOrg.KatOrg_Name         := _¢â®à£_¬ï;
  recOrg.KatOrg_TipOrg       := _¢â®à£_¨¯;
  recOrg.KatOrg_Addr         := _¢â®à£_¤à¥á;
  recOrg.KatOrg_OKPO         := _¢â®à£_;
  recOrg.KatOrg_OKONH        := _¢â®à£_;
  recOrg.KatOrg_TEL          := _¢â®à£_;
  recOrg.KatOrg_CONTAKT      := _¢â®à£_®­â­ä;
  recOrg.KatOrg_EMAIL        := _¢â®à£_Email;
  recOrg.KatOrg_OKATO        := _¢â®à£_OKATO;
  recOrg.KatOrg_KBK          := _¢â®à£_KBK;
  recOrg.KatOrg_OGRN         := _¢â®à£_OGRN;
  recOrg.KatOrg_REGNO        := _¢â®à£_¥£®¬_¢_;
  recOrg.KatOrg_REGNOS       := _¢â®à£_¥£®¬_âà å®¢ â¥«ï;
  recOrg.KatOrg_INSNA        := _¢â®à£_à£ ­_á¯®«­_« áâ¨;
  recOrg.FormSobs_Name       := _¢â®à£_®à¬ _®¡áâ¢¥­­®áâ¨;
  recOrg.FormSobs_VidD       := _¢â®à£_¨¤_¥ïâ¥«ì­®áâ¨;
  recOrg.KatState_KOD        := _¢â®à£__;
  recOrg.KatState_Name       := _¢â®à£__;
  recOrg.KatState_IsNal      := _¢â®à£__;
  recOrg.KatCity_KOD         := _¢â®à£__;
  recOrg.KatCity_Name        := _¢â®à£__;
  recOrg.KatCity_TEL         := _¢â®à£__;
  recOrg.KatStateS_KOD       := _¢â®à£___;
  recOrg.KatStateS_Name      := _¢â®à£___;
  recOrg.KatStateS_IsNal     := _¢â®à£___;
  recOrg.KatOrg_CorpoIn      := _¢â®à£_;
  recOrg.KatOrg_UNN          := _¢â®à£_;
  recOrg.KatOrg_KODPLAT      := _¢â®à£_;
  recOrg.KatB_Name           := _¢â®à£__¬ï;
  recOrg.KatB_Remark         := _¢â®à£__®¬¬¥­â à¨©;
  recOrg.KatB_Addr           := _¢â®à£__¤à¥á;
  recOrg.KatB_MFO1           := _¢â®à£__ä®;
  recOrg.KatB_MFO2           := _¢â®à£__ªæ;
  recOrg.KatB_Schet1         := _¢â®à£__ç¥â;
  recOrg.KatB_Schet2         := _¢â®à£__ç¥â_ªæ;
  recOrg.KatB_Schet3         := _¢â®à£__ç¥â_« â;
  recOrg.KatB_TipSchet       := _¢â®à£__¨¯_ç¥â ;
  recOrg.KatB_Aktiv          := _¢â®à£__¨¤_ç¥â ;
  recOrg.KatOrg_UrAddr       := '';

  MemTblSopr.MPrnSoprOrg.Buffer := recOrg;

  MemTblSopr.Insert Current MPrnSoprOrg;

//******************************************************************************
! _ã­ªâ_à£ - 8
  ClearAdvRecord(recOrg);
  recOrg.KatSoprNRec         := recNakl.KatSoprNRec;
  recOrg.SpSoprNRec          := 0;
  recOrg.PrOrg               := 8;
  recOrg.KatOrg_Name         := _ã­ªâ_à£_¬ï;
  recOrg.KatOrg_TipOrg       := _ã­ªâ_à£_¨¯;
  recOrg.KatOrg_Addr         := _ã­ªâ_à£_¤à¥á;
  recOrg.KatOrg_OKPO         := _ã­ªâ_à£_;
  recOrg.KatOrg_OKONH        := _ã­ªâ_à£_;
  recOrg.KatOrg_TEL          := _ã­ªâ_à£_;
  recOrg.KatOrg_CONTAKT      := _ã­ªâ_à£_®­â­ä;
  recOrg.KatOrg_EMAIL        := _ã­ªâ_à£_Email;
  recOrg.KatOrg_OKATO        := _ã­ªâ_à£_OKATO;
  recOrg.KatOrg_KBK          := _ã­ªâ_à£_KBK;
  recOrg.KatOrg_OGRN         := _ã­ªâ_à£_OGRN;
  recOrg.KatOrg_REGNO        := _ã­ªâ_à£_¥£®¬_¢_;
  recOrg.KatOrg_REGNOS       := _ã­ªâ_à£_¥£®¬_âà å®¢ â¥«ï;
  recOrg.KatOrg_INSNA        := _ã­ªâ_à£_à£ ­_á¯®«­_« áâ¨;
  recOrg.FormSobs_Name       := _ã­ªâ_à£_®à¬ _®¡áâ¢¥­­®áâ¨;
  recOrg.FormSobs_VidD       := _ã­ªâ_à£_¨¤_¥ïâ¥«ì­®áâ¨;
  recOrg.KatState_KOD        := _ã­ªâ_à£__;
  recOrg.KatState_Name       := _ã­ªâ_à£__;
  recOrg.KatState_IsNal      := _ã­ªâ_à£__;
  recOrg.KatCity_KOD         := _ã­ªâ_à£__;
  recOrg.KatCity_Name        := _ã­ªâ_à£__;
  recOrg.KatCity_TEL         := _ã­ªâ_à£__;
  recOrg.KatStateS_KOD       := _ã­ªâ_à£___;
  recOrg.KatStateS_Name      := _ã­ªâ_à£___;
  recOrg.KatStateS_IsNal     := _ã­ªâ_à£___;
  recOrg.KatOrg_CorpoIn      := _ã­ªâ_à£_;
  recOrg.KatOrg_UNN          := _ã­ªâ_à£_;
  recOrg.KatOrg_KODPLAT      := _ã­ªâ_à£_;
  recOrg.KatB_Name           := _ã­ªâ_à£__¬ï;
  recOrg.KatB_Remark         := _ã­ªâ_à£__®¬¬¥­â à¨©;
  recOrg.KatB_Addr           := _ã­ªâ_à£__¤à¥á;
  recOrg.KatB_MFO1           := _ã­ªâ_à£__ä®;
  recOrg.KatB_MFO2           := _ã­ªâ_à£__ªæ;
  recOrg.KatB_Schet1         := _ã­ªâ_à£__ç¥â;
  recOrg.KatB_Schet2         := _ã­ªâ_à£__ç¥â_ªæ;
  recOrg.KatB_Schet3         := _ã­ªâ_à£__ç¥â_« â;
  recOrg.KatB_TipSchet       := _ã­ªâ_à£__¨¯_ç¥â ;
  recOrg.KatB_Aktiv          := _ã­ªâ_à£__¨¤_ç¥â ;
  recOrg.KatOrg_UrAddr       := '';

  MemTblSopr.MPrnSoprOrg.Buffer := recOrg;

  MemTblSopr.Insert Current MPrnSoprOrg;

//******************************************************************************
! _ã­ªâ_à£ - 9
  ClearAdvRecord(recOrg);
  recOrg.KatSoprNRec         := recNakl.KatSoprNRec;
  recOrg.SpSoprNRec          := 0;
  recOrg.PrOrg               := 9;
  recOrg.KatOrg_Name         := _ã­ªâ_à£_¬ï;
  recOrg.KatOrg_TipOrg       := _ã­ªâ_à£_¨¯;
  recOrg.KatOrg_Addr         := _ã­ªâ_à£_¤à¥á;
  recOrg.KatOrg_OKPO         := _ã­ªâ_à£_;
  recOrg.KatOrg_OKONH        := _ã­ªâ_à£_;
  recOrg.KatOrg_TEL          := _ã­ªâ_à£_;
  recOrg.KatOrg_CONTAKT      := _ã­ªâ_à£_®­â­ä;
  recOrg.KatOrg_EMAIL        := _ã­ªâ_à£_Email;
  recOrg.KatOrg_OKATO        := _ã­ªâ_à£_OKATO;
  recOrg.KatOrg_KBK          := _ã­ªâ_à£_KBK;
  recOrg.KatOrg_OGRN         := _ã­ªâ_à£_OGRN;
  recOrg.KatOrg_REGNO        := _ã­ªâ_à£_¥£®¬_¢_;
  recOrg.KatOrg_REGNOS       := _ã­ªâ_à£_¥£®¬_âà å®¢ â¥«ï;
  recOrg.KatOrg_INSNA        := _ã­ªâ_à£_à£ ­_á¯®«­_« áâ¨;
  recOrg.FormSobs_Name       := _ã­ªâ_à£_®à¬ _®¡áâ¢¥­­®áâ¨;
  recOrg.FormSobs_VidD       := _ã­ªâ_à£_¨¤_¥ïâ¥«ì­®áâ¨;
  recOrg.KatState_KOD        := _ã­ªâ_à£__;
  recOrg.KatState_Name       := _ã­ªâ_à£__;
  recOrg.KatState_IsNal      := _ã­ªâ_à£__;
  recOrg.KatCity_KOD         := _ã­ªâ_à£__;
  recOrg.KatCity_Name        := _ã­ªâ_à£__;
  recOrg.KatCity_TEL         := _ã­ªâ_à£__;
  recOrg.KatStateS_KOD       := _ã­ªâ_à£___;
  recOrg.KatStateS_Name      := _ã­ªâ_à£___;
  recOrg.KatStateS_IsNal     := _ã­ªâ_à£___;
  recOrg.KatOrg_CorpoIn      := _ã­ªâ_à£_;
  recOrg.KatOrg_UNN          := _ã­ªâ_à£_;
  recOrg.KatOrg_KODPLAT      := _ã­ªâ_à£_;
  recOrg.KatB_Name           := _ã­ªâ_à£__¬ï;
  recOrg.KatB_Remark         := _ã­ªâ_à£__®¬¬¥­â à¨©;
  recOrg.KatB_Addr           := _ã­ªâ_à£__¤à¥á;
  recOrg.KatB_MFO1           := _ã­ªâ_à£__ä®;
  recOrg.KatB_MFO2           := _ã­ªâ_à£__ªæ;
  recOrg.KatB_Schet1         := _ã­ªâ_à£__ç¥â;
  recOrg.KatB_Schet2         := _ã­ªâ_à£__ç¥â_ªæ;
  recOrg.KatB_Schet3         := _ã­ªâ_à£__ç¥â_« â;
  recOrg.KatB_TipSchet       := _ã­ªâ_à£__¨¯_ç¥â ;
  recOrg.KatB_Aktiv          := _ã­ªâ_à£__¨¤_ç¥â ;
  recOrg.KatOrg_UrAddr       := '';

  MemTblSopr.MPrnSoprOrg.Buffer := recOrg;

  MemTblSopr.Insert Current MPrnSoprOrg;
end.
.if tovn01
.end
.if tovn02
.end
.{
#include ttn_fast.frn
.begin
//******************************************************************************
! ä®à¬¨à®¢ ­¨¥ MPrnSoprSpNakl
! ¯¥æ¨ä¨ª æ¨ï
  ClearAdvRecord(recSpec);
  recSpec.KatSoprNRec         := recNakl.KatSoprNRec;
  recSpec.SpSoprNRec          := á¯¥æ¨ä¨ª æ¨ï_­à¥ª;
  recSpec.PrMc                := à¨§­ ª_;
  recSpec.Npp                 := ®¬¥à_¯¯;
  recSpec.NVEND               := ;
  recSpec.ResName             := ¥áãàá_åà ­¥­¨ï;
  recSpec.GroupKod            := ª®¤_£àã¯¯ë;
  recSpec.GroupName           := ­ §¢ ­¨¥_£àã¯¯ë;
#ifdef _TOVN_DEI
  recSpec.MCFullName          := « §¢ ­¨¥;
#end
  recSpec.McKod               := ®¤;
  recSpec.MCName              :=  §¢ ­¨¥;
  recSpec.DopInfo             := ®¯®«­¨â¥«ì­ ï_¨­ä®à¬ æ¨ï;
  recSpec.GrouzKod            := ®¤àã§ ;
  recSpec.GrouzClass          := « ááàã§ ;
  recSpec.StroyObj            := ¡ê¥ªâ_áâà®¨â¥«ìáâ¢ ;
  recSpec.StZatr              := â âìï_§ âà â;
  recSpec.ExciseMark          :=  ªæ¨§­ë¥_¬ àª¨;
  recSpec.CustomSolution      := â ¬®¦¥­­ë¥_à §à¥è¥­¨ï;
  recSpec.CountryIn           := áâà ­ _¢¢®§ ;
  recSpec.GigienReg           := ã¤®áâ_£®á£¨£¨¥­_à¥£¨áâà æ¨¨;
  recSpec.RNakl               := P­ ª« ¤­ ï;
  recSpec.Descr               := ¥áªà¨¯â®à_à­ ª« ¤­®©;
  recSpec.RDescr              := ­ ª« ¤­ ï_á_¤¥áªà¨¯â®à®¬;
  recSpec.KoefGodn            := ®íää¨æ¨¥­â_£®¤­®áâ¨;
  recSpec.VhodProc            := å®¤_¯à®æ¥­â;
  recSpec.IshodProc           := áå®¤_¯à®æ¥­â;
  recSpec.StrSkidka           := ª¨¤ª _ ¤¡ ¢ª _câà®ª ;
  recSpec.ZavCena             :=  ¢®¤_¥­ ;
  recSpec.ZavCenaOtp          :=  ¢®¤_¥­ _â¯;
  recSpec.ZavCenaNak          :=  ¢®¤_¥­  ª;
  recSpec.ZavCenaNakOtp       :=  ¢®¤_¥­  ª_â¯;
  recSpec.ZavCenaVal          :=  ¢®¤_¥­  «;
  recSpec.ZavCenaValOtp       :=  ¢®¤_¥­  «_â¯;
  recSpec.GrMKol              := __;
  recSpec.GrMEd               := ___;
  recSpec.GrMKoef             := __;
  recSpec.KolOneGrM           := KolOneGrM;
  recSpec.McPrim              := KatMC_¯à¨¬¥ç ­¨¥;
  recSpec.McNote              := à¨¬;
  recSpec.OtpEd               := â¯¤;
  recSpec.OtpEdKod            := â¯¤_®¤;
  recSpec.MaxProcNac          :=  ªáà®æ æ¥­ª¨;
  recSpec.MassaMC             :=  áá ;
  recSpec.MassaTar            :=  áá  àë;
  recSpec.MCVolume            := ¡ê¥¬;
  recSpec.MCSizeX             := SizeX;
  recSpec.MCSizeY             := SizeY;
  recSpec.MCSizeZ             := SizeZ;
  recSpec.UthEd               := ç¤;
  recSpec.KolDO               := ®«;
  recSpec.KolF                := ®«;
  recSpec.StrKolF             := áâà_®«;
  recSpec.KolOpl              := ®«¯«;
  recSpec.ProcUb              := à®æ¡;
  recSpec.KolUth              := ®«ç;
  recSpec.KolVes              := ®«¥á;
  recSpec.KolOb               := ®«¡;
  recSpec.KolBrak             := à ª;
  recSpec.KolBoy              := ®©;
  recSpec.CNak                :=  ª;
  recSpec.CNac                :=  æ;
  recSpec.CVal                :=  «;
  recSpec.CNakUth             :=  ªç;
  recSpec.CNacUth             :=  æç;
  recSpec.CValUth             :=  «ç;
  recSpec.StNak               := â ª;
  recSpec.StOpl               := â¯«;
  recSpec.StNac               := â æ;
  recSpec.StVal               := â «;
  recSpec.Nalog1              :=  «®£1;
  recSpec.Nalog1V             :=  «®£1;
  recSpec.Nalog2              :=  «®£2;
  recSpec.Nalog2V             :=  «®£2;
  recSpec.Nalog3              :=  «®£3;
  recSpec.Nalog3V             :=  «®£3;
  recSpec.Nalog4              :=  «®£4;
  recSpec.Nalog4V             :=  «®£4;
  recSpec.Nalog5              :=  «®£5;
  recSpec.Nalog5V             :=  «®£5;
  recSpec.Nalog6              :=  «®£6;
  recSpec.Nalog6V             :=  «®£6;
  recSpec.NalogOth            :=  «®£_¯à®ç¨¥_;
  recSpec.NalogOthV           :=  «®£_¯à®ç¨¥_;
  recSpec.CNakBN              :=  ª;
  recSpec.CNacBN              :=  æ;
  recSpec.CValBN              :=  «;
  recSpec.CNakBNUth           :=  ªç;
  recSpec.CNacBNUth           :=  æç;
  recSpec.CValBNUth           :=  «ç;
  recSpec.CNakSN              :=  ª;
  recSpec.CNacSN              :=  æ;
  recSpec.CValSN              :=  «;
  recSpec.CNakSNUth           :=  ªç;
  recSpec.CNacSNUth           :=  æç;
  recSpec.CValSNUth           :=  «ç;
  recSpec.PrNDS               := à¨§­ ª;
  recSpec.StNDS               := áâ ¢ª _¯¥à¢®£®_­ «®£ ;
  recSpec.CNDSNak             :=  ª;
  recSpec.CExciseNak          := ªæ¨§ ª;
  recSpec.CProdNak            := à®¤ ª;
  recSpec.CNalNak             :=  ª;
  recSpec.CNDSNac             :=  æ;
  recSpec.CExciseNac          := ªæ¨§ æ;
  recSpec.CNProdNac           := à®¤ æ;
  recSpec.CNalNac             :=  æ;
  recSpec.CNDSVal             :=  «;
  recSpec.CExiseVal           := ªæ¨§ «;
  recSpec.CNProdVal           := à®¤ «;
  recSpec.CNalVal             :=  «;
  recSpec.StNakBN             := â ª;
  recSpec.StNacBN0            := â æ0;
  recSpec.StValBN             := â «;
  recSpec.StNakSN             := â ª;
  recSpec.StNacSN0            := â æ0;
  recSpec.StValSN             := â «;
  recSpec.StNDSNak            := â ª;
  recSpec.StExciseNak         := âªæ¨§ ª;
  recSpec.StNProdNak          := âà®¤ ª;
  recSpec.StNalNak            := â ª;
  recSpec.StNDSNac0           := â æ0;
  recSpec.StExciseNac         := âªæ¨§ æ;
  recSpec.StNProdNac          := âà®¤ æ;
  recSpec.StNalNac            := â æ;
  recSpec.StNDSVal            := â «;
  recSpec.StExciseVal         := âªæ¨§ «;
  recSpec.StNProdVal          := âà®¤ «;
  recSpec.StNalVal            := â «;
  recSpec.CenaDO              := ¥­ ;
  recSpec.SummaDO             := ã¬¬ ;
  recSpec.Kol_DO              := ®«_;
  recSpec.Kol_DOOpl           := ®«__¯«;
  recSpec.ProcNDS             := à;
  recSpec.ProcExcise          := àªæ¨§;
  recSpec.ProcNProd           := àà®¤;
  recSpec.ProcNal             := à;
  recSpec.Volume              := ¡ê¥¬;
  recSpec.Plotn               := «®â­®áâì;
  recSpec.Temper              := ¥¬¯¥à âãà ;
  recSpec.GroupParty          := àã¯¯ _ àâ¨¨;
  recSpec.PartyName           :=  àâ¨ï;
  recSpec.PartyPrim           := KatParty_¯à¨¬¥ç ­¨¥;
  recSpec.PartyZavCena        := ¥­ _¨§£®â®¢¨â¥«ï æ;
  recSpec.PartyZavCenaV       := ¥­ _¨§£®â®¢¨â¥«ï « ª;
  recSpec.GrouzDoc            := á_£àã§®¬_á«¥¤_¤®ª;
  recSpec.GrouzDocDop         := á_£àã§®¬_á«¥¤_¤®ª_¤®¯;
  recSpec.GrouzDocDop2        := á_£àã§®¬_á«¥¤_¤®ª_¤®¯2;
  recSpec.CertNomer           := ®¬¥à_á¥àâ¨ä¨ª â ;
  recSpec.CertDate            :=  â _á¥àâ¨ä¨ª â ;
  recSpec.CertWho             := â®¢ë¤ «_á¥àâ¨ä¨ª â;
  recSpec.PartyOrg            := à®¨§¢®¤¨â¥«ì_¯ àâ¨¨;
  recSpec.PartyCountry        := âà ­ _¯à®¨§¢®¤¨â¥«ï_¯ àâ¨¨;
  recSpec.PartyAttr           := âà¨¡ãâ_ àâ¨¨_¨á«®;
  recSpec.PartyDateAnaliz     :=  â _ ­ «¨§ ;
  recSpec.PartyNumAnaliz      := ®¬¥à_ ­ «¨§ ;
  recSpec.PartyVal            :=  «îâ _¯ àâ¨¨;
  recSpec.PartyKodVal         := ®¤ «îâë_¯ àâ¨¨;
  recSpec.PartySrokGodn       := à®ª_£®¤­®áâ¨;
  recSpec.PartyTimeCreate     := à¥¬ï_á®§¤ ­¨ï;
  recSpec.PartyTimeGodn       := à¥¬ï_£®¤­®áâ¨;
  recSpec.CenaOrd             := ¥­ _®à¤¥à _­ æ;
  recSpec.CenaOrdVal          := ¥­ _®à¤¥à _¢ «;
  recSpec.AltEd               := «ìâ¥à­ â¨¢­ ï_¥¤¨­¨æ _­ §¢ ­¨¥;
  recSpec.AltEd2              := «ìâ¥à­ â¨¢­ ï_¥¤¨­¨æ _á®®â­®è¥­¨¥;
#ifdef _TOVN_DEI
  recSpec.DEIName             := _ ¨¬;
  recSpec.DEIKol              := _®«;
  recSpec.DEICena             := _¥­ ;
! ¥ç âì á¯¥æ¨ä¨ª æ¨¨ ¤«ï 
  recSpec.MCFullName2         := « §¢ ­¨¥2;
#end
  recSpec.MCName2             :=  §¢ ­¨¥2;
  recSpec.MCKod2              := ®¤2;
  recSpec.MCVolume2           := ¡ê¥¬2;
  recSpec.MCPlot2             := «®â­®áâì2;
  recSpec.KolF2               := ®«2;
  recSpec.KolBrak2            := à ª2;
  recSpec.KolBoy2             := ®©2;
  recSpec.CNac2               :=  æ2;
  recSpec.CNDSNac2            :=  æ2;
  recSpec.CNDSVal2            :=  «2;
  recSpec.ProcNDS2            := à2;
  recSpec.CExciseNac2         := ªæ¨§ æ2;
  recSpec.CExciseVal2         := ªæ¨§ «2;
  recSpec.ProcExise2          := àªæ¨§2;
  recSpec.CNProdNac2          := à®¤ æ2;
  recSpec.CNProdVal2          := à®¤ «2;
  recSpec.ProcNProd2          := àà®¤2;
  recSpec.StNac2              := â æ2;
  recSpec.StNavOpl2           := â æ¯«2;
  recSpec.StNacBN2            := â æ2;
  recSpec.StNacBNOpl2         := â æ¯«2;
  recSpec.StNacSN2            := â æC2;
  recSpec.StNacSNOpl2         := â æC¯«2;
  recSpec.StNalNac2           := â « æ2;
  recSpec.MassaMC2            :=  áá 2;
  recSpec.MassaTar2           :=  áá  àë2;
  recSpec.KolUth2             := ®«ç2;
  recSpec.KolOpl2             := ®«¯«2;
  recSpec.OtpEdAbbr2          := â¯¤¡¡à2;
  recSpec.SpOprVes2           := ¯®á®¡¯à¥á 2;
  recSpec.CertNomer2          := ®¬¥à_á¥àâ¨ä¨ª â 2;
  recSpec.CertDate2           :=  â _á¥àâ¨ä¨ª â 2;
  recSpec.CertWho2            := â®¢ë¤ «_á¥àâ¨ä¨ª â2;
  recSpec.GigienReg2          := ã¤®áâ_£®á£¨£¨¥­_à¥£¨áâà æ¨¨2;
  recSpec.CustomSolution2     := â ¬®¦¥­­ë¥_à §à¥è¥­¨ï2;
  recSpec.ExciseMarkNode      :=  ªæ¨§­ë¥_¬ àª¨_ã§¥«;
  recSpec.ExciseMark1         :=  ªæ¨§­ë¥_¬ àª¨1;
  recSpec.ExciseMark2         :=  ªæ¨§­ë¥_¬ àª¨2;
  recSpec.ExciseMark3         :=  ªæ¨§­ë¥_¬ àª¨3;
  recSpec.ExciseMark4         :=  ªæ¨§­ë¥_¬ àª¨4;
  recSpec.ExciseMark5         :=  ªæ¨§­ë¥_¬ àª¨5;
  recSpec.ExciseMark6         :=  ªæ¨§­ë¥_¬ àª¨6;
  recSpec.ExciseMark7         :=  ªæ¨§­ë¥_¬ àª¨7;
  recSpec.ExciseMark8         :=  ªæ¨§­ë¥_¬ àª¨8;
  recSpec.ExciseMark9         :=  ªæ¨§­ë¥_¬ àª¨9;
  recSpec.ExciseMark10        :=  ªæ¨§­ë¥_¬ àª¨10;
#ifdef _TOVN_DEI
  recSpec.DEIName2            := 2_ ¨¬;
  recSpec.DEIKol2             := 2_®«;
  recSpec.DEICena2            := 2_¥­ ;
#end
  recSpec.sPrim               := sPrimechanie;
  recSpec.sPrimV              := sPrimechanieV;

#ifdef _DROGA
#include certificate.frn
#end
#ifdef _DROGA
#include barcode2.frn
#end
  MemTblSopr.MPrnSoprSpNakl.Buffer := recSpec;
  MemTblSopr.Insert Current MPrnSoprSpNakl;

//------------------------------------------------------------------------------
! âà¨¡ãâë SpSopr
  ClearAdvRecord(recAttr);
  recAttr.KatSoprNRec         := 0;
  recAttr.SpSoprNRec          := recSpec.SpSoprNRec;
  recAttr.wTable              := coSpSopr;
  recAttr.AttrVal[1]          :=  âà1_á¯æ;
  recAttr.AttrVal[2]          :=  âà2_á¯æ;
  recAttr.AttrVal[3]          :=  âà3_á¯æ;
  recAttr.AttrVal[4]          :=  âà4_á¯æ;
  recAttr.AttrVal[5]          :=  âà5_á¯æ;
  recAttr.AttrVal[6]          :=  âà6_á¯æ;
  recAttr.AttrVal[7]          :=  âà7_á¯æ;
  recAttr.AttrVal[8]          :=  âà8_á¯æ;
  recAttr.AttrVal[9]          :=  âà9_á¯æ;
  recAttr.AttrVal[10]         :=  âà10_á¯æ;

  MemTblSopr.MPrnSoprAttr.Buffer := recAttr;
  MemTblSopr.Insert Current MPrnSoprAttr;

//------------------------------------------------------------------------------
! âà¨¡ãâë KatMc
  ClearAdvRecord(recAttr);
  recAttr.KatSoprNRec         := 0;
  recAttr.SpSoprNRec          := recSpec.SpSoprNRec;
  recAttr.wTable              := coKatMc;
  recAttr.AttrVal[1]          :=  âà1_;
  recAttr.AttrVal[2]          :=  âà2_;
  recAttr.AttrVal[3]          :=  âà3_;
  recAttr.AttrVal[4]          :=  âà4_;
  recAttr.AttrVal[5]          :=  âà5_;
  recAttr.AttrVal[6]          :=  âà6_;
  recAttr.AttrVal[7]          :=  âà7_;
  recAttr.AttrVal[8]          :=  âà8_;
  recAttr.AttrVal[9]          :=  âà9_;
  recAttr.AttrVal[10]         :=  âà10_;

  MemTblSopr.MPrnSoprAttr.Buffer := recAttr;

  MemTblSopr.Insert Current MPrnSoprAttr;


//------------------------------------------------------------------------------
! âà¨¡ãâë KatParty
  ClearAdvRecord(recAttr);

  recAttr.KatSoprNRec := 0;
  recAttr.SpSoprNRec  := recSpec.SpSoprNRec;
  recAttr.wTable      := coKatParty;
  recAttr.AttrVal[1]  :=  âà1_¯àâ;
  recAttr.AttrVal[2]  :=  âà2_¯àâ;
  recAttr.AttrVal[3]  :=  âà3_¯àâ;
  recAttr.AttrVal[4]  :=  âà4_¯àâ;
  recAttr.AttrVal[5]  :=  âà5_¯àâ;
  recAttr.AttrVal[6]  :=  âà6_¯àâ;
  recAttr.AttrVal[7]  :=  âà7_¯àâ;
  recAttr.AttrVal[8]  :=  âà8_¯àâ;
  recAttr.AttrVal[9]  :=  âà9_¯àâ;
  recAttr.AttrVal[10] :=  âà10_¯àâ;

  MemTblSopr.MPrnSoprAttr.Buffer := recAttr;

  MemTblSopr.Insert Current MPrnSoprAttr;

//------------------------------------------------------------------------------
!®à¬¨à®¢ ­¨¥ MPrnSoprSpTTI
  ClearAdvRecord(recTTISp);

  recTTISp.SpSoprNRec         := recSpec.SpSoprNRec;
  recTTISp.PunktRDateIn       := ¯_ã­ªâ_ â _;
  recTTISp.PunktRTimeIn       := ¯_ã­ªâ_à¥¬ï_;
  recTTISp.PunktRDateOut      := ¯_ã­ªâ_ â _®;
  recTTISp.PunktRTimeOut      := ¯_ã­ªâ_à¥¬ï_®;
  recTTISp.PunktRDopName      := ¯_ã­ªâ_®¯_¬ï;
  recTTISp.PunktRDopKol       := ¯_ã­ªâ_®¯_®«¨ç;
  recTTISp.PunktRDopTime      := ¯_ã­ªâ_®¯_à¥¬ï;
  recTTISp.PunktPDateIn       := ¯_ã­ªâ_ â _;
  recTTISp.PunktPTimeIn       := ¯_ã­ªâ_à¥¬ï_;
  recTTISp.PunktPDateOut      := ¯_ã­ªâ_ â _®;
  recTTISp.PunktPTimeOut      := ¯_ã­ªâ_à¥¬ï_®;
  recTTISp.PunktPDopName      := ¯_ã­ªâ_®¯_¬ï;
  recTTISp.PunktPDopKol       := ¯_ã­ªâ_®¯_®«¨ç;
  recTTISp.PunktPDopTime      := ¯_ã­ªâ_®¯_à¥¬ï;
  recTTISp.PunktRCountryNal   := ¯_®à¬ ®£àã§ª¨;
  recTTISp.PunktRSityKod      := ¯_®à¬  §£àã§ª¨;
  recTTISp.PunktRSityName     := ¯â­¤_¤®¤¢®áâ_¬ï;
  recTTISp.PunktRSityTel      := ¯â­¤_¤®¤¢®áâ_®¬¥à;
  recTTISp.PunktRSCountryKod  := ¯â­¤_¤¢¨â_®¬¥à;
  recTTISp.PunktRSCountryName := ¯â­¤_¤ à¨ä;
  recTTISp.PunktRSCountryNal  := ¯â­¤_¤ à¨ä_ «;
  recTTISp.PunktRAddr         := ¯â­¤_¤¥á ;
  recTTISp.ZhDOprVes          := ¯â­¤_¯®á®¡¯à¥á ;
  recTTISp.ZhDNetto           := ¯â­¤_¥á¥ââ®;
  recTTISp.ZhDBrutto          := ¯â­¤_¥áàãââ®;
  recTTISp.ZhDResOtgr         := ¯â­¤_¥áâ£àã§ª¨;

  MemTblSopr.MPrnSoprSpTTI.Buffer := recTTISp;

  MemTblSopr.Insert Current MPrnSoprSpTTI;

//******************************************************************************
! ¯ã­ªâ_à£ - 10
  ClearAdvRecord(recOrg);

  recOrg.KatSoprNRec     := recNakl.KatSoprNRec;
  recOrg.SpSoprNRec      := recSpec.SpSoprNRec;
  recOrg.PrOrg           := 10;
  recOrg.KatOrg_Name     := ¯_ã­ªâ_à£_¬ï;
  recOrg.KatOrg_TipOrg   := ¯_ã­ªâ_à£_¨¯;
  recOrg.KatOrg_Addr     := ¯_ã­ªâ_à£_¤à¥á;
  recOrg.KatOrg_OKPO     := ¯_ã­ªâ_à£_;
  recOrg.KatOrg_OKONH    := ¯_ã­ªâ_à£_;
  recOrg.KatOrg_TEL      := ¯_ã­ªâ_à£_;
  recOrg.KatOrg_CONTAKT  := ¯_ã­ªâ_à£_®­â­ä;
  recOrg.KatOrg_EMAIL    := ¯_ã­ªâ_à£_Email;
  recOrg.KatOrg_OKATO    := ¯_ã­ªâ_à£_OKATO;
  recOrg.KatOrg_KBK      := ¯_ã­ªâ_à£_KBK;
  recOrg.KatOrg_OGRN     := ¯_ã­ªâ_à£_OGRN;
  recOrg.KatOrg_REGNO    := ¯_ã­ªâ_à£_¥£®¬_¢_;
  recOrg.KatOrg_REGNOS   := ¯_ã­ªâ_à£_¥£®¬_âà å®¢ â¥«ï;
  recOrg.KatOrg_INSNA    := ¯_ã­ªâ_à£_à£ ­_á¯®«­_« áâ¨;
  recOrg.FormSobs_Name   := ¯_ã­ªâ_à£_®à¬ _®¡áâ¢¥­­®áâ¨;
  recOrg.FormSobs_VidD   := ¯_ã­ªâ_à£_¨¤_¥ïâ¥«ì­®áâ¨;
  recOrg.KatState_KOD    := ¯_ã­ªâ_à£__;
  recOrg.KatState_Name   := ¯_ã­ªâ_à£__;
  recOrg.KatState_IsNal  := ¯_ã­ªâ_à£__;
  recOrg.KatCity_KOD     := ¯_ã­ªâ_à£__;
  recOrg.KatCity_Name    := ¯_ã­ªâ_à£__;
  recOrg.KatCity_TEL     := ¯_ã­ªâ_à£__;
  recOrg.KatStateS_KOD   := ¯_ã­ªâ_à£___;
  recOrg.KatStateS_Name  := ¯_ã­ªâ_à£___;
  recOrg.KatStateS_IsNal := ¯_ã­ªâ_à£___;
  recOrg.KatOrg_CorpoIn  := ¯_ã­ªâ_à£_;
  recOrg.KatOrg_UNN      := ¯_ã­ªâ_à£_;
  recOrg.KatOrg_KODPLAT  := ¯_ã­ªâ_à£_;
  recOrg.KatB_Name       := ¯_ã­ªâ_à£__¬ï;
  recOrg.KatB_Remark     := ¯_ã­ªâ_à£__®¬¬¥­â à¨©;
  recOrg.KatB_Addr       := ¯_ã­ªâ_à£__¤à¥á;
  recOrg.KatB_MFO1       := ¯_ã­ªâ_à£__ä®;
  recOrg.KatB_MFO2       := ¯_ã­ªâ_à£__ªæ;
  recOrg.KatB_Schet1     := ¯_ã­ªâ_à£__ç¥â;
  recOrg.KatB_Schet2     := ¯_ã­ªâ_à£__ç¥â_ªæ;
  recOrg.KatB_Schet3     := ¯_ã­ªâ_à£__ç¥â_« â;
  recOrg.KatB_TipSchet   := ¯_ã­ªâ_à£__¨¯_ç¥â ;
  recOrg.KatB_Aktiv      := ¯_ã­ªâ_à£__¨¤_ç¥â ;
  recOrg.KatOrg_UrAddr   := '';

  MemTblSopr.MPrnSoprOrg.Buffer := recOrg;

  MemTblSopr.Insert Current MPrnSoprOrg;

//******************************************************************************
! ¯ã­ªâ_à£ - 11
  ClearAdvRecord(recOrg);

  recOrg.KatSoprNRec     := recNakl.KatSoprNRec;
  recOrg.SpSoprNRec      := recSpec.SpSoprNRec;
  recOrg.PrOrg           := 11;
  recOrg.KatOrg_Name     := ¯_ã­ªâ_à£_¬ï;
  recOrg.KatOrg_TipOrg   := ¯_ã­ªâ_à£_¨¯;
  recOrg.KatOrg_Addr     := ¯_ã­ªâ_à£_¤à¥á;
  recOrg.KatOrg_OKPO     := ¯_ã­ªâ_à£_;
  recOrg.KatOrg_OKONH    := ¯_ã­ªâ_à£_;
  recOrg.KatOrg_TEL      := ¯_ã­ªâ_à£_;
  recOrg.KatOrg_CONTAKT  := ¯_ã­ªâ_à£_®­â­ä;
  recOrg.KatOrg_EMAIL    := ¯_ã­ªâ_à£_Email;
  recOrg.KatOrg_OKATO    := ¯_ã­ªâ_à£_OKATO;
  recOrg.KatOrg_KBK      := ¯_ã­ªâ_à£_KBK;
  recOrg.KatOrg_OGRN     := ¯_ã­ªâ_à£_OGRN;
  recOrg.KatOrg_REGNO    := ¯_ã­ªâ_à£_¥£®¬_¢_;
  recOrg.KatOrg_REGNOS   := ¯_ã­ªâ_à£_¥£®¬_âà å®¢ â¥«ï;
  recOrg.KatOrg_INSNA    := ¯_ã­ªâ_à£_à£ ­_á¯®«­_« áâ¨;
  recOrg.FormSobs_Name   := ¯_ã­ªâ_à£_®à¬ _®¡áâ¢¥­­®áâ¨;
  recOrg.FormSobs_VidD   := ¯_ã­ªâ_à£_¨¤_¥ïâ¥«ì­®áâ¨;
  recOrg.KatState_KOD    := ¯_ã­ªâ_à£__;
  recOrg.KatState_Name   := ¯_ã­ªâ_à£__;
  recOrg.KatState_IsNal  := ¯_ã­ªâ_à£__;
  recOrg.KatCity_KOD     := ¯_ã­ªâ_à£__;
  recOrg.KatCity_Name    := ¯_ã­ªâ_à£__;
  recOrg.KatCity_TEL     := ¯_ã­ªâ_à£__;
  recOrg.KatStateS_KOD   := ¯_ã­ªâ_à£___;
  recOrg.KatStateS_Name  := ¯_ã­ªâ_à£___;
  recOrg.KatStateS_IsNal := ¯_ã­ªâ_à£___;
  recOrg.KatOrg_CorpoIn  := ¯_ã­ªâ_à£_;
  recOrg.KatOrg_UNN      := ¯_ã­ªâ_à£_;
  recOrg.KatOrg_KODPLAT  := ¯_ã­ªâ_à£_;
  recOrg.KatB_Name       := ¯_ã­ªâ_à£__¬ï;
  recOrg.KatB_Remark     := ¯_ã­ªâ_à£__®¬¬¥­â à¨©;
  recOrg.KatB_Addr       := ¯_ã­ªâ_à£__¤à¥á;
  recOrg.KatB_MFO1       := ¯_ã­ªâ_à£__ä®;
  recOrg.KatB_MFO2       := ¯_ã­ªâ_à£__ªæ;
  recOrg.KatB_Schet1     := ¯_ã­ªâ_à£__ç¥â;
  recOrg.KatB_Schet2     := ¯_ã­ªâ_à£__ç¥â_ªæ;
  recOrg.KatB_Schet3     := ¯_ã­ªâ_à£__ç¥â_« â;
  recOrg.KatB_TipSchet   := ¯_ã­ªâ_à£__¨¯_ç¥â ;
  recOrg.KatB_Aktiv      := ¯_ã­ªâ_à£__¨¤_ç¥â ;
  recOrg.KatOrg_UrAddr   := '';

  MemTblSopr.MPrnSoprOrg.Buffer := recOrg;

  MemTblSopr.Insert Current MPrnSoprOrg;
end.
.}
.{ CHECKENTER TOVNUSL
#include ttn_fast.frn
.begin
//******************************************************************************
! ä®à¬¨à®¢ ­¨¥ MPrnSoprNakl
  ClearAdvRecord(recUsl);

  recUsl.KatSoprNRec := recNakl.KatSoprNRec;
  recUsl.SpSoprNRec  := á¯¥æ¨ä¨ª æ¨ï_­à¥ª;
  recUsl.UslName     :=  §¢ ­¨¥á«ã£¨;
  recUsl.UslKod      := ®¤á«ã£¨;
  recUsl.OtpEd       := â¯¤§¬á«ã£¨;
  recUsl.UthEd       := ç¤§¬á«ã£¨;
  recUsl.KoefOtpEd   := ®íäá«ã£¨;
  recUsl.KolD        := ®«á«ã£¨;
  recUsl.KolF        := ®«á«ã£¨;
  recUsl.Cena        := ¥­ á«ã£¨;
  recUsl.CenaVal     := ¥­  «á«ã£¨;
  recUsl.Nalog1      := _ «®£1;
  recUsl.NalogV1     := _ «®£1;
  recUsl.Nalog2      := _ «®£2;
  recUsl.NalogV2     := _ «®£2;
  recUsl.Nalog3      := _ «®£3;
  recUsl.NalogV3     := _ «®£3;
  recUsl.Nalog4      := _ «®£4;
  recUsl.NalogV4     := _ «®£4;
  recUsl.Nalog5      := _ «®£5;
  recUsl.NalogV5     := _ «®£5;
  recUsl.Nalog6      := _ «®£6;
  recUsl.NalogV6     := _ «®£6;
  recUsl.NalogOth    := _ «®£_¯à®ç¨¥_;
  recUsl.NalogOthV   := _ «®£_¯à®ç¨¥_;
  recUsl.CNakBN      := _ ª;
  recUsl.CNacBN      := _ æ;
  recUsl.CValBN      := _ «;
  recUsl.CNakBNUth   := _ ªç;
  recUsl.CNacBNUth   := _ æç;
  recUsl.CValBNUth   := _ «ç;
  recUsl.CNakSN      := _ ª;
  recUsl.CNacSN      := _ æ;
  recUsl.CValSN      := _ «;
  recUsl.CNakSNUth   := _ ªç;
  recUsl.CNacSNUth   := _ æç;
  recUsl.CValSNUth   := _ «ç;
  recUsl.StNDS       := _áâ ¢ª _¯¥à¢®£®_­ «®£ ;
  recUsl.CNDSNak     := _ ª;
  recUsl.CExciseNak  := _ªæ¨§ ª;
  recUsl.CNProdNak   := _à®¤ ª;
  recUsl.CNalNak     := _ ª;
  recUsl.CNDSNac     := _ æ;
  recUsl.CExciseNac  := _ªæ¨§ æ;
  recUsl.CNProdNac   := _à®¤ æ;
  recUsl.CNalNac     := _ æ;
  recUsl.CNDSVal     := _ «;
  recUsl.CExciseVal  := _ªæ¨§ «;
  recUsl.CNProdVal   := _à®¤ «;
  recUsl.CNalVal     := _ «;
  recUsl.CStNakBN    := _â ª;
  recUsl.StNacBN     := _â æ;
  recUsl.StValBN     := _â «;
  recUsl.StNakSN     := _â ª;
  recUsl.StNacSN     := _â æ;
  recUsl.StValSN     := _â «;
  recUsl.StNDSNak    := _â ª;
  recUsl.StExciseNak := _âªæ¨§ ª;
  recUsl.StNProdNak  := _âà®¤ ª;
  recUsl.StNalNak    := _â ª;
  recUsl.StNDSNac    := _â æ;
  recUsl.StExciseNac := _âªæ¨§ æ;
  recUsl.StNProdNac  := _âà®¤ æ;
  recUsl.StNalNac    := _â æ;
  recUsl.StNDSVal    := _â «;
  recUsl.StExciseVal := _âªæ¨§ «;
  recUsl.StNProdVal  := _âà®¤ «;
  recUsl.StNalVal    := _â «;
  recUsl.ProcNDS     := _à;
  recUsl.ProcExcise  := _àªæ¨§;
  recUsl.ProcNProd   := _àà®¤;
  recUsl.ProcNal     := _à;
  recUsl.PartyName   := _ àâ¨ï;
  recUsl.StroyObj    := _¡ê¥ªâ_áâà®¨â¥«ìáâ¢ ;
  recUsl.StZatr      := _â âìï_§ âà â;

  MemTblSopr.MPrnSoprUslNakl.Buffer := recUsl;

  MemTblSopr.Insert Current MPrnSoprUslNakl;
end.
.}
.begin
//******************************************************************************
! ¯à®¤®«¦¥­¨¥ ä®à¬¨à®¢ ­¨ï MPrnSoprNakl
  recNakl.StrAstNakSN1   := áâà_â ª1;
  recNakl.bNalProd       := bNalProd;
  recNakl.bFixGrMC       := bFixGrMC;
  recNakl.bAutoGrM       := bAutoGrM;
  recNakl.TaraVoz        := TaraVoz;
  recNakl.ANaim          :=  ¨¬¥­®¢ ­¨©;
  recNakl.StrANaim       := áâà_ ¨¬¥­®¢ ­¨©;
  recNakl.AKolF          := ®«;
  recNakl.StrAKolf       := áâà_®«;
  recNakl.AKolUth        := ®«ç;
  recNakl.StrAKolUth     := áâà_®«ç;
  recNakl.AKolVes        := ®«¥á;
  recNakl.StrAKolVes     := áâà_®«¥á;
  recNakl.AKolOb         := ®«¡;
  recNakl.StrAKolOb      := áâà_®«¡;
  recNakl.AStNak         := â ª;
  recNakl.StrAStNak      := áâà_â ª;
  recNakl.AStOpl         := â¯«;
  recNakl.StrAStOpl      := áâà_â¯«;
  recNakl.AStNac         := â æ;
  recNakl.StrAStNac      := áâà_â æ;
  recNakl.AStNacSDost    := â æ®áâ;
  recNakl.StrAStNacSDost := áâà_â æ®áâ;
  recNakl.AStVal         := â «;
  recNakl.StrAStVal      := áâà_â «;
  recNakl.AStNakBN       := â ª;
  recNakl.StrAStNakBN    := áâà_â ª;
  recNakl.AStNacBN0      := â æ0;
  recNakl.StrAStNacBN    := áâà_â æ;
  recNakl.AStValBN       := â «;
  recNakl.StrAStValBN    := áâà_â «;
  recNakl.AStNakSN       := â ª;
  recNakl.StrAStNakSN    := áâà_â ª;
  recNakl.AStNacSN0      := â æ0;
  recNakl.StrAStNacSN    := áâà_â æ;
  recNakl.AStValSN       := â «;
  recNakl.StrAStValSN    := áâà_â «;
  recNakl.ANDSNak        :=  ª;
  recNakl.StrANDSNak     := áâà_ ª;
  recNakl.AEciseNak      := ªæ¨§ ª;
  recNakl.StrAEciseNak   := áâà_ªæ¨§ ª;
  recNakl.ANProdNak      := à®¤ ª;
  recNakl.StrANProdNak   := áâà_à®¤ ª;
  recNakl.ANalNak        :=  ª;
  recNakl.StrANalNak     := áâà_ ª;
  recNakl.ANDSNac0       :=  æ0;
  recNakl.StrANDSNac     := áâà_ æ;
  recNakl.AEciseNac      := ªæ¨§ æ;
  recNakl.StrAEciseNac   := áâà_ªæ¨§ æ;
  recNakl.ANProdNac      := à®¤ æ;
  recNakl.StrANProdNac   := áâà_à®¤ æ;
  recNakl.ANalNac        :=  æ;
  recNakl.StrANalNac     := áâà_ æ;
  recNakl.ANDSVal        :=  «;
  recNakl.StrANDSVal     := áâà_ «;
  recNakl.AEciseVal      := ªæ¨§ «;
  recNakl.StrAEciseVal   := áâà_ªæ¨§ «;
  recNakl.ANProdVal      := à®¤ «;
  recNakl.StrANProdVal   := áâà_à®¤ «;
  recNakl.ANalVal        :=  «;
  recNakl.StrANalVal     := áâà_ «;
  recNakl.APrNDS         := à;
  recNakl.APrEcise       := àªæ¨§;
  recNakl.APrNProd       := àà®¤;
  recNakl.APrNal         := à;
  recNakl.Signer1        := ®¤¯¨á ­â1;
  recNakl.SignerApp1     := ®¤¯¨á ­â_®«¦­®áâì1;
  recNakl.Signer2        := ®¤¯¨á ­â2;
  recNakl.SignerApp2     := ®¤¯¨á ­â_®«¦­®áâì2;
  recNakl.Signer3        := ®¤¯¨á ­â3;
  recNakl.SignerApp3     := ®¤¯¨á ­â_®«¦­®áâì3;
  recNakl.Signer4        := ®¤¯¨á ­â4;
  recNakl.SignerApp4     := ®¤¯¨á ­â_®«¦­®áâì4;
  recNakl.Signer5        := ®¤¯¨á ­â5;
  recNakl.SignerApp5     := ®¤¯¨á ­â_®«¦­®áâì5;
  recNakl.AllDoc1        := ¢á¥_¤®ªã¬¥­âë1;
  recNakl.AllDoc2        := ¢á¥_¤®ªã¬¥­âë2;
  recNakl.AllDoc3        := ¢á¥_¤®ªã¬¥­âë3;
  recNakl.AllDoc4        := ¢á¥_¤®ªã¬¥­âë4;
  recNakl.AllDoc5        := ¢á¥_¤®ªã¬¥­âë5;
  recNakl.AllCert1       := ¢á¥_á¥àâ¨ä¨ª âë1;
  recNakl.AllCert2       := ¢á¥_á¥àâ¨ä¨ª âë2;
  recNakl.AllCert3       := ¢á¥_á¥àâ¨ä¨ª âë3;
  recNakl.AllCert4       := ¢á¥_á¥àâ¨ä¨ª âë4;
  recNakl.AllCert5       := ¢á¥_á¥àâ¨ä¨ª âë5;
#ifdef _DROGA
  recNakl.AllCert1       := drogaFunc.getDocBasis;
  if (v_base.getfirst katsopr = tsOk)
    if (v_base.getfirst stepdoc = tsOk) {
      recNakl.AllCert2   := v_base.stepdoc.nkont;  //order_num
      recNakl.AllCert3   := v_base.stepdoc.kontpri;//recadv
    }
  recNakl.AllCert4       := string(wGetTune('DOC.SD.PRNNAKL.TORG12COL10'));
  if (v_base.getfirst katsopr = tsOk)
    recNakl.AllCert5       := extAttr.sGetAttr(coKatOrg, v_base.katsopr.cOrg, 'CodeByBuyerToPrint');

#end
  recNakl.sPrice         := ¢á¥_¯à ©á«¨áâë;
  recNakl.SpSymbol       := á¯¥æá¨¬¢®«;

  MemTblSopr.MPrnSoprNakl.Buffer := recNakl;

  MemTblSopr.Insert Current MPrnSoprNakl;
end.
.{
.}
.}
.begin
  runinterface('PrnTovnForFastRep');
end.
.endform
