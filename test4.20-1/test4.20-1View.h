
// test4.20-1View.h : Ctest4201View ��Ľӿ�
//

#pragma once


class Ctest4201View : public CView
{
protected: // �������л�����
	Ctest4201View();
	DECLARE_DYNCREATE(Ctest4201View)

// ����
public:
	Ctest4201Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest4201View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onjisuan();
};

#ifndef _DEBUG  // test4.20-1View.cpp �еĵ��԰汾
inline Ctest4201Doc* Ctest4201View::GetDocument() const
   { return reinterpret_cast<Ctest4201Doc*>(m_pDocument); }
#endif

