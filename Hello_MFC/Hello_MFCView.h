
// Hello_MFCView.h : interface of the CHello_MFCView class
//

#pragma once


class CHello_MFCView : public CEditView
{
protected: // create from serialization only
	CHello_MFCView();
	DECLARE_DYNCREATE(CHello_MFCView)

// Attributes
public:
	CHello_MFCDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CHello_MFCView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Hello_MFCView.cpp
inline CHello_MFCDoc* CHello_MFCView::GetDocument() const
   { return reinterpret_cast<CHello_MFCDoc*>(m_pDocument); }
#endif

