#include "stdafx.h"
#include "CServerSock.h"
#include "ChatProgram.h"


CServerSock::CServerSock()
{
}


CServerSock::~CServerSock()
{
}


void CServerSock::OnAccept(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	((CChatProgramApp*)AfxGetApp())->Accept();

	CAsyncSocket::OnAccept(nErrorCode);
}

void CServerSock::OnConnect(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	if (nErrorCode == 0)
	{
		AfxMessageBox(_T("접속 성공."));
	}
	else
	{
		CString str;
		str.Format(_T("접속 실패 (에러 코드: %d)"), nErrorCode);
		AfxMessageBox(str);
	}

	CAsyncSocket::OnConnect(nErrorCode);
}
