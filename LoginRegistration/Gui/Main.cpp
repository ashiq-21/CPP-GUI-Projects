//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Main.h"
#include "Login.h"
#include "Registration.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TmainForm *mainForm;
//---------------------------------------------------------------------------
__fastcall TmainForm::TmainForm(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TmainForm::loginButtonClick(TObject *Sender)
{
   loginForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TmainForm::registrationButtonClick(TObject *Sender)
{
   registrationForm->Show();
}
//---------------------------------------------------------------------------
