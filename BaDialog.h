#if !defined(AFX_BADIALOG_H__5E727E52_D464_4DD6_9DA1_CD85BF618638__INCLUDED_)
#define AFX_BADIALOG_H__5E727E52_D464_4DD6_9DA1_CD85BF618638__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BaDialog.h : header file
//
#include "DRecordset.h"
#include "BRecordset.h"
#include "TRecordset.h"
#include "Addialog.h"
#include  "DelectDialog.h"
#include  "FinDialog.h"
#include  "EditDialog.h"
#include "LinkButton.h"
#include "CaDialog.h"

/////////////////////////////////////////////////////////////////////////////
// CBaDialog dialog

class CBaDialog : public CDialog
{
// Construction
public:
  	CBaDialog(CWnd* pParent = NULL);   // standard constructor
    DECLARE_SERIAL(CBaDialog)
    void Sort(BOOL isAsc=TRUE,int secol=1);
	void Save();
// Dialog Data
	//{{AFX_DATA(CBaDialog)
	enum { IDD = IDD_BADIALOG };
	CLinkButton	m_ExportButtom;
	CLinkButton	m_StaButton;
	CLinkButton	m_DelButton;
	CLinkButton	m_FindButton;
	CLinkButton	m_EditButton;
	CLinkButton	m_AllButton;
	CLinkButton	m_AddButton;
	CComboBox	m_cob;
	CListCtrl	m_ListCtrlb;
	CListCtrl	m_ListCtrll;
	CListCtrl	m_ListCtrlx;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBaDialog)
	public:
	virtual void Serialize(CArchive& ar);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
		
	int Show();
	void display();
	void exhibit();
	void Enable(BOOL p);
	CString Select();
	void  Equal();
	void Xuan();
protected:

	// Generated message map functions
	//{{AFX_MSG(CBaDialog)
	virtual BOOL OnInitDialog();
	afx_msg void OnStatr();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnAdd();
	afx_msg void OnDelect();
	afx_msg void OnFind();
	afx_msg void OnAll();
	afx_msg void OnEdit();
	afx_msg void OnColumnclickList3(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg LRESULT OnCreateTabel(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnDelTabel(WPARAM wParam, LPARAM lParam);
	afx_msg void OnSelchangeCombo1();
	afx_msg void OnExport();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CDRecordset m_Set;
	CBRecordset m_bSet;
	CTRecordset m_tSet;
	int m_nRecordCount;
	int m_Timer;
	CString m_Getstring;
	BOOL Selec;
    BOOL m_bIsAsc;
	BOOL m_bS;
    CString m_Getstring1,m_Getstring2;
	CString  lpszFile;
    CString sPath;
public:
    	CString m_Three,m_Four ,m_Five,m_Six,m_Seven,m_Eight;

};



#endif // !defined(AFX_BADIALOG_H__5E727E52_D464_4DD6_9DA1_CD85BF618638__INCLUDED_)
