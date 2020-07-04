// Mydialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "test4-14-1.h"
#include "Mydialog.h"
#include "afxdialogex.h"


// Mydialog �Ի���

IMPLEMENT_DYNAMIC(Mydialog, CDialogEx)

Mydialog::Mydialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, str(_T(""))
{

}

Mydialog::~Mydialog()
{
}

void Mydialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, Lbox1);
	DDX_Text(pDX, IDC_EDIT1, str);
}


BEGIN_MESSAGE_MAP(Mydialog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Mydialog::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Mydialog::OnBnClickedButton2)
END_MESSAGE_MAP()


// Mydialog ��Ϣ�������


BOOL Mydialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	Lbox1.AddString(_T("a�ļ�"));
	Lbox1.AddString(_T("b�ļ�"));
	Lbox1.AddString(_T("c�ļ�"));
	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	s = "";
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void Mydialog::OnBnClickedButton1()
{
	int n=Lbox1.GetCurSel();
	Lbox1.GetText(n, s);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void Mydialog::OnBnClickedButton2()
{
	this->UpdateData(true);
	str = s;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
