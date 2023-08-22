// Encabezamiento: frmAyuda.cpp
// Autor         : Octulio Bilet�n - Agosto de 2023
// Prop�sito     : Ense�ar, mediante hdiag, a usar y conocer los comandos ping,
//                 ipconfig y netstat en Windows/CMD, modo consola.
//                 Versi�n 1.8.2023, Windows 32/64 bits.
// Licencia      : Copyright (C) 2023 Octulio Bilet�n.
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
//----------------------------------------------------------------------------

#ifndef frmAyudaH
#define frmAyudaH
//----------------------------------------------------------------------------
#include <System.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//----------------------------------------------------------------------------
class TVntAyuda : public TForm
{
__published:
	TPanel *Panel1;
	TImage *ProgramIcon;
	TButton *OKButton;
	TLabel *ProductName;
	TLabel *Version;
	TLabel *Copyright;
	TLabel *Comments;
	void __fastcall OKButtonClick(TObject *Sender);
private:
public:
	virtual __fastcall TVntAyuda(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE TVntAyuda *VntAyuda;
//----------------------------------------------------------------------------
#endif    
