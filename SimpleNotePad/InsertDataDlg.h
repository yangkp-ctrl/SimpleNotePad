﻿#pragma once


// CInsertDataDlg 对话框

class CInsertDataDlg : public CDialog
{
	DECLARE_DYNAMIC(CInsertDataDlg)

public:
	CInsertDataDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CInsertDataDlg();

	unsigned int GetInsertAddress() const { return m_address; }
	unsigned int GetInsertSize() const { return m_size; }

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_INSERT_DATA_DIALOG };
#endif

private:
	unsigned int m_address;
	unsigned int m_size;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
	virtual void OnOK();
};
