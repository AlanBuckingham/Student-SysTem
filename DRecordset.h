#if !defined(AFX_DRECORDSET_H__E42CD15B_04C1_4C06_8341_C2F6274D05D8__INCLUDED_)
#define AFX_DRECORDSET_H__E42CD15B_04C1_4C06_8341_C2F6274D05D8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DRecordset.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDRecordset recordset

class CDRecordset : public CRecordset
{
public:
	CDRecordset(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CDRecordset)

// Field/Param Data
	//{{AFX_FIELD(CDRecordset, CRecordset)
	long	m_column1;
	CString	m_column2;
	float	m_column3;
	float	m_column4;
	float	m_column5;
	float	m_column6;
	float	m_column7;
	float	m_column8;
	float	m_column9;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDRecordset)
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


#endif // !defined(AFX_DRECORDSET_H__E42CD15B_04C1_4C06_8341_C2F6274D05D8__INCLUDED_)
