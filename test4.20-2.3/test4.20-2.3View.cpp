
// test4.20-2.3View.cpp : Ctest42023View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test4.20-2.3.h"
#endif

#include "test4.20-2.3Doc.h"
#include "test4.20-2.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest42023View

IMPLEMENT_DYNCREATE(Ctest42023View, CView)

BEGIN_MESSAGE_MAP(Ctest42023View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Ctest42023View ����/����

Ctest42023View::Ctest42023View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest42023View::~Ctest42023View()
{
}

BOOL Ctest42023View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest42023View ����

void Ctest42023View::OnDraw(CDC* /*pDC*/)
{
	Ctest42023Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	rect.left = 400;
	rect.top = 200;
	rect.right = 600;
	rect.bottom = 550;
	GetDC()->Ellipse(rect);
	Invalidate(false);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest42023View ���

#ifdef _DEBUG
void Ctest42023View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest42023View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest42023Doc* Ctest42023View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest42023Doc)));
	return (Ctest42023Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest42023View ��Ϣ�������


void Ctest42023View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect cr;
	CClientDC dc(this);
	int color = RGB(0, 0, 255);
	CPen *cp = new CPen(PS_DOT, 1, color);
	CPen *poldpen = dc.SelectObject(cp);
	if (point.x<600&&point.x>400&&point.y>200&&point.y<550)
	{
		cr = rect;
		cr.left = rect.left - 10;
		cr.top = rect.top - 10;
		cr.bottom = rect.bottom + 10;
		cr.right = rect.right + 10;
		dc.Rectangle(cr);
	}
	
	CView::OnLButtonDown(nFlags, point);
}
