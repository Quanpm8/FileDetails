
// FileDetailsDlg.h : header file
//

#pragma once


// CFileDetailsDlg dialog
class CFileDetailsDlg : public CDialogEx
{
// Construction
public:
	CFileDetailsDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FILEDETAILS_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
protected:
	CMFCEditBrowseCtrl folder_browser_;
	CEdit file_name_;
protected:
	CListCtrl file_list_;
public:
	afx_msg void OnEnChangePathBrowser();
	afx_msg void OnBnClickedSearchButton();
};

