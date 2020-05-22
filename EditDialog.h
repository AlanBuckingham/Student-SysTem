#if !defined(AFX_EDITDIALOG_H__3293BF41_7C7D_41F6_85A7_A1371AB5BA21__INCLUDED_)
#define AFX_EDITDIALOG_H__3293BF41_7C7D_41F6_85A7_A1371AB5BA21__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// EditDialog.h : header file
//
#include "LinkButton.h"
/////////////////////////////////////////////////////////////////////////////
// CEditDialog dialog

class CEditDialog : public CDialog
{
// Construction
public:
	CEditDialog(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CEditDialog)
	enum { IDD = IDD_EDITDIALOG };
	CLinkButton	m_OkButton;
	CLinkButton	m_CancelButton;
	float	m_fchemistry;
	float	m_fenglish;
	float	m_fmaths;
	CString	m_pass;
	float	m_fphysical;
	float	m_fpolitic;
	long	m_xue;
	CString	m_strName;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEditDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CEditDialog)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


#endif // !defined(AFX_EDITDIALOG_H__3293BF41_7C7D_41F6_85A7_A1371AB5BA21__INCLUDED_)
