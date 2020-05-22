// lhwy.h : main header file for the LHWY application
//

#if !defined(AFX_LHWY_H__DA094977_3477_43F9_8735_574B86FD778D__INCLUDED_)
#define AFX_LHWY_H__DA094977_3477_43F9_8735_574B86FD778D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CLhwyApp:
// See lhwy.cpp for the implementation of this class
//

class CLhwyApp : public CWinApp
{
public:
	CLhwyApp();
    
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLhwyApp)
	public:
	virtual BOOL InitInstance();

	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CLhwyApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
   
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
	public:
	CDatabase m_DB;

};

extern CLhwyApp theApp;
/////////////////////////////////////////////////////////////////////////////



#endif // !defined(AFX_LHWY_H__DA094977_3477_43F9_8735_574B86FD778D__INCLUDED_)
