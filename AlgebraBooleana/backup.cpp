#include "stdafx.h"  //________________________________________ AlgebraBooleana.cpp
#include "AlgebraBooleana.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	AlgebraBooleana app;
	return app.BeginDialog(IDI_AlgebraBooleana, hInstance);
}

void AlgebraBooleana::Window_Open(Win::Event& e)
{

}

void AlgebraBooleana::btRevisar_Click(Win::Event& e)
{
	const int par = tbxCosto.DoubleValue;
	bool puedeComprar = (costo < 20000);
	wstring texto;
	Sys::Format(texto, L"Puede comprar el auto: %d", puedeComprar);
	this->MessageBox(texto, L"1 para si puede comprarlo 0 para si no puede comprarlo", MB_OK);
}

