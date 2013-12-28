
// Hello_MFCView.cpp : implementation of the CHello_MFCView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Hello_MFC.h"
#endif

#include "Hello_MFCDoc.h"
#include "Hello_MFCView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CHello_MFCView

IMPLEMENT_DYNCREATE(CHello_MFCView, CEditView)

BEGIN_MESSAGE_MAP(CHello_MFCView, CEditView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CEditView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CEditView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CEditView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CHello_MFCView construction/destruction

CHello_MFCView::CHello_MFCView()
{
	// TODO: add construction code here

}

CHello_MFCView::~CHello_MFCView()
{
}

BOOL CHello_MFCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	BOOL bPreCreated = CEditView::PreCreateWindow(cs);
	cs.style &= ~(ES_AUTOHSCROLL|WS_HSCROLL);	// Enable word-wrapping

	return bPreCreated;
}


// CHello_MFCView printing

BOOL CHello_MFCView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default CEditView preparation
	return CEditView::OnPreparePrinting(pInfo);
}

void CHello_MFCView::OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo)
{
	// Default CEditView begin printing
	CEditView::OnBeginPrinting(pDC, pInfo);
}

void CHello_MFCView::OnEndPrinting(CDC* pDC, CPrintInfo* pInfo)
{
	// Default CEditView end printing
	CEditView::OnEndPrinting(pDC, pInfo);
}


// CHello_MFCView diagnostics

#ifdef _DEBUG
void CHello_MFCView::AssertValid() const
{
	CEditView::AssertValid();
}

void CHello_MFCView::Dump(CDumpContext& dc) const
{
	CEditView::Dump(dc);
}

CHello_MFCDoc* CHello_MFCView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHello_MFCDoc)));
	return (CHello_MFCDoc*)m_pDocument;
}
#endif //_DEBUG


// CHello_MFCView message handlers
