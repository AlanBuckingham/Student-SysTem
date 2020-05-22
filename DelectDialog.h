#if !defined(AFX_DELECTDIALOG_H__86F5F11B_B7EC_4434_86A1_0DD3110FF437__INCLUDED_)
#define AFX_DELECTDIALOG_H__86F5F11B_B7EC_4434_86A1_0DD3110FF437__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DelectDialog.h : header file
//
#include "LinkButton.h"
/////////////////////////////////////////////////////////////////////////////
// CDelectDialog dialog

class CDelectDialog : public CDialog
{
// Construction
public:
	CDelectDialog(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDelectDialog)
	enum { IDD = IDD_DELECTDIALOG };
	CLinkButton	m_OkButton;
	CLinkButton	m_CancelButton;
	long	m_nPass;
	long	m_nxue;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDelectDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDelectDialog)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};



#endif // !defined(AFX_DELECTDIALOG_H__86F5F11B_B7EC_4434_86A1_0DD3110FF437__INCLUDED_)
