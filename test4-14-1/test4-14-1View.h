
// test4-14-1View.h : Ctest4141View ��Ľӿ�
//

#pragma once


class Ctest4141View : public CView
{
protected: // �������л�����
	Ctest4141View();
	DECLARE_DYNCREATE(Ctest4141View)

// ����
public:
	Ctest4141Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest4141View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void Ondialog();
};

#ifndef _DEBUG  // test4-14-1View.cpp �еĵ��԰汾
inline Ctest4141Doc* Ctest4141View::GetDocument() const
   { return reinterpret_cast<Ctest4141Doc*>(m_pDocument); }
#endif

