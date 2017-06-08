#pragma once  //______________________________________ EjercicioVGeneral.h  
#include "Resource.h"
#include "AngelDlg.h"
class EjercicioVGeneral : public Win::Dialog
{
public:
	EjercicioVGeneral()
	{
	}
	~EjercicioVGeneral()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Button btAdri;
	Win::Button btJesus;
	Win::Button btAngel;
	Win::Button btJavier;
	Win::Button btFabi;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::CentimetersToDlgUnitX(15.61042);
		dlgTemplate.cy = Sys::Convert::CentimetersToDlgUnitY(1.27000);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"EjercicioVGeneral";
		btAdri.CreateX(NULL, L"Adri", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 0.29104, 0.34396, 2.77812, 0.68792, hWnd, 1000);
		btJesus.CreateX(NULL, L"Jesus", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 3.75708, 0.34396, 2.46062, 0.68792, hWnd, 1001);
		btAngel.CreateX(NULL, L"Angel", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 6.74688, 0.37042, 2.59292, 0.68792, hWnd, 1002);
		btJavier.CreateX(NULL, L"Javier", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 9.86896, 0.39688, 2.54000, 0.68792, hWnd, 1003);
		btFabi.CreateX(NULL, L"Fabi", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 13.04396, 0.39688, 2.38125, 0.68792, hWnd, 1004);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		btAdri.Font = fontArial009A;
		btJesus.Font = fontArial009A;
		btAngel.Font = fontArial009A;
		btJavier.Font = fontArial009A;
		btFabi.Font = fontArial009A;
	}
	//_________________________________________________
	void btAdri_Click(Win::Event& e);
	void btJesus_Click(Win::Event& e);
	void btAngel_Click(Win::Event& e);
	void btJavier_Click(Win::Event& e);
	void btFabi_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btAdri.IsEvent(e, BN_CLICKED)) { btAdri_Click(e); return true; }
		if (btJesus.IsEvent(e, BN_CLICKED)) { btJesus_Click(e); return true; }
		if (btAngel.IsEvent(e, BN_CLICKED)) { btAngel_Click(e); return true; }
		if (btJavier.IsEvent(e, BN_CLICKED)) { btJavier_Click(e); return true; }
		if (btFabi.IsEvent(e, BN_CLICKED)) { btFabi_Click(e); return true; }
		return false;
	}
};
