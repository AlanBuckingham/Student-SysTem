// lhwyDlg.h : header file
//

#if !defined(AFX_LHWYDLG_H__9CFCBDE2_1CDB_4FBD_9E6B_504C24C1E81B__INCLUDED_)
#define AFX_LHWYDLG_H__9CFCBDE2_1CDB_4FBD_9E6B_504C24C1E81B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CLhwyDlg dialog
#include "TabSheet.h"
#include "BaDialog.h"
#include "NaDilalog.h"
#include "CaDialog.h"
class CLhwyDlg : public CDialog
{
// Construction
public:
	CLhwyDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CLhwyDlg)
	enum { IDD = IDD_LHWY_DIALOG };
	CTabSheet	m_Tab;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLhwyDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;



	// Generated message map functions
	//{{AFX_MSG(CLhwyDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	CBaDialog  m_bdlg;
	CNaDilalog  m_ndlg;
	CCaDialog  m_cdlg;
	
};



#endif // !defined(AFX_LHWYDLG_H__9CFCBDE2_1CDB_4FBD_9E6B_504C24C1E81B__INCLUDED_)
