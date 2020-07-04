// Mydialog0.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "test4.20-1.h"
#include "Mydialog0.h"
#include "afxdialogex.h"
#include"Mydialog1.h"

// Mydialog0 �Ի���
Mydialog0 *Mydialog0::dlg = NULL;
IMPLEMENT_DYNAMIC(Mydialog0, CDialogEx)

Mydialog0::Mydialog0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, n(0)
{

}

Mydialog0::~Mydialog0()
{
}

void Mydialog0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDV_MinMaxDouble(pDX, x, 1, 1000);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDV_MinMaxDouble(pDX, y, 1, 1000);
	DDX_Text(pDX, IDC_EDIT3, n);
}


BEGIN_MESSAGE_MAP(Mydialog0, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Mydialog0::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &Mydialog0::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON2, &Mydialog0::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON6, &Mydialog0::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON4, &Mydialog0::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON7, &Mydialog0::OnBnClickedButton7)
END_MESSAGE_MAP()


// Mydialog0 ��Ϣ�������



void Mydialog0::OnBnClickedButton1(){
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Mydialog1 md1;
	this->UpdateData(true);
	 sum = x - y;
	 md1.DoModal();
	UpdateData(false);
}


void Mydialog0::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Mydialog1 md1;
	
	this->UpdateData(true);
    sum = x + y;
	md1.DoModal();
	UpdateData(false);
	
}


void Mydialog0::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Mydialog1 md1;
	this->UpdateData(true);
	 sum = x / y;
	 md1.z = sum;
	 md1.DoModal();
	UpdateData(false);
}


void Mydialog0::OnBnClickedButton6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Mydialog1 md1;
	this->UpdateData(true);
	sum = 1 / n;
	md1.z = sum;
	md1.DoModal();
	UpdateData(false);
}


void Mydialog0::OnBnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Mydialog1 md1;
	this->UpdateData(true);
	sum = x * y;
	md1.z = sum;
	md1.DoModal();
	UpdateData(false);
}


void Mydialog0::OnBnClickedButton7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Mydialog1 md1;
	this->UpdateData(true);
	sum=sqrt(n);
	md1.z = sum;
	md1.DoModal();
	UpdateData(false);
}


BOOL Mydialog0::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	dlg = this;
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
