﻿
// Practice2_1View.h: CPractice2_1View 클래스의 인터페이스
//

#pragma once


class CPractice2_1View : public CView
{
protected: // serialization에서만 만들어집니다.
	CPractice2_1View() noexcept;
	DECLARE_DYNCREATE(CPractice2_1View)

// 특성입니다.
public:
	CPractice2_1Doc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 구현입니다.
public:
	virtual ~CPractice2_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	CString m_strWindowSize;
	afx_msg void OnSize(UINT nType, int cx, int cy);
	CString m_strOutput;
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	bool m_bDrag;
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	CPoint m_ptMouseMove;
	CString m_strPointText;
};

#ifndef _DEBUG  // Practice2_1View.cpp의 디버그 버전
inline CPractice2_1Doc* CPractice2_1View::GetDocument() const
   { return reinterpret_cast<CPractice2_1Doc*>(m_pDocument); }
#endif

