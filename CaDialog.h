#if !defined(AFX_CADIALOG_H__845503DA_D566_4E27_BC0C_1781A76744D4__INCLUDED_)
#define AFX_CADIALOG_H__845503DA_D566_4E27_BC0C_1781A76744D4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// CaDialog.h : header file
//
#include "DRecordset.h"
#include "TRecordset.h"
#include "BRecordset.h"
#include "LinkButton.h"
#define WM_CREATETABEL  WM_USER+100 
#define WM_DELTABEL      WM_USER+101
//#include "BaDialog.h"
/////////////////////////////////////////////////////////////////////////////
class CBaDialog;

class CCaDialog : public CDialog
{
// Construction
public:
	CCaDialog(CWnd* pParent=NULL);
   // standard constructor

    //CCaDialog(CBaDialog *pdlg);
// Dialog Data
	//{{AFX_DATA(CCaDialog)
	enum { IDD = IDD_CADIALOG };
	CLinkButton	m_DelectObject;
	CLinkButton	m_Dele;
	CLinkButton	m_DelObject;
	CLinkButton	m_AddObject;
	CComboBox	m_comban;
	CComboBox	m_comobject;
	CComboBox	m_Com;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCaDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CCaDialog)
	virtual BOOL OnInitDialog();
	afx_msg void OnButton1();
	afx_msg void OnDele();
	afx_msg void OnAddobject();
	afx_msg void OnDelectobject();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
 CListCtrl pmyListCtrl;
  CDRecordset m_Set;
   CBRecordset m_bSet;
  CTRecordset m_tSet;
  CWnd *pp;
 
	


};



#endif // !defined(AFX_CADIALOG_H__845503DA_D566_4E27_BC0C_1781A76744D4__INCLUDED_)
