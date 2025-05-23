//------------------------------------------------------------------------------
//                                                      (c) ��௮��� �����⨪�
// �����⨪� ERP 9.1
// �������� ����⠭��
//------------------------------------------------------------------------------

#component "C_Const"

//------------------------------------------------------------------------------
#include PreDefs.inc
//------------------------------------------------------------------------------
#if(#__TOOLVERSION__ < 5005.000)
#include galhelp.inc    // �� 奫�-����⠭��
#else
Const
#end
//------------------------------------------------------------------------------
#include coConst.inc    // �������� ����⠭�� ⠡��� ᫮����
#include coSysTbl.inc   // ����⠭�� �⫠���᪨� ⠡��� (%Atlantis%Gen)
//------------------------------------------------------------------------------
#include gloconst.inc
#include CommonC.inc    // �� ����⠭�� ��� ᡮન ���-��
#include buhconst.inc
#include oper.inc
#include reports.inc    // ������ �㬥��� ���⮢
#include kauconst.inc
#include regconst.inc
#include fpconst.inc
#include ofpconst.inc   // �����࠭� "���⥦���� ���������"
#include taxes.inc      // ����⠭�� "������� ��������� ���⮢"
#include repTree.inc
#include Treenew.inc    // ����⠭�� ��� ��ꥪ� aTreeNew
#include KatDoc.inc     // ����⠭�� ��� ⨯�� ���㬥�⮢
#include aPlPor.inc     // ����ᠭ�� ⠡���� PlPor
#include FAConst.inc    // ���������
#include TaxConst.inc   // ����⠭�� �����஭��� ���⭮��
//------------------------------------------------------------------------------
#include Excel.inc      // ����⠭�� Excel
#include Mark.inc       // ����⠭�� ������ ����⪨ (ࠧ�� ��� Atl 3.03 � 5.1)
#include galnet.ccm     // ����⠭�� ���짮��⥫�᪨� ������
#include galnet.csc     // ����⠭�� �����-��ப �����⨪�
#include money.ccm      // ���짮��⥫�᪨� ������� �/�����
#include money.csc      // ����⠭�� �����-��ப �/�����
#include galinc.adm     // �� ����⠭�� ���������⨢���� ������
#include classes.inc    // �� ����⠭�� ���������⨢���� ������
#include tunes.inc      // ���� ����ன��
#include pick.inc       // ����⠭�� ��� Pick.wList
#include ieConst.inc
#include AsrConsts.inc
#include olap.inc
#include ieXMLConst.inc
#include staff.inc      // ����⠭�� "���஢"
#include osnma.inc      // ����⠭�� �� � ���
#include veksl.inc      // ����⠭�� ���ᥫ��
//------------------------------------------------------------------------------
#include tpp.inc
#include tpp.ccm
#include tpp.csc
#include tep.inc
#include tep.ccm
#include tep.csc
#include scmick.inc
//------------------------------------------------------------------------------
#include CompConst.inc
#include tppconst.inc
#include Control.inc
#include mnplan.inc
#include EvnLog.inc
#include JSGal.inc
#include Reserv.inc
//------------------------------------------------------------------------------
#include lifo.inc       // ����⠭�� ᪫���
//------------------------------------------------------------------------------
#include remont.inc     // Remont
#include kutconst.inc   // Roznitsa
#include Bookings.inc   // Resource
#include FldColor.inc   // Colours
#include tpp_key.inc    // ���
#include galnet.cad     // ���ਬ������ ����ࠪ��� ���㬥�⮢
#include getdocs.inc    // ����⠭�� ��ࠬ��஢ �맮�� ����䥩ᮢ
#include TranspNalog.inc// ����� �� �࠭ᯮ��
//------------------------------------------------------------------------------
#include cfg_all.inc    // ����⠭�� ��� �ᯮ�짮����� ���䨣����
#include cfg_err.inc
//------------------------------------------------------------------------------
#include crm.inc        // CRM
#include obedsch.inc    // ����⠭�� ��� ����䥩� ObedSch
#include obedconst.inc  // ����⠭�� ��� ��� �㭪権 ��ꥤ������
#include NalTunes.inc   // ����⠭�� ����஥� ࠡ��� � �� � �� (��壠����)
#include NalogReg.inc   // ����⠭�� "��������� ॣ���஢"
//------------------------------------------------------------------------------
// ����⠭�� ��� �ଠ⮢ Excel
#include ExcelFormat.inc //  �襭� �஡����� 102.31867
//------------------------------------------------------------------------------
#include PLConsts.inc   //
//------------------------------------------------------------------------------
#include KursDate.inc   // ����⠭�� ᯮᮡ� ��।������ ���� ����
//------------------------------------------------------------------------------
#include Niokr.inc      // ����⠭�� ����� �����
#include DocRef.inc     // ����⠭�� ��� ⠡���� DocRef
#include ExcelFormat.inc // ����⠭�� ��� �ଠ⮢ Excel (�襭� �஡����� 102.31867)
#include AllStaff.inc    // ����⠭�� ��� ⠡���� SpAllStaff
#include DelRaise.inc    // ����⠭�� ��� ⠡���� DelRaise
  
