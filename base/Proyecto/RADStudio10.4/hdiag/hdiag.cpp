// Programa : hdiag.cpp
// Autor    : Octulio Biletán - Agosto de 2023
// Propósito: Enseñar, mediante hdiag, a usar y conocer los comandos ping, ipconfig y netstat
//            en Windows/CMD, modo consola.
//            Versión 1.8.2023, Windows 32 bits.
//---------------------------------------------------------------------------
#include <vcl.h>
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("frmHerramientas.cpp", frmPrincipal);
USEFORM("frmAyuda.cpp", VntAyuda);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TfrmPrincipal), &frmPrincipal);
		Application->CreateForm(__classid(TVntAyuda), &VntAyuda);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
