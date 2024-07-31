//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *questionLabel;
	TRadioButton *ans1Button;
	TRadioButton *ans3Button;
	TLabel *Label2;
	TLabel *scoreLabel;
	TRadioButton *ans2Button;
	TButton *submitButton;
	void __fastcall ans3ButtonClick(TObject *Sender);
	void __fastcall ans1ButtonClick(TObject *Sender);
	void __fastcall ans2ButtonClick(TObject *Sender);
	void __fastcall submitButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
