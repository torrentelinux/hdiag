// Módulo   : frmHerramientas.cpp
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
//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "frmHerramientas.h"
#include "frmAyuda.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TfrmPrincipal *frmPrincipal;

//---------------------------------------------------------------------------
__fastcall TfrmPrincipal::TfrmPrincipal(TComponent* Owner)
	: TForm(Owner)
{
   edtLinea->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::FormShow(TObject *Sender)
{
   btnAplicar1->SetFocus();
   rbPing->Checked = true;

   txtLinea->Caption = "Comando ping seleccionado.";
   txtLinea->Refresh();
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::btnSalirClick(TObject *Sender)
{
   Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::btnAplicar1Click(TObject *Sender)
{
	int status;
	String salida;

   comando = "";
   argumentos = "";

   if(rbPing->Checked)
   {
     txtLinea->Caption = "Invocando a Ping /?";
     argumentos = "/?";
     comando = "ping " + argumentos;
   }

   if(rbNetstat->Checked)
   {
     txtLinea->Caption = "Invocando a Netstat /?";
     argumentos = "/?";
     comando = "netstat " + argumentos;
   }

   if(rbIpconfig->Checked)
   {
     txtLinea->Caption = "Invocando a Ipconfig /?";
     argumentos = "/?";
     comando = "ipconfig " + argumentos;
   }

   comando += "&pause";
   status = _wsystem(comando.c_str());
   salida = "Código devuelto: " + String(status);

   txtLinea->Caption = salida;
   edtLinea->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::btnAplicar2Click(TObject *Sender)
{
   	int status;
    	String salida;

   comando = "";
   argumentos = edtLinea->Text;

   if(rbPing2->Checked)
   {
     txtLinea->Caption = "Invocando a Ping ...";
     comando = "ping " + argumentos;
   }

   if(rbNetstat2->Checked)
   {
     txtLinea->Caption = "Invocando a Netstat ...";
     comando = "netstat " + argumentos;
   }

   if(rbIpconfig2->Checked)
   {
     txtLinea->Caption = "Invocando a Ipconfig ...";
     comando = "ipconfig " + argumentos;
   }

   comando += "&pause";
   status = _wsystem(comando.c_str());
   salida = "Código devuelto: " + String(status);

   txtLinea->Caption = salida;
   edtLinea->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::btnAplicar3Click(TObject *Sender)
{
   	int status;
    	String salida;

   comando = "";
   argumentos = "";

   if(rbPing3->Checked)
   {
     txtLinea->Caption = "Ingresando a Wikipedia: ping.";
     argumentos = "https://es.wikipedia.org/wiki/Ping";
   }

   if(rbNetstat3->Checked)
   {
     txtLinea->Caption = "Invocando a Netstat ...";
     argumentos = "https://es.wikipedia.org/wiki/Netstat";
   }

   if(rbIpconfig3->Checked)
   {
     txtLinea->Caption = "Invocando a Ipconfig ...";
     argumentos = "https://es.wikipedia.org/wiki/Ipconfig";
   }

   comando = "start " + argumentos;
   status = _wsystem(comando.c_str());
   salida = "Código devuelto: " + String(status);

   txtLinea->Caption = salida;
   edtLinea->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::btnAplicar4Click(TObject *Sender)
{
   	int status;
    	String salida;

   comando = "";
   argumentos = "";

   if(rbPing4->Checked)
   {
     txtLinea->Caption = "Ingresando a YouTube: ping.";
     argumentos = "https://www.youtube.com/results?search_query=windows+ping";
   }

   if(rbNetstat4->Checked)
   {
     txtLinea->Caption = "Ingresando a YouTube: a netstat.";
     argumentos = "https://www.youtube.com/results?search_query=windows+netstat";
   }

   if(rbIpconfig4->Checked)
   {
     txtLinea->Caption = "Ingresando a YouTube: ipconfig.";
     argumentos = "https://www.youtube.com/results?search_query=windows+ipconfig";
   }

   comando = "start " + argumentos;
   status = _wsystem(comando.c_str());
   salida = "Código devuelto: " + String(status);

   txtLinea->Caption = salida;
   edtLinea->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::rbPingClick(TObject *Sender)
{
   txtLinea->Caption = "Comando ping seleccionado.";
   txtLinea->Refresh();
   edtLinea->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::rbPing2Click(TObject *Sender)
{
   txtLinea->Caption = "Comando ping seleccionado.";
   txtLinea->Refresh();
   edtLinea->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::rbPing3Click(TObject *Sender)
{
   txtLinea->Caption = "Comando ping seleccionado.";
   txtLinea->Refresh();
   edtLinea->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::rbPing4Click(TObject *Sender)
{
   txtLinea->Caption = "Comando ping seleccionado.";
   txtLinea->Refresh();
   edtLinea->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::rbNetstatClick(TObject *Sender)
{
   txtLinea->Caption = "Comando netstat seleccionado.";
   txtLinea->Refresh();
   edtLinea->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::rbNetstat2Click(TObject *Sender)
{
   txtLinea->Caption = "Comando netstat seleccionado.";
   txtLinea->Refresh();
   edtLinea->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::rbNetstat3Click(TObject *Sender)
{
   txtLinea->Caption = "Comando netstat seleccionado.";
   txtLinea->Refresh();
   edtLinea->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::rbNetstat4Click(TObject *Sender)
{
   txtLinea->Caption = "Comando netstat seleccionado.";
   txtLinea->Refresh();
   edtLinea->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::rbIpconfigClick(TObject *Sender)
{
   txtLinea->Caption = "Comando ipconfig seleccionado.";
   txtLinea->Refresh();
   edtLinea->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::rbIpconfig2Click(TObject *Sender)
{
   txtLinea->Caption = "Comando ipconfig seleccionado.";
   txtLinea->Refresh();
   edtLinea->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::rbIpconfig3Click(TObject *Sender)
{
   txtLinea->Caption = "Comando ipconfig seleccionado.";
   txtLinea->Refresh();
   edtLinea->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::rbIpconfig4Click(TObject *Sender)
{
   txtLinea->Caption = "Comando ipconfig seleccionado.";
   txtLinea->Refresh();
   edtLinea->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::edtLineaKeyUp(TObject *Sender, WORD &Key, TShiftState Shift)
{
   if(Key == VK_RETURN)
   {
     argumentos = "";
     argumentos = edtLinea->Text;
     btnAplicar2->SetFocus();
   }
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::btnAyudaClick(TObject *Sender)
{
   VntAyuda->ShowModal();
}
//---------------------------------------------------------------------------

