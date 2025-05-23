!-------------------------------------------------------------------------------
! ��।������ Define-�� ��� __���X__���ᨩ__
!-------------------------------------------------------------------------------
! �� ࠧ�࠭稢��� ��� 䠩� !
!-------------------------------------------------------------------------------
! ��।������ ���⮢��� Define ��� ���ᨨ ��室���� � 䠩�� Defs.inc
!-------------------------------------------------------------------------------

!-------------------------------------------------------------------------------
! �� 㡨ࠩ� � �� ���������� �� ���ଠ樮���� ᮮ�饭�� (Gera)
!-------------------------------------------------------------------------------
! ����饭�� ��� �ᮧ������� ����祭�� Predefs.inc
#ifdef _Predefs_inc_Included
  #info ��ᯮ������ ������祭�� Predefs.inc. �� ������砥��� �� �஢�� �஥��
#end
!-------------------------------------------------------------------------------

!-------------------------------------------------------------------------------
! ����⢥��� ��砫� �᭮������ ��� Predefs.inc
!-------------------------------------------------------------------------------
! �᪫�祭�� ����୮� �������樨 䠩��
#ifndef _Predefs_inc_Included
#define _Predefs_inc_Included
!-------------------------------------------------------------------------------

!-------------------------------------------------------------------------------
#include Defs.inc           // ��� 䠩� ��।���� ����� �����⨪�
!-------------------------------------------------------------------------------

!-------------------------------------------------------------------------------
! ���ᨮ��� Define's
!-------------------------------------------------------------------------------
! ������ ��᫥����� ����� ��।���� �।����� !
!-------------------------------------------------------------------------------

!-------------------------------------------------------------------------------
! ����� ��室� ५����
!-------------------------------------------------------------------------------
! 5.83     22/02/2002 3.03.13
! 5.84     29/07/2002 3.03.16
! 7.10     17/09/2002 3.03.16
! 5.85.01  03/05/2003 3.03.18
! 5.85.02  31/03/2004 3.03.19
! 7.11.01  28/08/2003 3.03.19
! 7.12.01  09/12/2004 3.03.22
! 8.00     23/05/2005 5.1.33
!-------------------------------------------------------------------------------
! 8.10.01  ? /  /2006 5.2.??
!-------------------------------------------------------------------------------
! 8.50     ? /  /     ?
!-------------------------------------------------------------------------------

!-------------------------------------------------------------------------------
! ��稭�� � 5.2.02 Atl52 �� Vip ��।���� ��⮬���᪨
!-------------------------------------------------------------------------------
#ifdef Atl52
  #define Atl51
  #define __Filial__          // ������쭮���. ��᪮�쪮 �।���⨩ � ����� ��.
#end
!-------------------------------------------------------------------------------

#ifdef Gal8_5
  #define GalVersion 8.50      // ����� �����⨪�. �ᯮ������ ��� ���ᨨ ���������.
  #define Gal8_1
  #define ComponentVersionInDict
#end

#ifdef Gal8_1
  #define GalVersion 8.10      // ����� �����⨪�. �ᯮ������ ��� ���ᨨ ���������.
  #define Gal8_0
  #define ComponentVersion     // ��������⭮��� ��� ᫮���� (�� ⠡���� ��騥)
  #define __Post__             // ����� ���⠬�
  #define __PLPOR_NEWFUNCS__
  #define __StatusInPriceL__
  // ��: FPIV - II C��� 䨭����権 � ��⮬
  #define __OFP_ByFpOborot__   // ��� - �� ����� ��� ���
  #define __SumBalansFob__     // ��⮡������ ��� � �易���� ���

  #define __Rlt_Custom_Obj__   // ���⠭����� ��ꥪ�� �����������
  #define __SerialNumberInMN__ // �ᯮ�짮����� �਩��� ����஢ � ���
  #define __AllowTxoFlDatOB__  // �ᯮ�짮����� � ��� ०��� �ନ஢���� ���� �஢����
  #define _MVK_REM_AVTO_       // ���� "��ࠢ����� �࠭ᯮ�⮬" � "��ࠢ������ ६��⠬�"
  #define __MTR_TO_SPEC__      // ������� ��� ����� ��ꥪ⮢ ��ந⥫��⢠ � ᯥ�䨪���� ���㬥�⮢
