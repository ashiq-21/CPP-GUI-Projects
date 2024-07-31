//---------------------------------------------------------------------------

#ifndef RegistrationH
#define RegistrationH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TregistrationForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *nameValue;
	TEdit *ageValue;
	TEdit *usernameValue;
	TEdit *passwordValue;
	TButton *submitButton;
	void __fastcall submitButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TregistrationForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TregistrationForm *registrationForm;
//---------------------------------------------------------------------------
#endif
