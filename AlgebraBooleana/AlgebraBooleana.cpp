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
	const int par = tbxPar.IntValue;
	const bool esPar = (par% 2 == 0);
	this->Text = Sys::Convert::ToString(esPar);
}

