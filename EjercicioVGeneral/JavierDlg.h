#pragma once   //_____________________________________________ JavierDlg.h  
#include "resource.h"

class JavierDlg: public Win::Dialog
{
public:
	JavierDlg()
	{
	}
	~JavierDlg()
	{
	}
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxNombre;
	Win::Button btGenerar;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(4.76250);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(2.09021);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		tbxNombre.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 0.21167, 0.26458, 4.36563, 0.60854, hWnd, 1000);
		btGenerar.CreateX(NULL, L"Generar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 0.97896, 1.21708, 2.85750, 0.68792, hWnd, 1001);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		tbxNombre.Font = fontArial009A;
		btGenerar.Font = fontArial009A;
	}
	//_________________________________________________
	void btGenerar_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btGenerar.IsEvent(e, BN_CLICKED)) {btGenerar_Click(e); return true;}
		return false;
	}
};
