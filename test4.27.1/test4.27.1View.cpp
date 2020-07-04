
// test4.27.1View.cpp : Ctest4271View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test4.27.1.h"
#endif

#include "test4.27.1Doc.h"
#include "test4.27.1View.h"

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest4271View

IMPLEMENT_DYNCREATE(Ctest4271View, CView)

BEGIN_MESSAGE_MAP(Ctest4271View, CView)
	ON_COMMAND(ID_File, &Ctest4271View::OnFile)
END_MESSAGE_MAP()

// Ctest4271View ����/����

Ctest4271View::Ctest4271View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest4271View::~Ctest4271View()
{
}

BOOL Ctest4271View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest4271View ����

void Ctest4271View::OnDraw(CDC* pDC)
{
	Ctest4271Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->TextOutW(200, 300, pDoc->s);
	CString ss;
	ss.Format(_T("%d yes!"), 100 + pDoc->a);
	pDC->TextOutW(300, 300, ss);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest4271View ���

#ifdef _DEBUG
void Ctest4271View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest4271View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest4271Doc* Ctest4271View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest4271Doc)));
	return (Ctest4271Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest4271View ��Ϣ�������


void Ctest4271View::OnFile()
{
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK) {
		CString filename = cfd.GetPathName();
		ifstream ifs(filename);
		string s;
		CClientDC dc(this);
		int x = 20, y = 10;
		while (ifs>>s)
		{
			dc.TextOutW(x, y, filename);
			y = y + 30;
			CFileDialog cfd1(false);
			int r1 = cfd1.DoModal();
			if (r1 == IDOK) {
				ofstream ofs(cfd1.GetPathName());
				CString str = filename;
				ofs << CT2A(str) << endl;
			}

		}
	}
	
	// TODO: �ڴ���������������
}
