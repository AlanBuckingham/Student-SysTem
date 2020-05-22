#if !defined(AFX_TRECORDSET_H__F47EB36E_CB8A_4A0B_9530_B20D0477D9C7__INCLUDED_)
#define AFX_TRECORDSET_H__F47EB36E_CB8A_4A0B_9530_B20D0477D9C7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TRecordset.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CTRecordset recordset

class CTRecordset : public CRecordset
{
public:
	CTRecordset(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CTRecordset)

// Field/Param Data
	//{{AFX_FIELD(CTRecordset, CRecordset)
	CString	m_column1;
	CString	m_column2;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTRecordset)
	public:
	virtual CString GetDefaultConnect();    // Default connection string
	virtual CString GetDefaultSQL();    // Default SQL for Recordset
	virtual void DoFieldExchange(CFieldExchange* pFX);  // RFX support
	//}}AFX_VIRTUAL

// Implementation
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
};



#endif // !defined(AFX_TRECORDSET_H__F47EB36E_CB8A_4A0B_9530_B20D0477D9C7__INCLUDED_)
