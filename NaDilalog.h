#if !defined(AFX_NADILALOG_H__0ED6AFCE_E31D_4AA7_A4D8_F12F4DA0780D__INCLUDED_)
#define AFX_NADILALOG_H__0ED6AFCE_E31D_4AA7_A4D8_F12F4DA0780D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// NaDilalog.h : header file
//
#include "DRecordset.h"
#include "BRecordset.h"
#include "LinkButton.h"
#include  "FinDialog.h"
/////////////////////////////////////////////////////////////////////////////
// CNaDilalog dialog

class CNaDilalog : public CDialog
{
// Construction
public:
	CNaDilalog(CWnd* pParent = NULL);   // standard constructor
    int Show();
	void Select();
   	void Sel();
	void Fin();
	void Sql();
	void Vaul();
	void Beg();
	void Att();
// Dialog Data
	//{{AFX_DATA(CNaDilalog)
	enum { IDD = IDD_NADIALOG };
	CLinkButton	m_ShowButton;
	CListCtrl	m_ListCtrlj;
	CListCtrl	m_ListCtrlx;
	CLinkButton	m_FindButton;
	CLinkButton	m_AllButton;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNaDilalog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CNaDilalog)
	virtual BOOL OnInitDialog();
	afx_msg void OnAll();
	afx_msg void OnFind();
	afx_msg void OnShow();
	
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

	CDRecordset m_Set;
	CBRecordset m_bSet;
	
    int m_nRecordCount;
    CFinDialog dlg;
    BOOL JS;
	float score[5][5];

};



#endif // !defined(AFX_NADILALOG_H__0ED6AFCE_E31D_4AA7_A4D8_F12F4DA0780D__INCLUDED_)
