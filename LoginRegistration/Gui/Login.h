//---------------------------------------------------------------------------

#ifndef LoginH
#define LoginH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TloginForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *usernameValue;
	TEdit *passwordValue;
	TLabel *Label2;
	TLabel *Label1;
	TButton *loginButton;
	TLabel *match;
	void __fastcall loginButtonClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TloginForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TloginForm *loginForm;
//---------------------------------------------------------------------------
#endif
