// Programa : hdiag.cpp
// Autor    : Octulio Bilet�n - Agosto de 2023.
// Prop�sito: Ense�ar, mediante hdiag, a usar y conocer los comandos ping,
//            ipconfig y netstat en Windows/CMD, modo consola.
//            Versi�n 1.8.2023, Windows 32/64 bits.
// Licencia: Copyright (C) 2023 Octulio Bilet�n.
// Este programa es software libre: puede redistribuirlo y/o modificarlo bajo
// los t�rminos de la Licencia General P�blica de GNU publicada por la Free
// Software Foundation, ya sea la versi�n 3 de la Licencia, o (a su elecci�n)
// cualquier versi�n posterior.
// 
// Este programa se distribuye con la esperanza de que sea �til pero SIN
// NINGUNA GARANT�A; incluso sin la garant�a impl�cita de MERCANTIBILIDAD o
// CALIFICADA PARA UN PROP�SITO EN PARTICULAR. Vea la Licencia General P�blica
// de GNU para m�s detalles.
// 
// Usted ha de recibir una copia de la Licencia General P�blica de GNU junto
// con este programa. Si no, vea <http://www.gnu.org/licenses/>.
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
	catch(Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch(...)
	{
		try
		{
			throw Exception("");
		}
		catch(Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
