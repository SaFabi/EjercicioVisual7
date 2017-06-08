#pragma once   //_____________________________________________ Ejercicio7Dgl.h  
#include "resource.h"
#include "Ejercicio7Dgl.h"
class Ejercicio7Dgl : public Win::Dialog
{
public:
	Ejercicio7Dgl()
	{
	}
	~Ejercicio7Dgl()
	{
	}
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Button btClick;
	Win::Textbox tbxTexto;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(469);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(179);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		btClick.Create(NULL, L"Click", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 317, 144, 143, 28, hWnd, 1000);
		tbxTexto.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 316, 85, 146, 25, hWnd, 1001);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		btClick.Font = fontArial014A;
		tbxTexto.Font = fontArial014A;
	}
	//_________________________________________________
	void btClick_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btClick.IsEvent(e, BN_CLICKED)) { btClick_Click(e); return true; }
		return false;
	}
};
