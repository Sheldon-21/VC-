
// test4.20-2.3.h : test4.20-2.3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Ctest42023App:
// �йش����ʵ�֣������ test4.20-2.3.cpp
//

class Ctest42023App : public CWinApp
{
public:
	Ctest42023App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Ctest42023App theApp;
