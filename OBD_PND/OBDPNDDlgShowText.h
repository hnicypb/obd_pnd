#pragma once

#include "OBDPNDDlgBase.h"

// COBDPNDDlgShowText 对话框

class COBDPNDDlgShowText : public CDialog,public COBDPNDDlgBase
{
	DECLARE_DYNAMIC(COBDPNDDlgShowText)

public:
	COBDPNDDlgShowText(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~COBDPNDDlgShowText();

// 对话框数据
	enum { IDD = IDD_OBD_PND_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual BOOL OnInitDialog();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnPaint();
	afx_msg void OnTimer(UINT_PTR nIDEvent);

	DECLARE_MESSAGE_MAP()
public:
	//初始化界面位置，字体等信息
	void fInitUI();
	void fSetTextList(vector<CString> vecList);

private:
	COLORREF	m_clrText;
	CFont		m_fontText;
	CRect		m_rectText;
	CString		m_strText;

	vector<CString> m_vecText;
	int			m_iTextIndex;

};
