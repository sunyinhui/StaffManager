#pragma once
#include "mysql.h"
#include "SQLUtils.h"
// CAddDlg �Ի���

class CAddDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CAddDlg)

public:
	CAddDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CAddDlg();

// �Ի�������
	enum { IDD = IDD_ADD_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedAdd();
	afx_msg void OnBnClickedResetButton();
	virtual BOOL OnInitDialog();
	BOOL checkNo(MYSQL mysql,SQLUtils* sqlutils,CString staff_no);
	BOOL checkTel(MYSQL mysql,SQLUtils* sqlutils,CString staff_tel);
};