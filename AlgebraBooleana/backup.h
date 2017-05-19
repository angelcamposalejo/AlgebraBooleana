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
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(156);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(102);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"AlgebraBooleana";
		lb1.Create(NULL, L"Edad del niño", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 57, 12, 92, 18, hWnd, 1000);
		tbxEdad.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 54, 36, 94, 25, hWnd, 1001);
		btRevisar.Create(NULL, L"Revisar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 75, 67, 54, 28, hWnd, 1002);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lb1.Font = fontArial014A;
		tbxEdad.Font = fontArial014A;
		btRevisar.Font = fontArial014A;
	}
	//_________________________________________________
	void btRevisar_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btRevisar.IsEvent(e, BN_CLICKED)) {btRevisar_Click(e); return true;}
		return false;
	}
};
