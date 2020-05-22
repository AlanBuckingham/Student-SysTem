#if !defined(AFX_BRECORDSET_H__38A3ADB4_677F_42F4_AEC9_DFF380B86F8C__INCLUDED_)
#define AFX_BRECORDSET_H__38A3ADB4_677F_42F4_AEC9_DFF380B86F8C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BRecordset.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CBRecordset recordset

class CBRecordset : public CRecordset
{
public:
	CBRecordset(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CBRecordset)

// Field/Param Data
	//{{AFX_FIELD(CBRecordset, CRecordset)
	CString	m_column1;
	float	m_column2;
	float	m_column3;
	long	m_column4;
	long	m_column5;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBRecordset)
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


#endif // !defined(AFX_BRECORDSET_H__38A3ADB4_677F_42F4_AEC9_DFF380B86F8C__INCLUDED_)
