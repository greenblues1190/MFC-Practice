#include "stdafx.h"
#include "CClientSock.h"
#include "ChatProgram.h"


CClientSock::CClientSock()
{
}


CClientSock::~CClientSock()
{
}


void CClientSock::OnReceive(int nErrorCode)
{
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
	((CChatProgramApp*)AfxGetApp())->ReceiveData();

	CAsyncSocket::OnReceive(nErrorCode);
}


void CClientSock::OnClose(int nErrorCode)
{
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
	((CChatProgramApp*)AfxGetApp())->CloseChild();

	CAsyncSocket::OnClose(nErrorCode);
}