#end

#ifdef GAL8_0
  #define GAL7_12
  #define __Quality_Menu__    // ���� ����� ��ࠢ����� ����⢮� �த�樨
  #define kachestvo           // ��ࠢ����� ����⢮�
  #define kachestvo2          // ��ࠢ����� ����⢮� - MENU
  #define _Quality_Journal_   // ��ࠢ����� ����⢮� - ��ୠ�
  #define __Realting__        // ��ࠢ����� �������������
  #define __MIG_Patch__       // ��� � ��� (��� ����)
#end

#ifdef GAL7_12
  #define GAL7_11
  #define __SALDO_MTR__       // ������� �����祭�� ����ᮢ ���
  #define __UKS_ACCESS__      // ����࠭�祭�� ����㯠 � ������ �����ந⥫��⢠
  #define __SMETA__           // ��ந⥫�� ᬥ��
  #define __GrDescr_Yugorsk__ // ��ࠡ�⪠ �� �����䨫���쭮�� ��� ����᪠
  #define __Synonym__         // �����⨪� - ᨭ�����
  #define __OSSums_Feature__  // ��ࠦ���� ��८業�� �� � ��� � ���
  #define __YUKOS_OSSP__      // ��ࠡ�⪨ �� ��⠢� ��
  #define __KatOsPrSb__       // � ���㫥 �� ��ࠡ�⪨ �� "�ਧ���� ᮡ�⢥�����" � "������ �⢥��⢥�����"
  #define __OsChgParInDatabase__ // ��� ��ࠬ���� ����権 �� ������ �࠭����� � ᮮ�. ⠡���
  #define _NEWADDRESS_
  #define __YUKOS_UKS__       // ��� ��� ����権 ����� ��ꥪ⮢ ��ந⥫��⢠ � ��ᯫ���� �� � ���
  #define __ObjEdit__
  #define __VarNameMCU__      // ��ਠ��� ������������ ���/��
  #define __VarPrKatalogs__   // ��ਠ��� �।�⠢����� ��⠫����
  #define __7Days__           // ��ନ஢���� � ॣ������ ᢮���� ��������� ��⮢ ��� ॣ����樨 ���
  #define _METHOD_SPIS_PODR_  // ��⮤��� ᯨᠭ�� �� 䠪��᪮� 業� ��室�
  #define _NewRemont_         // ��� �थ஢ � ᠫ줮��� ���⪮� � ६����
  #define __NIOKR__           // ������� ������஢ �����
  #define NEW_FUNC_OSLGOTA    // ��� ����⨧�樮���� �죮�� �� ���� ����⨧�樨(����� �㭪樮���쭮���)
  #define __TREE_NAMELEVEL__  // ����ࠨ������ ������������ �஢�� � ������᪨� �����
#end

#ifdef GAL7_11
  #define GAL7_1
  #define __UKS2__            // ��ࠡ�⪨ �����ந⥫��⢠
  #define __UKS3__            // ��ࠡ�⪨ �����ந⥫��⢠
  #define __UKS_SALDO__       // ��ࠡ�⪨ �����ந⥫��⢠
  #define __ObjTree__         // ��ࠡ�⪨ �����ந⥫��⢠
  #define __UKS_ATD__         // ��ࠡ�⪨ �����ந⥫��⢠
  #define __UKS_PL2__         // ��ࠡ�⪨ �����஢���� �����ந⥫��⢠
  #define __KATSVIDREG__      // C����⥫��⢠ ॣ����樨 �� ����ࠣ����
  #define _YUKOS_FactSeb      // �����᪠� ᥡ��⮨�����
  #define _AnPok              // �������᪨� ������⥫� � ᥡ��⮨����
  #define __MGTS_PHONECARD__  // ��� ���� - ��� ⥫�䮭����
  #define __MGTS_UKS_REPORT__
  #define __AutoSysNumUsl__   // ��⮭㬥��� ���
#end

#ifdef GAL7_1
  #define GAL5_85
  #define __TVEL__
