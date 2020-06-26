
// week-11View.h : Cweek11View ��Ľӿ�
//

#pragma once

class Cweek11Set;

class Cweek11View : public CRecordView
{
protected: // �������л�����
	Cweek11View();
	DECLARE_DYNCREATE(Cweek11View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK11_FORM };
#endif
	Cweek11Set* m_pSet;

// ����
public:
	Cweek11Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~Cweek11View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	CString name;
	CString number;
	CString age;
	CString job;
	CString phone;
};

#ifndef _DEBUG  // week-11View.cpp �еĵ��԰汾
inline Cweek11Doc* Cweek11View::GetDocument() const
   { return reinterpret_cast<Cweek11Doc*>(m_pDocument); }
#endif

