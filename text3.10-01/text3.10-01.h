
// text3.10-01.h : text3.10-01 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Ctext31001App:
// �йش����ʵ�֣������ text3.10-01.cpp
//

class Ctext31001App : public CWinApp
{
public:
	Ctext31001App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Ctext31001App theApp;
