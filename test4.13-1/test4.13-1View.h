
// test4.13-1View.h : Ctest4131View ��Ľӿ�
//

#pragma once


class Ctest4131View : public CView
{
protected: // �������л�����
	Ctest4131View();
	DECLARE_DYNCREATE(Ctest4131View)

// ����
public:
	
	Ctest4131Doc* GetDocument() const;
	

// ����
public:
	
       #define trans(p1,rect) CPoint(long((p1.x+0.5)/1)-rect.Width()/2,long((p1.y+0.5)/1)-rect.Height()/2)

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	
	virtual ~Ctest4131View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	bool Index;
	CPoint p1;
	CPen *Cpen;
	CPoint points[4];
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	void Ctest4131View::DrawObject(CDC *pDC, const CRect& rect);
};

#ifndef _DEBUG  // test4.13-1View.cpp �еĵ��԰汾
inline Ctest4131Doc* Ctest4131View::GetDocument() const
   { return reinterpret_cast<Ctest4131Doc*>(m_pDocument); }
#endif

