
// text3.10-03View.h : Ctext31003View ��Ľӿ�
//

#pragma once


class Ctext31003View : public CView
{
protected: // �������л�����
	Ctext31003View();
	DECLARE_DYNCREATE(Ctext31003View)

// ����
public:
	Ctext31003Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext31003View();
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

#ifndef _DEBUG  // text3.10-03View.cpp �еĵ��԰汾
inline Ctext31003Doc* Ctext31003View::GetDocument() const
   { return reinterpret_cast<Ctext31003Doc*>(m_pDocument); }
#endif

