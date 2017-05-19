#pragma once  //______________________________________ AlgebraBooleana.h  
#include "Resource.h"
class AlgebraBooleana : public Win::Dialog
{
public:
	AlgebraBooleana()
	{
	}
	~AlgebraBooleana()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxEdad;
	Win::Button btRevisar;
	Win::Label lb2;
	Win::Textbox tbxPeso;
	Win::Label lb3;
	Win::Textbox tbxAdmision;
	Win::Label lb4;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(319);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(110);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"AlgebraBooleana";
		lb1.Create(NULL, L"Edad", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 15, 4, 48, 25, hWnd, 1000);
		tbxEdad.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 68, 5, 53, 25, hWnd, 1001);
		btRevisar.Create(NULL, L"Revisar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 58, 75, 54, 28, hWnd, 1002);
		lb2.Create(NULL, L"Peso", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 14, 40, 49, 25, hWnd, 1003);
		tbxPeso.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 68, 44, 54, 25, hWnd, 1004);
		lb3.Create(NULL, L"Kg.", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 122, 43, 23, 25, hWnd, 1005);
		tbxAdmision.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 240, 11, 72, 25, hWnd, 1006);
		lb4.Create(NULL, L"Admisión gratis?", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 161, 6, 76, 33, hWnd, 1007);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lb1.Font = fontArial014A;
		tbxEdad.Font = fontArial014A;
		btRevisar.Font = fontArial014A;
		lb2.Font = fontArial014A;
		tbxPeso.Font = fontArial014A;
		lb3.Font = fontArial014A;
		tbxAdmision.Font = fontArial014A;
		lb4.Font = fontArial014A;
	}
	//_________________________________________________
	void btRevisar_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btRevisar.IsEvent(e, BN_CLICKED)) { btRevisar_Click(e); return true; }
		return false;
	}
};
