
// test4.13-1View.cpp : Ctest4131View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test4.13-1.h"
#endif

#include "test4.13-1Doc.h"
#include "test4.13-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
CPen blackpen(BS_SOLID, 1, RGB(0, 0, 0));
CPen balckpen1(BS_SOLID, 1, RGB(255, 255, 255));
// Ctest4131View

IMPLEMENT_DYNCREATE(Ctest4131View, CView)

BEGIN_MESSAGE_MAP(Ctest4131View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Ctest4131View ����/����

Ctest4131View::Ctest4131View()

	: Index(false)
	, p1(0)
{
	// TODO: �ڴ˴���ӹ������
	

	points[0] = CPoint(121, 100);
	points[1] = CPoint(367, 100);
	points[2] = CPoint(367, 245);
	points[3] = CPoint(121, 245);
	Cpen = &blackpen;
}

Ctest4131View::~Ctest4131View()
{
	
	Index = false;
	p1 = 0;
	
}

BOOL Ctest4131View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest4131View ����

void Ctest4131View::OnDraw(CDC* pDC)
{
	Ctest4131Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect rect;
	GetClientRect(&rect);
	pDC->SetWindowExt(rect.Width(), rect.Height());
	pDC->SetViewportExt(rect.Width(), -rect.Height());
	pDC->SetViewportOrg(rect.Width() / 2, rect.Height() / 2);

	CDC memDC;
	CBitmap NewBitmap, *pOldBitmap;
	memDC.CreateCompatibleDC(pDC); // ����һ������ʾDC���ݵ��ڴ�DC
	NewBitmap.CreateCompatibleBitmap(pDC, rect.Width(), rect.Height()); // ���������ڴ�λͼ 
	pOldBitmap = memDC.SelectObject(&NewBitmap); // ������λͼѡ���ڴ�DC
	memDC.FillSolidRect(rect, pDC->GetBkColor()); // ��ԭ������ɫ���ͻ����������Ǻ�ɫ 
	rect.OffsetRect(-rect.Width() / 2, -rect.Height() / 2); 
	memDC.SetWindowExt(rect.Width(), rect.Height());
	memDC.SetViewportExt(rect.Width(), -rect.Height()); 
	memDC.SetViewportOrg(rect.Width() / 2, rect.Height() / 2); 
	memDC.SetROP2(R2_COPYPEN); // ���û�ͼ��ʽ 
	DrawObject(&memDC, rect); // �����εĴ�������һ��������
	
    // ���ڴ�DC�е�λͼ�������豸DC 
	pDC->BitBlt(rect.left, rect.top, rect.Width(), rect.Height(), &memDC, -rect.Width() / 2, -rect.Height() / 2, SRCCOPY);
	memDC.SelectObject(pOldBitmap);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest4131View ���

#ifdef _DEBUG
void Ctest4131View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest4131View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest4131Doc* Ctest4131View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest4131Doc)));
	return (Ctest4131Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest4131View ��Ϣ�������


void Ctest4131View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	Index = false; // ��ʼ���һ�²����ƶ�
	if (points[0].x <= point.x && point.x <= points[2].x &&
		points[0].y <= point.y && point.y <= points[2].y) 
	{
		p1 = point;
	   Index = true; // ���һ�¿����ƶ��� 
	   Cpen = &balckpen1;
	   SetCapture(); // ������겶�� 
	   SetCursor(LoadCursor(NULL, IDC_SIZEALL)); // ���ù��Ϊ�˸�����
	} // ����OnDraw��������̬Ч�� 
	Invalidate(FALSE);

	CView::OnLButtonDown(nFlags, point);
}


void Ctest4131View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (true == Index) {
		Cpen = &blackpen; // �޸Ļ�����ɫΪ��ɫ
		p1 = NULL; // ����ƶ���Ϣ 
	}
	ReleaseCapture(); // �ͷ���겶�� 
	Index = false; // ���һ�´�ʱ�������ƶ��� 
	// ����OnDraw��������̬Ч�� 
	Invalidate(FALSE);

	CView::OnLButtonUp(nFlags, point);
}


void Ctest4131View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (true == Index) {
		SetCursor(LoadCursor(NULL, IDC_SIZEALL)); // ���ù��Ϊ�˸����� 
												  // ���õ�ǰ���λ�úͳ�ʼ��¼��λ�����޸ľ��ε�ÿ�����㣬����ͼ����궯��Ч�� 
		for (int i = 0; i < 4; i++) { points[i] += point - p1; } p1 = point;
	} // ����OnDraw��������̬Ч�� 
	Invalidate(FALSE);

	CView::OnMouseMove(nFlags, point);
}

void Ctest4131View::DrawObject(CDC * pDC, const CRect & rect)
{
	int i = 0;
	CPen *oldPen = pDC->SelectObject(Cpen);
	pDC->Rectangle(CRect(trans(points[0], rect), trans(points[2], rect)));
	pDC->SelectObject(oldPen);
}
