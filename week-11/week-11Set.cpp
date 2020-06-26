
// week-11Set.cpp : Cweek11Set ���ʵ��
//

#include "stdafx.h"
#include "week-11.h"
#include "week-11Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek11Set ʵ��

// ���������� 2020��6��26��, 23:09

IMPLEMENT_DYNAMIC(Cweek11Set, CRecordset)

Cweek11Set::Cweek11Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = L"";
	m_3 = L"";
	m_4 = L"";
	m_5 = L"";
	m_nFields = 6;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString Cweek11Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90\x2014\x5b66\x751f\x4fe1\x606f\xff08week11\xff09;DBQ=F:\\\x8d44\x6e90\\Database1.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString Cweek11Set::GetDefaultSQL()
{
	return _T("[ѧ����Ϣ��]");
}

void Cweek11Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Text(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Text(pFX, _T("[�ֶ�3]"), m_3);
	RFX_Text(pFX, _T("[�ֶ�4]"), m_4);
	RFX_Text(pFX, _T("[�ֶ�5]"), m_5);

}
/////////////////////////////////////////////////////////////////////////////
// Cweek11Set ���

#ifdef _DEBUG
void Cweek11Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void Cweek11Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

