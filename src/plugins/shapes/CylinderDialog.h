#if !defined(AFX_CYLINDERDIALOG_H__04310D24_206B_11D4_8587_00A0CC627234__INCLUDED_)
#define AFX_CYLINDERDIALOG_H__04310D24_206B_11D4_8587_00A0CC627234__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// CylinderDialog.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCylinderDialog dialog

class CCylinderDialog : public CDialog
{
// Construction
public:
	CCylinderDialog(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CCylinderDialog)
	enum { IDD = IDD_CYLINDER_DIALOG };
	int		m_nAxis;
	int		m_nDepth;
	int		m_nNumSides;
	int		m_nSize;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCylinderDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CCylinderDialog)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CYLINDERDIALOG_H__04310D24_206B_11D4_8587_00A0CC627234__INCLUDED_)
