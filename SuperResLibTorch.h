
// SuperResLibTorch.h : main header file for the SuperResLibTorch application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CSuperResLibTorchApp:
// See SuperResLibTorch.cpp for the implementation of this class
//

class CSuperResLibTorchApp : public CWinApp
{
public:
	CSuperResLibTorchApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CSuperResLibTorchApp theApp;