//  #define __ZarTunes__        // ����ன�� ��௫��� ��॥堫� � �����⥬��
  #define pir_104_601         // ��ࠡ�⪠ ��� ��ࠨ�� ����⮢�७�� ����⢠ � ��⠫��� ���⨩
  #define _AKT_REMONT_KRAZ_   // ��㯯���� ��� �믮�������� ६��� ��� �����
#end

#ifdef GAL5_85
  #define GAL5_84
  #define __New_Filtr__       // ���� (���७��) 䨫��� �� ���-�� PlPor
  #define __NewAltR__         // ����ன�� ������ �����祭�� ���⥦�
  #define __UKS2__            // ��ࠡ�⪨ �����ந⥫��⢠
  #define __UKS3__            // ��ࠡ�⪨ �����ந⥫��⢠
  #define __UKS_ATD__         // ��ࠡ�⪨ �����ந⥫��⢠
  #define __UKS_PL2__         // ��ࠡ�⪨ �����஢���� �����ந⥫��⢠
  #define __KATSVIDREG__      // �����⥫��⢠ ॣ����樨 �� ����ࠣ����
  #define pir_101_21885
  #define PIR_102_36567       // ��ଫ���� ���-1
  #define NALOG_VEKSL
  #define __MemoOrder__       // ����ਠ��� �थ� (��� ��⭨���)
  #define __SHT_CE_USE__      // ࠡ�祥 ���� ��ᮢ騪� (���-������) (�襭� ����,�.�. ���� ࠡ���� ⮫쪮 ��� DOS)
  #define __ObjTree__         // ��ࠡ�⪨ �����ந⥫��⢠

  // ��ࠡ�⪨ ����� "��ࠢ����� ��⮬":
  #define __FpLockValues__

  #define __AdvSkidIerGrMC__  // � ᫮���� ᪨���� �� �� ���뢠�� �����筮��� ��㯯 ��
  #define __OsChgPar__        // �������⥫�� ��ࠬ���� � ������� ��/���
  #define _Working_NN_        // �������� ��ࠡ�⪨ ��������� ��������� (��ࠨ��)
#end

#ifdef GAL5_84
  #define GAL5_83
  #define NALOG_REG           // �������� ॣ�����
  #define __BackLog__         // ����祭��� �������������
  #define __UKS__             // ��ࠢ����� ����⠫�� ��ந⥫��⢮�
  #define ASR_MGTS            // ������ ���.�ࠢ�� �� ���
  #define ArtD_Sklad          // �����᪮� ��� ��� � �������
  #define _TransNeft_         // ���� ��� �࠭፥�� (�� Salary.def)
  #define __ORENBURG__        // ���� �७��ࣃ���஬
// ���᪮����஢��� ��᫥ �襭�� �஡���� 102.30471 #define __USE_GETDIRECT__   // ����ன�� �� �᭮���� ��⮤ ���� � ��
  #define __HandSloznSkidki__ //���� ᫮��� ᪨���
  #define __Alcohol__         //��� 101.22999
  #define __RaspVIPMC__       //��� 101.21713 (��⮬���᪮� ��।������ �� �� ᪫����)
#end

#ifdef GAL5_83
  #define GAL5_80
  #define __BigKau__          // 6 ��� (����)
  #define __NewCalcBalans__   // ��� ��� � �������
  #define __NewSklad__
  #define _NewKatB_
  #define _PROCNAC_           // �����᪠�(����ࠪ⭠�) 業�, ᪨���/�������� � ���㬥���
  #define _VIP00_             // ����� ��㣨 �� ��࠭���� ���� (���뢪��᪨� 䠭��� �-�)
  #define SFRU_01072002
  #define ART_DIZAIN2         // 2-� ��।� ��� ��� � �������
  #define _AKT_REMONT_KRAZ_   // ��㯯���� ��� �믮�������� ६��� ��� �����
#end

