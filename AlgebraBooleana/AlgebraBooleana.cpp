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
	const int edad = tbxEdad.IntValue;
	bool mayorEdad = (edad >= 18);
	wstring texto;
	Sys::Format(texto, L"El niño es mayor de edad: %d", mayorEdad);
	this->MessageBox(texto, L"1 para mayor de edad 0 para menor de edad", MB_OK);
}

