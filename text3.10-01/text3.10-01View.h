
// text3.10-01View.h : Ctext31001View ��Ľӿ�
//

#pragma once


class Ctext31001View : public CView
{
protected: // �������л�����
	Ctext31001View();
	DECLARE_DYNCREATE(Ctext31001View)

// ����
public:
	Ctext31001Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext31001View();
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
};

#ifndef _DEBUG  // text3.10-01View.cpp �еĵ��԰汾
inline Ctext31001Doc* Ctext31001View::GetDocument() const
   { return reinterpret_cast<Ctext31001Doc*>(m_pDocument); }
#endif

