
// text3.10-03View.cpp : Ctext31003View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text3.10-03.h"
#endif

#include "text3.10-03Doc.h"
#include "text3.10-03View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext31003View

IMPLEMENT_DYNCREATE(Ctext31003View, CView)

BEGIN_MESSAGE_MAP(Ctext31003View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Ctext31003View ����/����

Ctext31003View::Ctext31003View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext31003View::~Ctext31003View()
{
}

BOOL Ctext31003View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext31003View ����

void Ctext31003View::OnDraw(CDC* /*pDC*/)
{
	Ctext31003Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i < pDoc->ca.GetSize(); i++)
	{
		CClientDC dc(this);
        
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext31003View ���

#ifdef _DEBUG
void Ctext31003View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext31003View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext31003Doc* Ctext31003View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext31003Doc)));
	return (Ctext31003Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext31003View ��Ϣ�������


void Ctext31003View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int r = rand() % 50 + 5;
	CString s;
	s.Format(_T("%d"), r);
	CClientDC dc(this);
	CRect cr1(100,300,500,400);
	CRect cr2(600, 300, 500, 500);
	CRect cr3(500, 500, 700, 600);
	dc.Rectangle(cr1);
	dc.Rectangle(cr2);
	dc.Rectangle(cr3);
	Ctext31003Doc *pDoc = GetDocument();
	pDoc->ca.Add(r);
	if (point.x > 100 && point.x < 500 && point.y>300 && point.y < 400)
		dc.TextOutW(200, 300, s);
	CView::OnLButtonDown(nFlags, point);
}
