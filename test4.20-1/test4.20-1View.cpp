
// test4.20-1View.cpp : Ctest4201View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test4.20-1.h"
#endif

#include "test4.20-1Doc.h"
#include "test4.20-1View.h"
#include"Mydialog0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest4201View

IMPLEMENT_DYNCREATE(Ctest4201View, CView)

BEGIN_MESSAGE_MAP(Ctest4201View, CView)
	ON_COMMAND(ID_jisuan, &Ctest4201View::Onjisuan)
END_MESSAGE_MAP()

// Ctest4201View ����/����

Ctest4201View::Ctest4201View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest4201View::~Ctest4201View()
{
}

BOOL Ctest4201View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest4201View ����

void Ctest4201View::OnDraw(CDC* /*pDC*/)
{
	Ctest4201Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest4201View ���

#ifdef _DEBUG
void Ctest4201View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest4201View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest4201Doc* Ctest4201View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest4201Doc)));
	return (Ctest4201Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest4201View ��Ϣ�������


void Ctest4201View::Onjisuan()
{
	Mydialog0 md0;
	md0.DoModal();
	// TODO: �ڴ���������������
}
