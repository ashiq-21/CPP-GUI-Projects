//---------------------------------------------------------------------------

#include <fmx.h>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
#pragma hdrstop

#include "Login.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TloginForm *loginForm;
vector<string> info(string line)
{
   vector<string> result;
   stringstream s_stream(line);
   while(s_stream.good())
   {
	   string substr;
       s_stream>>substr;
	   result.push_back(substr);
   }
   return result;
}
//---------------------------------------------------------------------------
__fastcall TloginForm::TloginForm(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall TloginForm::loginButtonClick(TObject *Sender)
{
   fstream myFile;
   myFile.open("registeredUsers.txt",ios::in);
   bool ok=0;
   if(myFile.is_open())
   {
	   string line;
	   while(getline(myFile,line))
	   {
		   vector<string>result = info(line);
		   const char* username = result[2].c_str();
		   const char* password = result[3].c_str();
		   AnsiString g1 = usernameValue->Text;
		   AnsiString g2 = passwordValue->Text;
		   if(username==g1 && password==g2)
		   {
			   ok=1;
		   }
	   }
   }
   match->Text = ok?"Succes":"Failed";
}
//---------------------------------------------------------------------------

void __fastcall TloginForm::FormClose(TObject *Sender, TCloseAction &Action)
{
    usernameValue->Text = "";
	passwordValue->Text = "";
    match->Text="";
}
//---------------------------------------------------------------------------

