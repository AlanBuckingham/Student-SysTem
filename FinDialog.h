#if !defined(AFX_FINDIALOG_H__697C5DF3_E383_47B4_8C1A_1925F536CF51__INCLUDED_)
#define AFX_FINDIALOG_H__697C5DF3_E383_47B4_8C1A_1925F536CF51__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FinDialog.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CFinDialog dialog
#include "LinkButton.h"
class CFinDialog : public CDialog
{
// Construction
public:
	CFinDialog(CWnd* pParent = NULL);   // standard constructor
    CString m_Getstring1,m_Getstring2;
// Dialog Data
	//{{AFX_DATA(CFinDialog)
	enum { IDD = IDD_FINDDIALOG };
	CLinkButton	m_OkButton;
	CLinkButton	m_CancelButton;
	CComboBox	m_com;
	CComboBox	m_cob;
	float	m_find;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFinDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CFinDialog)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};



#endif // !defined(AFX_FINDIALOG_H__697C5DF3_E383_47B4_8C1A_1925F536CF51__INCLUDED_)
