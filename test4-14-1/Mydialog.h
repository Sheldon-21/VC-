#pragma once
#include "afxwin.h"


// Mydialog �Ի���

class Mydialog : public CDialogEx
{
	DECLARE_DYNAMIC(Mydialog)

public:
	Mydialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Mydialog();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CListBox Lbox1;
	CString s;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
	CString str;
	afx_msg void OnBnClickedButton2();
};
