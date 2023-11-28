
// MFCInsoleDlg.cpp: файл реализации
//
#include "pch.h"
#include "framework.h"
#include "MFCInsole.h"
#include "MFCInsoleDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
using namespace std;
const int max_number_sensors = 36;

CStatic* im1; CStatic* im2; CStatic* im3; CStatic* im4;
CStatic* im5; CStatic* im6; CStatic* im7; CStatic* im8;
CStatic* im9; CStatic* im10; CStatic* im11; CStatic* im12;
CStatic* im13; CStatic* im14; CStatic* im15; CStatic* im16;
CStatic* im17; CStatic* im18; 
CStatic* im19; CStatic* im20;CStatic* im21; CStatic* im22;
CStatic* im23; CStatic* im24;CStatic* im25; CStatic* im26;
CStatic* im27; CStatic* im28;CStatic* im29; CStatic* im30;
CStatic* im31; CStatic* im32;CStatic* im33; CStatic* im34;
CStatic* im35; CStatic* im36;

std::vector<CStatic*> im;


int selectId(int id, int state);

// Диалоговое окно CMFCInsoleDlg
CMFCInsoleDlg::CMFCInsoleDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCINSOLE_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCInsoleDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMFCInsoleDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCInsoleDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// Обработчики сообщений CMFCInsoleDlg

BOOL CMFCInsoleDlg::OnInitDialog()
{
	im1 = (CStatic*)GetDlgItem(IDC_STATIC1);im2 = (CStatic*)GetDlgItem(IDC_STATIC2);
	im3 = (CStatic*)GetDlgItem(IDC_STATIC3);im4 = (CStatic*)GetDlgItem(IDC_STATIC4);
	im5 = (CStatic*)GetDlgItem(IDC_STATIC5);im6 = (CStatic*)GetDlgItem(IDC_STATIC6);
	im7 = (CStatic*)GetDlgItem(IDC_STATIC7);im8 = (CStatic*)GetDlgItem(IDC_STATIC8);
	im9 = (CStatic*)GetDlgItem(IDC_STATIC9);im10 = (CStatic*)GetDlgItem(IDC_STATIC10);
	im11 = (CStatic*)GetDlgItem(IDC_STATIC11);im12 = (CStatic*)GetDlgItem(IDC_STATIC12);
	im13 = (CStatic*)GetDlgItem(IDC_STATIC13);im14 = (CStatic*)GetDlgItem(IDC_STATIC14);
	im15 = (CStatic*)GetDlgItem(IDC_STATIC15);im16 = (CStatic*)GetDlgItem(IDC_STATIC16);
	im17 = (CStatic*)GetDlgItem(IDC_STATIC17);im18 = (CStatic*)GetDlgItem(IDC_STATIC18);

	im19 = (CStatic*)GetDlgItem(IDC_STATIC19); im20 = (CStatic*)GetDlgItem(IDC_STATIC20);
	im21 = (CStatic*)GetDlgItem(IDC_STATIC21); im22 = (CStatic*)GetDlgItem(IDC_STATIC22);
	im23 = (CStatic*)GetDlgItem(IDC_STATIC23); im24 = (CStatic*)GetDlgItem(IDC_STATIC24);
	im25 = (CStatic*)GetDlgItem(IDC_STATIC25); im26 = (CStatic*)GetDlgItem(IDC_STATIC26);
	im27 = (CStatic*)GetDlgItem(IDC_STATIC27); im28 = (CStatic*)GetDlgItem(IDC_STATIC28);
	im29 = (CStatic*)GetDlgItem(IDC_STATIC29); im30 = (CStatic*)GetDlgItem(IDC_STATIC30);
	im31 = (CStatic*)GetDlgItem(IDC_STATIC31); im32 = (CStatic*)GetDlgItem(IDC_STATIC32);
	im33 = (CStatic*)GetDlgItem(IDC_STATIC33); im34 = (CStatic*)GetDlgItem(IDC_STATIC34);
	im35 = (CStatic*)GetDlgItem(IDC_STATIC35); im36 = (CStatic*)GetDlgItem(IDC_STATIC36);

	im.push_back(im1); im.push_back(im2); im.push_back(im3); im.push_back(im4);
	im.push_back(im5); im.push_back(im6); im.push_back(im7); im.push_back(im8);
	im.push_back(im9); im.push_back(im10); im.push_back(im11); im.push_back(im12);
	im.push_back(im13); im.push_back(im14); im.push_back(im15); im.push_back(im16);
	im.push_back(im17); im.push_back(im18);

	im.push_back(im19); im.push_back(im20); im.push_back(im21); im.push_back(im22);
	im.push_back(im23); im.push_back(im24); im.push_back(im25); im.push_back(im26);
	im.push_back(im27); im.push_back(im28); im.push_back(im29); im.push_back(im30);
	im.push_back(im31); im.push_back(im32); im.push_back(im33); im.push_back(im34);
	im.push_back(im35); im.push_back(im36);


	CDialogEx::OnInitDialog();

	// Задает значок для этого диалогового окна.  Среда делает это автоматически,
	//  если главное окно приложения не является диалоговым
	SetIcon(m_hIcon, TRUE);			// Крупный значок
	SetIcon(m_hIcon, FALSE);		// Мелкий значок

	// TODO: добавьте дополнительную инициализацию

	return TRUE;  // возврат значения TRUE, если фокус не передан элементу управления
}

