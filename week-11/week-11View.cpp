
// week-11View.cpp : Cweek11View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week-11.h"
#endif

#include "week-11Set.h"
#include "week-11Doc.h"
#include "week-11View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek11View

IMPLEMENT_DYNCREATE(Cweek11View, CRecordView)

BEGIN_MESSAGE_MAP(Cweek11View, CRecordView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
END_MESSAGE_MAP()

// Cweek11View ����/����

Cweek11View::Cweek11View()
	: CRecordView(IDD_WEEK11_FORM)
	, ID(0)
	, name(_T(""))
	, number(_T(""))
	, age(_T(""))
	, job(_T(""))
	, phone(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

Cweek11View::~Cweek11View()
{
}

void Cweek11View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1 );
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2 );
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3 );
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4 );
	DDX_Text(pDX, IDC_EDIT6, m_pSet->m_5 );
}

BOOL Cweek11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void Cweek11View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_week11Set;
	CRecordView::OnInitialUpdate();

}


// Cweek11View ��ӡ

BOOL Cweek11View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void Cweek11View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void Cweek11View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// Cweek11View ���

#ifdef _DEBUG
void Cweek11View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cweek11View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cweek11Doc* Cweek11View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek11Doc)));
	return (Cweek11Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek11View ���ݿ�֧��
CRecordset* Cweek11View::OnGetRecordset()
{
	return m_pSet;
}



// Cweek11View ��Ϣ�������
