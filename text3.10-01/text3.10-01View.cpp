
// text3.10-01View.cpp : Ctext31001View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text3.10-01.h"
#endif

#include "text3.10-01Doc.h"
#include "text3.10-01View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext31001View

IMPLEMENT_DYNCREATE(Ctext31001View, CView)

BEGIN_MESSAGE_MAP(Ctext31001View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Ctext31001View ����/����

Ctext31001View::Ctext31001View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext31001View::~Ctext31001View()
{
}

BOOL Ctext31001View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext31001View ����

void Ctext31001View::OnDraw(CDC* /*pDC*/)
{
	Ctext31001Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext31001View ���

#ifdef _DEBUG
void Ctext31001View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext31001View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext31001Doc* Ctext31001View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext31001Doc)));
	return (Ctext31001Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext31001View ��Ϣ�������


void Ctext31001View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s ;
	s.Format(_T("������ڱ�����"));
	CClientDC dc(this);
	dc.TextOutW(200,300,s);
	CView::OnLButtonDown(nFlags, point);
}


void Ctext31001View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s;
	s.Format(_T("������ڱ��ɿ�"));
	CClientDC dc(this);
	dc.TextOutW(200, 400, s);
	CView::OnLButtonUp(nFlags, point);
}
