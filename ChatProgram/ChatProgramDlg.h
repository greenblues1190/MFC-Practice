
// ChatProgramDlg.h: 헤더 파일
//

#pragma once


// CChatProgramDlg 대화 상자
class CChatProgramDlg : public CDialogEx
{
// 생성입니다.
public:
	CChatProgramDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CHATPROGRAM_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	int m_nChatMode;
	CIPAddressCtrl m_IPAddress;
	CListBox m_listChat;
	CString m_strMyIP;
	CString m_strOtherIP;
	void ReceiveData(CString strReceive);
	void Accept(CString strSock);
	afx_msg void OnClickedRadioServer();
	afx_msg void OnRadioClient();
	afx_msg void OnClickedButtonConnect();
	afx_msg void OnClickedButtonSend();
};
