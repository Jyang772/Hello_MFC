
// Hello_MFC.h : main header file for the Hello_MFC application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CHello_MFCApp:
// See Hello_MFC.cpp for the implementation of this class
//

class CHello_MFCApp : public CWinApp
{
public:
	CHello_MFCApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CHello_MFCApp theApp;