#ifdef GAL5_80
  #define GAL5_74
  #define _v58_               // ���ᨮ������ Money (�� Salary.def)
  #define __BigSchet__
  #define ART_DIZAIN          // ��� �ਥ��� (���)
  #define __YUKOS_USG_UZBEK__
  #define __YUKOS__
  #define __MGTS__
  #define __FIN__
  #define DEI_CAPACITY
  #define USE_VDE
  #define _TARA_
  #define XML_format
  #define _AZS_
  #define AZS
  #define __CentrOtv__
  #define __CentrOtvAll__
  #define _RoundInDoc_        // ���㣫���� ����⨢�� ������
  #define _Agency_            // ��������� ��� �� ������ࠬ �����ᨨ
  #define __PrDs__            // �ࠢ� ����㯠 � ���㬥�⠬ �� �����
  #define __TAXES__           // ����� ������� ���������� ���
  #define __DopKlDog__        // �������⥫쭠� �����䨪��� ������஢
#end

#ifdef GAL5_74
  #define GAL5_73
  #define Alumina             // ��ࠡ�⪠ ��� "���������" (�� Salary.def)
  #define _SOCNAL_            // ���� ��� ���ᨨ �� �歠���� �� 5.74 (�� Salary.def)
#end

#ifdef GAL5_73
  #define GAL5_71
#end

#ifdef GAL5_71
  #define GAL5_70
  #define GAL5_50
  //----------------------------------------------------------------------------
  // !!!��������!!! ����᫥�㥬� #define - ��� _v58_ ��� _v571_
  #ifndef _v58_
    #define _v571_            // ���ᨮ������ Money (�� Salary.def)
  #end
  //----------------------------------------------------------------------------
#end

!-------------------------------------------------------------------------------
! Define's ��� ������
!-------------------------------------------------------------------------------

#ifdef __YUKOS_OSSP__
  #define __YUKOS_OS__        //
#end

#ifdef __YUKOS_OS__
  #define __KatosOtchPer__    // ����� ��ਮ� ��������� ����祪 ��, ���
#end

#ifdef __YUKOS_USG_UZBEK__    // ����祭 � GAL5_80
  #define __UZBEK__
  #define __YUKOS__
  #define __USG__
  #define __Dogovor_MGTS__
#end

#ifdef __UZBEK__
  #define __KOL_GRM__
  #define __DO_PredOplata__
  #define KUZBASS
#ifdef GAL5_85
  #define __UslInMov__ //��㣨 � �࠭����� ���������
#end
#end

#ifdef KUZBASS
  #define POKAZKAC
  #define _FIL4GDOC_VIP
  #define __Status_DO__
  #define KUZB_USERT
#end

#ifdef __YUKOS__              // ����祭 � GAL5_80
  #define __DO_PredOplata__
  #define __SopUsl_MC__
  #define __DescrInBookPrZk__
  #define __NUM_DO_BY_SF__
  #define __USG__
  #define __NUM_SF_RESERVE__
  #define __Classific_Plan_Realiz_Balans__
  #define __VEKSL5_80__
#end

#ifdef __UKRAIN__
#end

#ifdef __USG__
  #define __USG_Report__
  #define __DocSchem__
  #define __NUMVAGON__
  #define __USG_3__
#end

#ifdef __Dogovor_MGTS__
#end

#ifdef __ORENBURG__
 #ifndef GAL5_80
  #define __VEKSL5_80__
  #define __CentrOtv__
 #end
 #define __ORENBURG_2__
#define __ATTR_EXPORT__
#end

//#ifdef __UKS__
//��� 102.50662  #define __UKS_PLANNING__     // �����஢���� ���㯮�
//#end

#if(#__TOOLVERSION__ >= 3003.022)
 #define _AttrValComp_              // ��� COMP ��� ���譨� ��ਡ�⮢
#end

// #define NALOG_VEKSL

// ��� ���権, � ������ �������⨬� �ᯮ�짮����� ᨭ������ ⨯�� (��।����� �१ type)
#ifdef Atl60
  #define TPtr pointer
  #define TSurrPtr comp
  #define TSumma decimal
#else
  #define TPtr longint
  #define TSurrPtr longint
  #define TSumma double

  #if(#__TOOLVERSION__ >= 5005.033)
      #define __FRAPI_NewFormat__
  #endif
#end
!-------------------------------------------------------------------------------
#end // _Predefs_inc_Included
!-------------------------------------------------------------------------------
