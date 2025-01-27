// Módulo   : frmAyuda.cpp
// Autor    : Octulio Biletán - Agosto de 2023
// Propósito: Enseñar, mediante hdiag, a usar y conocer los comandos ping,
//            ipconfig y netstat en Windows/CMD, modo consola.
//            Versión 1.8.2023, Windows 32/64 bits.
// Licencia: Copyright (C) 2023 Octulio Biletán.
// Este programa es software libre: puede redistribuirlo y/o modificarlo bajo
// los términos de la Licencia General Pública de GNU publicada por la Free
// Software Foundation, ya sea la versión 3 de la Licencia, o (a su elección)
// cualquier versión posterior.
// 
// Este programa se distribuye con la esperanza de que sea útil pero SIN
// NINGUNA GARANTÍA; incluso sin la garantía implícita de MERCANTIBILIDAD o
// CALIFICADA PARA UN PROPÓSITO EN PARTICULAR. Vea la Licencia General Pública
// de GNU para más detalles.
// 
// Usted ha de recibir una copia de la Licencia General Pública de GNU junto
// con este programa. Si no, vea <http://www.gnu.org/licenses/>.
//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "frmAyuda.h"
//--------------------------------------------------------------------- 
#pragma resource "*.dfm"
TVntAyuda *VntAyuda;
//--------------------------------------------------------------------- 
__fastcall TVntAyuda::TVntAyuda(TComponent* AOwner)
	: TForm(AOwner)
{
}
//---------------------------------------------------------------------
void __fastcall TVntAyuda::OKButtonClick(TObject *Sender)
{
   Close();
}
//---------------------------------------------------------------------------
