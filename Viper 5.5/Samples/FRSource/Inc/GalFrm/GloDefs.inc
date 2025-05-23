//------------------------------------------------------------------------------
//                                                      (c) ��௮��� ���������
//------------------------------------------------------------------------------
// ���⥬�       : ���������
// �����        : 8.0
// �����祭��    : �������� ���ம�।������
// �⢥�ᢥ���  :
//------------------------------------------------------------------------------

!-------------------------------------------------------------------------------
// ��⨢�� �ᯮ������ � ���� ��� �뤥����� ����� ���
// ��� ���� ����� ��⮢
#define GetDbSch(Schet) SubStr(#Schet,2,cgSchetLength-1)
!-------------------------------------------------------------------------------
// �ᯮ������ � ���� ��� �맮�� �⫠����� �㭪権
// �⮡� �⤠���� �㭪樨 �⠫� ����㯭� �㦭� � ����ன��
// "=����ன��=\���짮��⥫�\������� ��� ����⢮"
// �ਯ���� ����� "beta tester"
#define IsBetaTester(tag='') MatchesMask(sGetTune('User.FIO'),'*beta*tester*')
!-------------------------------------------------------------------------------
// �஢�ઠ ������ ��業��� �� 㪠����� �����
// �᫨ �� ��� - � �뤠���� ᮮ�饭�� � 㪠������ ����� ����䥩�
#declare CheckLicense(Module)
  if (not Lic_ModuleMayBeUsed(#Module))
  {
    if (GetFirst FastFirstRow ContourComponents where ((#Module == ContourComponents.Name)) = tsOk) {}
    Message('��� ����᪠ ����䥩�'#13 +
            '����室��� ��業��� �� ����� [' +
            if (IsValid(#ContourComponents),ContourComponents.Title,#Module) + ']', mfError);
    Abort; Exit;
  }
#end
// �஢�ઠ ������ ��業��� �� 㪠����� �����
// �᫨ �� ��� - � �뤠���� ᮮ�饭�� � 㪠������ ����� ����䥩�
#declare CheckLicenseEx(Module)
  if DemoMode(#Module)
  {
    if (GetFirst FastFirstRow ContourComponents where ((#Module == ContourComponents.Name)) = tsOk) {}
    Message('����� ����䥩�'#13 +
            '�������� � ���㫥 [' +
            if (IsValid(#ContourComponents),ContourComponents.Title,#Module) + ']', mfError);
    Abort; Exit;
  }
#end
#declare CheckOperLicense
if not DemoMode
  if not (DemoMode('dogovor;buy;sell;stroy;otprcons;sklad;Rozn;postpol;remont;CRM;mnuMarket')
      and DemoMode('b_kassa;b_finans;b_veks;sklad2;mbp;b_osn;b_act;b_hozop;b_balans;b_konsol;b_fa')
      and DemoMode('menuavt;NalogReg;Service;sfo;ofp;sfp;tep;tpp;ufz;ManufPlan;Controlling')
      and DemoMode('manufacture;dvs;SalePlan;SupplyPlan;coPlan')
         )
    {
      // ��墠祭� �����-� �� 㪠������ ��業���
    }
  else
    {
      Message('����� ����䥩� � ����業���㥬�� ०��� !!!', mfError);
      Abort; Exit;
    }
#end
!-------------------------------------------------------------------------------
// �஢�ઠ ������ ��業��� �� 㪠����� �����
// �᫨ �� ��� - � �뤠���� ᮮ�饭�� � 㪠������ ����� ����䥩� � �����⢫���� ���室 � DemoMode
#declare CheckLicenseAndDemoMode(Modules)
if not DemoMode
  if DemoMode(#Modules)
  {
    Message('����� ����䥩� � ����業���㥬�� ०���', mfError);
    Abort; Exit;
  }
#end
!-------------------------------------------------------------------------------
// �஢�ઠ ���������� �������� ����� ����� � cmPick.
// �᫨ �������� �����, �뤠���� ᮮ�饭�� � ᮡ�⨥ ���뢠����
#declare CheckEditStatZatrInPick
if (not boGetTune('Oper.Smeta.StZatr'))
  if (IsValid(#SpDocSmeta))
  {
    Message('����䨪��� ��ନ஢��� �� ᬥ�!'#13+'��� ����饭� �������� ����� �����.');
    Abort;
    Exit;
  }
#end
!-------------------------------------------------------------------------------
// �஢�ઠ ���������� �������� ����� ����� � cmDelOnProtect.
// �᫨ �������� �����, �뤠���� ᮮ�饭�� � ᮡ�⨥ ���뢠����
#declare CheckEditStatZatrInDelOnPr
if (not boGetTune('Oper.Smeta.StZatr'))
  if (IsValid(#SpDocSmeta) and IsValid(#SpecZatr))
  {
    Message('����䨪��� ��ନ஢��� �� ᬥ�!'#13+'��� ����饭� �������� ����� �����.');
    Abort;
    Exit;
  }
#end
!-------------------------------------------------------------------------------
! ��ଠ�� ��ப� ��� �ᯮ�짮����� � ��㧥� � �.�., � DoubleToStr
!   ���ਬ��:
!     mySumma: [17.2,#SFormatNdeSign];
!     mySummaStr := doubleToStr(mySumma, #SFormatValNoSign);
!-------------------------------------------------------------------------------
// ���ᨬ��쭠� �㬬� � ��� [21]
#define SFormatNdeSign   '\2p[|-]36`666`666`666`667.88'
// ���������� [20]
#define SFormatNdeNoSign '\2p6`666`666`666`667.88'
// ���ᨬ��쭠� �㬬� � ����� [17]
#define SFormatValSign   '\2p[|-]36`666`666`667.88'
// ���������� [16]
#define SFormatValNoSign '\2p6`666`666`667.88'
// ��業�� [07]
#define SFormatPercent   '\2p[|-]3667.88'
// ��� [10]
#define SFormatDate      'DD/MM/YYYY'
// �६� [05] ���:������
#define SFormatTime      'HH:MM'
// �६� [08] ���:������:ᥪ㭤�
#define SFormatTimeSec   'HH:MM:SS'
// �६� [09] ������:ᥪ㭤�:���
#define SFormatTimeHund  'MM:SS.SSS'
!-------------------------------------------------------------------------------
! ��業��஢���� � ����䥩�� (��� �ய��뢠��� � VipInterface)
!-------------------------------------------------------------------------------
! ��業��஢��� ��� ���
#ifdef Atl51
  #define Licensed_Free Licensed(Free)
#else
  #define Licensed_Free
#end
!-------------------------------------------------------------------------------
! ��業��஢��� ��� ��� ���㫥�, �室��� � ���
#ifdef Atl51
  #define Licensed_KBU Licensed(B_Finans,B_Hozop,B_Balans,B_Kassa,B_Osn,B_Act,MBP,Sklad2)
#else
  #define Licensed_KBU
#end
!-------------------------------------------------------------------------------
! ��業��஢��� ��� ��� ���㫥�, �室��� � ��
#ifdef Atl51
  #define Licensed_UB Licensed(SFP)
#else
  #define Licensed_UB
#end
!-------------------------------------------------------------------------------
! ��業��஢��� ��� ���⥦���� ���������
#ifdef Atl51
  #define Licensed_PK Licensed(Free)
#else
  #define Licensed_PK
#end
!-------------------------------------------------------------------------------
! public ��।���� ��� 5-�� �⫠���, �� �㦥� ⮫쪮 ��� ��������⭮� ������
#ifdef ComponentVersionInDict
  #define GalPublic public
#else
  #define GalPublic
#endif
!-------------------------------------------------------------------------------
! private ��� ����䥩ᮢ ��।���� ��� 5-�� �⫠���
#ifdef Atl51
  #define IntPrivate Private
#else
  #define IntPrivate
#endif
!-------------------------------------------------------------------------------
// �஥� ������쭮���
// ��� � ������ ᢮�稢����� � ���� ����
#declare _OfficeFilial(OfficeNo,FilialNo)
   LongInt(ttConstFilial*#FilialNo + #OfficeNo)
#end
// ��१��� �� TuneObj 䨫��� ��� ���
#declare _FilialNo(TuneObj)
   word(#TuneObj DIV ttConstFilial)
#end
#declare _OfficeNo(TuneObj)
   word(#TuneObj MOD ttConstFilial)
#end

!-------------------------------------------------------------------------------
! ����� � Help-���⥪⠬�
#ifndef Atl51
  #define __TypeHelpContextID__ LongInt
#else //Atl51
  #define __TypeHelpContextID__ String
#endif//Atl51
!-------------------------------------------------------------------------------
#ifndef Atl51
  #define mHelpContextID(_HName) hc#(_HName)
#else //Atl51
  #define mHelpContextID(_HName) '#(_HName)'
#endif//Atl51

!-------------------------------------------------------------------------------
