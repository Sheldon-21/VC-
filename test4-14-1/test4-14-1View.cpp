
// test4-14-1View.cpp : Ctest4141View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test4-14-1.h"
#endif

#include "test4-14-1Doc.h"
#include "test4-14-1View.h"
#include"Mydialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest4141View

IMPLEMENT_DYNCREATE(Ctest4141View, CView)

BEGIN_MESSAGE_MAP(Ctest4141View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(dialog, &Ctest4141View::Ondialog)
END_MESSAGE_MAP()

// Ctest4141View ����/����

Ctest4141View::Ctest4141View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest4141View::~Ctest4141View()
{
}

BOOL Ctest4141View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest4141View ����

void Ctest4141View::OnDraw(CDC* /*pDC*/)
{
	Ctest4141Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest4141View ���

#ifdef _DEBUG
void Ctest4141View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest4141View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest4141Doc* Ctest4141View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest4141Doc)));
	return (Ctest4141Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest4141View ��Ϣ�������


void Ctest4141View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Mydialog dl;
	int n=dl.DoModal();
	if (n == IDOK) {
		CString s1 = dl.s;
		GetDC()->TextOutW(200, 100, s1);
	}
	CView::OnLButtonDblClk(nFlags, point);
}


void Ctest4141View::Ondialog()
{
	Mydialog dl;
    dl.DoModal();
	// TODO: �ڴ���������������
}
