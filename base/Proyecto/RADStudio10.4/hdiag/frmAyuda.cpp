// Módulo   : frmAyuda.cpp
// Autor    : Octulio Biletán - Agosto de 2023
// Propósito: Enseñar, mediante hdiag, a usar y conocer los comandos ping, ipconfig y netstat
//            en Windows/CMD, modo consola.

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
