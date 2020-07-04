
// test4.27-2View.cpp : Ctest4272View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test4.27-2.h"
#endif

#include "test4.27-2Doc.h"
#include "test4.27-2View.h"
#include<string>
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest4272View

IMPLEMENT_DYNCREATE(Ctest4272View, CView)

BEGIN_MESSAGE_MAP(Ctest4272View, CView)
	ON_COMMAND(ID_LookFile, &Ctest4272View::OnLookfile)
END_MESSAGE_MAP()

// Ctest4272View ����/����

Ctest4272View::Ctest4272View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest4272View::~Ctest4272View()
{
}

BOOL Ctest4272View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest4272View ����

void Ctest4272View::OnDraw(CDC* /*pDC*/)
{
	Ctest4272Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest4272View ���

#ifdef _DEBUG
void Ctest4272View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest4272View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest4272Doc* Ctest4272View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest4272Doc)));
	return (Ctest4272Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest4272View ��Ϣ�������


void Ctest4272View::OnLookfile()
{
	// TODO: �ڴ���������������
	CString str;
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK) {
		CString path = cfd.GetPathName();
		CStdioFile file;
		if(!file.Open(path, CFile::modeRead))return;
		
		while (file.ReadString(str)) {
			CClientDC dc(this);
			dc.TextOutW(400, 300, _T("s"));
		}
		file.Close();
		UpdateData(false);
		
	}
	CClientDC dc(this);
	dc.TextOutW(200, 400, str);
}
