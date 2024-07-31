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
	TButton *b1;
	TButton *b2;
	TButton *b3;
	TButton *b6;
	TButton *b5;
	TButton *b4;
	TButton *b9;
	TButton *b8;
	TButton *b7;
	TLabel *Label1;
	TLabel *symbolLabel;
	TLabel *winLabel;
	TButton *resetButton;
	TButton *resetButton2;
	void __fastcall ButtonClick(TObject *Sender);
	void __fastcall resetButtonClick(TObject *Sender);
private:	// User declarations
bool TForm1::IsWinner();
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
