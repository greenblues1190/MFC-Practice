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
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
	((CChatProgramApp*)AfxGetApp())->Accept();

	CAsyncSocket::OnAccept(nErrorCode);
}

void CServerSock::OnConnect(int nErrorCode)
{
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
	if (nErrorCode == 0)
	{
		AfxMessageBox(_T("���� ����."));
	}
	else
	{
		CString str;
		str.Format(_T("���� ���� (���� �ڵ�: %d)"), nErrorCode);
		AfxMessageBox(str);
	}

	CAsyncSocket::OnConnect(nErrorCode);
}
