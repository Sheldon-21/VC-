
// test4.27.1View.h : Ctest4271View ��Ľӿ�
//

#pragma once


class Ctest4271View : public CView
{
protected: // �������л�����
	Ctest4271View();
	DECLARE_DYNCREATE(Ctest4271View)

// ����
public:
	Ctest4271Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest4271View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFile();
};

#ifndef _DEBUG  // test4.27.1View.cpp �еĵ��԰汾
inline Ctest4271Doc* Ctest4271View::GetDocument() const
   { return reinterpret_cast<Ctest4271Doc*>(m_pDocument); }
#endif

