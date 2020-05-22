#if !defined(AFX_ADDIALOG_H__E847EA7C_0FDF_4639_B930_0110843A1523__INCLUDED_)
#define AFX_ADDIALOG_H__E847EA7C_0FDF_4639_B930_0110843A1523__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Addialog.h : header file
//
#include "LinkButton.h"
/////////////////////////////////////////////////////////////////////////////
// CAddialog dialog

class CAddialog : public CDialog
{
// Construction
public:
	CAddialog(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CAddialog)
	enum { IDD = IDD_ADDDIALOG };
	CLinkButton	m_OkButton;
	CLinkButton	m_CancelButton;
	float	m_fchemistry;
	float	m_fenglish;
	float	m_fmaths;
	CString	m_strName;
	float	m_fphysical;
	int		m_nxue;
	float	m_fpolitic;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAddialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CAddialog)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};



#endif // !defined(AFX_ADDIALOG_H__E847EA7C_0FDF_4639_B930_0110843A1523__INCLUDED_)
