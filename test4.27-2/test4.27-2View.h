
// test4.27-2View.h : Ctest4272View ��Ľӿ�
//

#pragma once


class Ctest4272View : public CView
{
protected: // �������л�����
	Ctest4272View();
	DECLARE_DYNCREATE(Ctest4272View)

// ����
public:
	Ctest4272Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest4272View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLookfile();
};

#ifndef _DEBUG  // test4.27-2View.cpp �еĵ��԰汾
inline Ctest4272Doc* Ctest4272View::GetDocument() const
   { return reinterpret_cast<Ctest4272Doc*>(m_pDocument); }
#endif

