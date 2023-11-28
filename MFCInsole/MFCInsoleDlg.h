
// MFCInsoleDlg.h: файл заголовка
//

#pragma once
#include <random>
#include <string>
#include <vector>
#include <map>
#include <stdlib.h>
#include <stdio.h>
#include <Winsock2.h>
#include <Ws2bth.h>
#include <BluetoothAPIs.h>

#pragma comment(lib, "Ws2_32.lib")
#pragma comment(lib, "Bthprops.lib")
// Диалоговое окно CMFCInsoleDlg
class CMFCInsoleDlg : public CDialogEx
{
// Создание
public:
	CMFCInsoleDlg(CWnd* pParent = nullptr);	// стандартный конструктор

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCINSOLE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV


// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnStnClickedStatic31();
};
