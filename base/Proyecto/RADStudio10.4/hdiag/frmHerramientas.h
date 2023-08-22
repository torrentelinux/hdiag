// Encabezamiento: frmHerramientas.h
// Autor         : Octulio Biletán - Agosto de 2023
// Propósito     : Enseñar, mediante hdiag, a usar y conocer los comandos ping, ipconfig y netstat
//                 en Windows/CMD, modo consola.

//---------------------------------------------------------------------------
#ifndef frmHerramientasH
#define frmHerramientasH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TfrmPrincipal : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TStaticText *StaticText1;
	TStaticText *StaticText2;
	TStaticText *StaticText3;
	TStaticText *StaticText4;
	TStaticText *txtLinea;
	TBevel *Bevel1;
	TBevel *Bevel2;
	TBevel *Bevel3;
	TBevel *Bevel4;
	TEdit *edtLinea;
	TButton *btnAplicar1;
	TButton *btnAplicar2;
	TButton *btnAplicar3;
	TButton *btnAplicar4;
	TButton *btnSalir;
	TButton *btnAyuda;
	TRadioButton *rbPing;
	TRadioButton *rbIpconfig;
	TRadioButton *rbNetstat;
	TRadioButton *rbPing2;
	TRadioButton *rbIpconfig2;
	TRadioButton *rbNetstat2;
	TRadioButton *rbPing3;
	TRadioButton *rbIpconfig3;
	TRadioButton *rbNetstat3;
	TRadioButton *rbPing4;
	TRadioButton *rbIpconfig4;
	TRadioButton *rbNetstat4;
	void __fastcall btnAplicar1Click(TObject *Sender);
	void __fastcall btnAplicar2Click(TObject *Sender);
	void __fastcall btnSalirClick(TObject *Sender);
	void __fastcall edtLineaKeyUp(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall rbPing2Click(TObject *Sender);
	void __fastcall rbNetstat2Click(TObject *Sender);
	void __fastcall rbIpconfig2Click(TObject *Sender);
	void __fastcall btnAplicar3Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall btnAplicar4Click(TObject *Sender);
	void __fastcall btnAyudaClick(TObject *Sender);
	void __fastcall rbPingClick(TObject *Sender);
	void __fastcall rbIpconfigClick(TObject *Sender);
	void __fastcall rbNetstatClick(TObject *Sender);
	void __fastcall rbPing3Click(TObject *Sender);
	void __fastcall rbPing4Click(TObject *Sender);
	void __fastcall rbIpconfig3Click(TObject *Sender);
	void __fastcall rbIpconfig4Click(TObject *Sender);
	void __fastcall rbNetstat3Click(TObject *Sender);
	void __fastcall rbNetstat4Click(TObject *Sender);

private:	// User declarations
	String comando;
        String argumentos;

public:		// User declarations
	__fastcall TfrmPrincipal(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmPrincipal *frmPrincipal;
//---------------------------------------------------------------------------
#endif
