// Mydialog1.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "test4.20-1.h"
#include "Mydialog1.h"
#include "afxdialogex.h"
#include"Mydialog0.h"

// Mydialog1 �Ի���

IMPLEMENT_DYNAMIC(Mydialog1, CDialogEx)

Mydialog1::Mydialog1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, z(0)
{

}

Mydialog1::~Mydialog1()
{
}

void Mydialog1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, z);
}


BEGIN_MESSAGE_MAP(Mydialog1, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &Mydialog1::OnEnChangeEdit1)
END_MESSAGE_MAP()


// Mydialog1 ��Ϣ�������



void Mydialog1::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	Mydialog0 *pdlg = Mydialog0::dlg;
	UpdateData(false);
}


BOOL Mydialog1::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	this->UpdateData(true);
	Mydialog0 *pdlg = Mydialog0::dlg;
	z = pdlg->sum;
	UpdateData(false);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
