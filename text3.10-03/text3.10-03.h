
// text3.10-03.h : text3.10-03 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Ctext31003App:
// �йش����ʵ�֣������ text3.10-03.cpp
//

class Ctext31003App : public CWinApp
{
public:
	Ctext31003App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Ctext31003App theApp;
