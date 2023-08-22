// Encabezamiento: frmAyuda.cpp
// Autor         : Octulio Biletán - Agosto de 2023
// Propósito     : Enseñar, mediante hdiag, a usar y conocer los comandos ping, ipconfig y netstat
//                 en Windows/CMD, modo consola.
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
