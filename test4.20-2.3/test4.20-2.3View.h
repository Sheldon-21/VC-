
// test4.20-2.3View.h : Ctest42023View ��Ľӿ�
//

#pragma once


class Ctest42023View : public CView
{
protected: // �������л�����
	Ctest42023View();
	DECLARE_DYNCREATE(Ctest42023View)

// ����
public:
	Ctest42023Doc* GetDocument() const;

// ����
public:CRect rect;
	   

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest42023View();
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
};

#ifndef _DEBUG  // test4.20-2.3View.cpp �еĵ��԰汾
inline Ctest42023Doc* Ctest42023View::GetDocument() const
   { return reinterpret_cast<Ctest42023Doc*>(m_pDocument); }
#endif

