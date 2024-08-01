//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream>
#pragma hdrstop

#include "Registration.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TregistrationForm *registrationForm;
//---------------------------------------------------------------------------
__fastcall TregistrationForm::TregistrationForm(TComponent *Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TregistrationForm::submitButtonClick(TObject *Sender)
{
	fstream myFile;
	myFile.open("registeredUsers.txt", ios::app);
	if (myFile.is_open())
	{
		AnsiString name = nameValue->Text;
		AnsiString age = ageValue->Text;
		AnsiString username = usernameValue->Text;
		AnsiString password = passwordValue->Text;
		myFile << name << " " << age << " " << username << " " << password << "\n";
		myFile.close();
		nameValue->Text = "";
		ageValue->Text = "";
		usernameValue->Text = "";
		passwordValue->Text = "";
		this->Close();
	}
}
//---------------------------------------------------------------------------
