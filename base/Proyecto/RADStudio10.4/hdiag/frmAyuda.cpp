// M�dulo   : frmAyuda.cpp
// Autor    : Octulio Bilet�n - Agosto de 2023
// Prop�sito: Ense�ar, mediante hdiag, a usar y conocer los comandos ping, ipconfig y netstat
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
