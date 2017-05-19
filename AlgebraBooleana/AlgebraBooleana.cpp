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
	const double peso = tbxPeso.DoubleValue;
	const bool gratis = ((edad <= 11) && (peso < 50.0));
	tbxAdmision.Text = Sys::Convert::ToString(gratis);
}