// При добавлении кнопки свертывания в диалоговое окно нужно воспользоваться приведенным ниже кодом,
//  чтобы нарисовать значок.  Для приложений MFC, использующих модель документов или представлений,
//  это автоматически выполняется рабочей областью.

void CMFCInsoleDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // контекст устройства для рисования

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Выравнивание значка по центру клиентского прямоугольника
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Нарисуйте значок
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// Система вызывает эту функцию для получения отображения курсора при перемещении
//  свернутого окна.
HCURSOR CMFCInsoleDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFCInsoleDlg::OnBnClickedButton1()
{

	//random numbs
	random_device rd;   // non-deterministic generator
	std::mt19937 gen(rd());  // to seed mersenne twister.
	std::uniform_int_distribution<> dist(0, 100 - 1);

	vector<int> allAction;
	for (int i = 0; i < max_number_sensors; ++i) {
		allAction.push_back(dist(gen)); // print the raw output of the generator.
		//numbers.push_back(temId);
	}
	for (int i = 0; i < max_number_sensors; i++)
	{
		im[i]->SetBitmap(::LoadBitmap(AfxGetResourceHandle(), MAKEINTRESOURCE(selectId(i, allAction[i]))));
	}
	allAction.clear();
}

//todo union two function (i, 0) тогда не нужно будет выполнять поиск и не нужен массив numbers
int selectId(int id, int state)
{
	char litteryState;
	if (state == 0)
		litteryState = 'o';
	else if (state >= 1 && state <= 20)
		litteryState = 'a';
	else if (state > 20 && state <= 40)
		litteryState = 'b';
	else if (state > 40 && state <= 60)
		litteryState = 'c';
	else if (state > 60 && state <= 80)
		litteryState = 'd';
	else if (state > 80 && state <= 100)
		litteryState = 'e';
	switch (id)
	{
	case 0:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP1;
		case 'a': return IDB_BITMAP1a;
		case 'b': return IDB_BITMAP1b;
		case 'c': return IDB_BITMAP1c;
		case 'd': return IDB_BITMAP1d;
		case 'e': return IDB_BITMAP1e;
		default:
			break;
		}
	}
	case 1:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP2;
		case 'a': return IDB_BITMAP2a;
		case 'b': return IDB_BITMAP2b;
		case 'c': return IDB_BITMAP2c;
		case 'd': return IDB_BITMAP2d;
		case 'e': return IDB_BITMAP2e;
		default:
			break;
		}
	}
	case 2:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP3;
		case 'a': return IDB_BITMAP3a;
		case 'b': return IDB_BITMAP3b;
		case 'c': return IDB_BITMAP3c;
		case 'd': return IDB_BITMAP3d;
		case 'e': return IDB_BITMAP3e;
		default:
			break;
		}
	}
	case 3:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP4;
		case 'a': return IDB_BITMAP4a;
		case 'b': return IDB_BITMAP4b;
		case 'c': return IDB_BITMAP4c;
		case 'd': return IDB_BITMAP4d;
		case 'e': return IDB_BITMAP4e;
		default:
			break;
		}
	}
	case 4:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP5;
		case 'a': return IDB_BITMAP5a;
		case 'b': return IDB_BITMAP5b;
		case 'c': return IDB_BITMAP5c;
		case 'd': return IDB_BITMAP5d;
		case 'e': return IDB_BITMAP5e;
		default:
			break;
		}
	}
	case 5:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP6;
		case 'a': return IDB_BITMAP6a;
		case 'b': return IDB_BITMAP6b;
		case 'c': return IDB_BITMAP6c;
		case 'd': return IDB_BITMAP6d;
		case 'e': return IDB_BITMAP6e;
		default:
			break;
		}
	}
	case 6:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP7;
		case 'a': return IDB_BITMAP7a;
		case 'b': return IDB_BITMAP7b;
		case 'c': return IDB_BITMAP7c;
		case 'd': return IDB_BITMAP7d;
		case 'e': return IDB_BITMAP7e;
		default:
			break;
		}
	}
	case 7:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP8;
		case 'a': return IDB_BITMAP8a;
		case 'b': return IDB_BITMAP8b;
		case 'c': return IDB_BITMAP8c;
		case 'd': return IDB_BITMAP8d;
		case 'e': return IDB_BITMAP8e;
		default:
			break;
		}
	}
	case 8:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP9;
		case 'a': return IDB_BITMAP9a;
		case 'b': return IDB_BITMAP9b;
		case 'c': return IDB_BITMAP9c;
		case 'd': return IDB_BITMAP9d;
		case 'e': return IDB_BITMAP9e;
		default:
			break;
		}
	}
	case 9:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP10;
		case 'a': return IDB_BITMAP10a;
		case 'b': return IDB_BITMAP10b;
		case 'c': return IDB_BITMAP10c;
		case 'd': return IDB_BITMAP10d;
		case 'e': return IDB_BITMAP10e;
		default:
			break;
		}
	}
	case 10:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP11;
		case 'a': return IDB_BITMAP11a;
		case 'b': return IDB_BITMAP11b;
		case 'c': return IDB_BITMAP11c;
		case 'd': return IDB_BITMAP11d;
		case 'e': return IDB_BITMAP11e;
		default:
			break;
		}
	}
	case 11:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP12;
		case 'a': return IDB_BITMAP12a;
		case 'b': return IDB_BITMAP12b;
		case 'c': return IDB_BITMAP12c;
		case 'd': return IDB_BITMAP12d;
		case 'e': return IDB_BITMAP12e;
		default:
			break;
		}
	}
	case 12:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP13;
		case 'a': return IDB_BITMAP13a;
		case 'b': return IDB_BITMAP13b;
		case 'c': return IDB_BITMAP13c;
		case 'd': return IDB_BITMAP13d;
		case 'e': return IDB_BITMAP13;
		default:
			break;
		}
	}
	case 13:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP14;
		case 'a': return IDB_BITMAP14a;
		case 'b': return IDB_BITMAP14b;
		case 'c': return IDB_BITMAP14c;
		case 'd': return IDB_BITMAP14d;
		case 'e': return IDB_BITMAP14e;
		default:
			break;
		}
	}
	case 14:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP15;
		case 'a': return IDB_BITMAP15a;
		case 'b': return IDB_BITMAP15b;
		case 'c': return IDB_BITMAP15c;
		case 'd': return IDB_BITMAP15d;
		case 'e': return IDB_BITMAP15e;
		default:
			break;
		}
	}
	case 15:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP16;
		case 'a': return IDB_BITMAP16a;
		case 'b': return IDB_BITMAP16b;
		case 'c': return IDB_BITMAP16c;
		case 'd': return IDB_BITMAP16d;
		case 'e': return IDB_BITMAP16e;
		default:
			break;
		}
	}
	case 16:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP17;
		case 'a': return IDB_BITMAP17a;
		case 'b': return IDB_BITMAP17b;
		case 'c': return IDB_BITMAP17c;
		case 'd': return IDB_BITMAP17d;
		case 'e': return IDB_BITMAP17e;
		default:
			break;
		}
	}
	case 17:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP18;
		case 'a': return IDB_BITMAP18a;
		case 'b': return IDB_BITMAP18b;
		case 'c': return IDB_BITMAP18c;
		case 'd': return IDB_BITMAP18d;
		case 'e': return IDB_BITMAP18e;
		default:
			break;
		}
	}
	case 18:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP19;
		case 'a': return IDB_BITMAP19a;
		case 'b': return IDB_BITMAP19b;
		case 'c': return IDB_BITMAP19c;
		case 'd': return IDB_BITMAP19d;
		case 'e': return IDB_BITMAP19e;
		default:
			break;
		}
	}
	case 19:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP20;
		case 'a': return IDB_BITMAP20a;
		case 'b': return IDB_BITMAP20b;
		case 'c': return IDB_BITMAP20c;
		case 'd': return IDB_BITMAP20d;
		case 'e': return IDB_BITMAP20e;
		default:
			break;
		}
	}
	case 20:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP21;
		case 'a': return IDB_BITMAP21a;
		case 'b': return IDB_BITMAP21b;
		case 'c': return IDB_BITMAP21c;
		case 'd': return IDB_BITMAP21d;
		case 'e': return IDB_BITMAP21e;
		default:
			break;
		}
	}
	case 21:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP22;
		case 'a': return IDB_BITMAP22a;
		case 'b': return IDB_BITMAP22b;
		case 'c': return IDB_BITMAP22c;
		case 'd': return IDB_BITMAP22d;
		case 'e': return IDB_BITMAP22e;
		default:
			break;
		}
	}
	case 22:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP23;
		case 'a': return IDB_BITMAP23a;
		case 'b': return IDB_BITMAP23b;
		case 'c': return IDB_BITMAP23c;
		case 'd': return IDB_BITMAP23d;
		case 'e': return IDB_BITMAP23e;
		default:
			break;
		}
	}
	case 23:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP24;
		case 'a': return IDB_BITMAP24a;
		case 'b': return IDB_BITMAP24b;
		case 'c': return IDB_BITMAP24c;
		case 'd': return IDB_BITMAP24d;
		case 'e': return IDB_BITMAP24e;
		default:
			break;
		}
	}
	case 24:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP25;
		case 'a': return IDB_BITMAP25a;
		case 'b': return IDB_BITMAP25b;
		case 'c': return IDB_BITMAP25c;
		case 'd': return IDB_BITMAP25d;
		case 'e': return IDB_BITMAP25e;
		default:
			break;
		}
	}
	case 25:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP26;
		case 'a': return IDB_BITMAP26a;
		case 'b': return IDB_BITMAP26b;
		case 'c': return IDB_BITMAP26c;
		case 'd': return IDB_BITMAP26d;
		case 'e': return IDB_BITMAP26e;
		default:
			break;
		}
	}
	case 26:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP27;
		case 'a': return IDB_BITMAP27a;
		case 'b': return IDB_BITMAP27b;
		case 'c': return IDB_BITMAP27c;
		case 'd': return IDB_BITMAP27d;
		case 'e': return IDB_BITMAP27e;
		default:
			break;
		}
	}
	case 27:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP28;
		case 'a': return IDB_BITMAP28a;
		case 'b': return IDB_BITMAP28b;
		case 'c': return IDB_BITMAP28c;
		case 'd': return IDB_BITMAP28d;
		case 'e': return IDB_BITMAP28e;
		default:
			break;
		}
	}
	case 28:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP29;
		case 'a': return IDB_BITMAP29a;
		case 'b': return IDB_BITMAP29b;
		case 'c': return IDB_BITMAP29c;
		case 'd': return IDB_BITMAP29d;
		case 'e': return IDB_BITMAP29e;
		default:
			break;
		}
	}
	case 29:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP30;
		case 'a': return IDB_BITMAP30a;
		case 'b': return IDB_BITMAP30b;
		case 'c': return IDB_BITMAP30c;
		case 'd': return IDB_BITMAP30d;
		case 'e': return IDB_BITMAP30e;
		default:
			break;
		}
	}
	case 30:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP31;
		case 'a': return IDB_BITMAP31a;
		case 'b': return IDB_BITMAP31b;
		case 'c': return IDB_BITMAP31c;
		case 'd': return IDB_BITMAP31d;
		case 'e': return IDB_BITMAP31e;
		default:
			break;
		}
	}
	case 31:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP32;
		case 'a': return IDB_BITMAP32a;
		case 'b': return IDB_BITMAP32b;
		case 'c': return IDB_BITMAP32c;
		case 'd': return IDB_BITMAP32d;
		case 'e': return IDB_BITMAP32e;
		default:
			break;
		}
	}
	case 32:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP33;
		case 'a': return IDB_BITMAP33a;
		case 'b': return IDB_BITMAP33b;
		case 'c': return IDB_BITMAP33c;
		case 'd': return IDB_BITMAP33d;
		case 'e': return IDB_BITMAP33e;
		default:
			break;
		}
	}
	case 33:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP34;
		case 'a': return IDB_BITMAP34a;
		case 'b': return IDB_BITMAP34b;
		case 'c': return IDB_BITMAP34c;
		case 'd': return IDB_BITMAP34d;
		case 'e': return IDB_BITMAP34e;
		default:
			break;
		}
	}
	case 34:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP35;
		case 'a': return IDB_BITMAP35a;
		case 'b': return IDB_BITMAP35b;
		case 'c': return IDB_BITMAP35c;
		case 'd': return IDB_BITMAP35d;
		case 'e': return IDB_BITMAP35e;
		default:
			break;
		}
	}
	case 35:
	{
		switch (litteryState)
		{
		case 'o': return IDB_BITMAP36;
		case 'a': return IDB_BITMAP36a;
		case 'b': return IDB_BITMAP36b;
		case 'c': return IDB_BITMAP36c;
		case 'd': return IDB_BITMAP36d;
		case 'e': return IDB_BITMAP36e;
		default:
			break;
		}
	}
	default:
		break;
	}
}

void CMFCInsoleDlg::OnStnClickedStatic31()
{
	// TODO: добавьте свой код обработчика уведомлений
}
