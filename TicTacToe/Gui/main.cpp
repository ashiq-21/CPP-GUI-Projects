//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
char currentSymbol = 'O';
int currentStep = 0;
TForm1* Form1;
bool TForm1::IsWinner()
{
    if (!b1->Text.IsEmpty() && b1->Text == b2->Text && b1->Text == b3->Text) {
        winLabel->Text = b1->Text + " wins";
        resetButton->Opacity = 1;
        return 1;
    }
    if (!b4->Text.IsEmpty() && b4->Text == b5->Text && b4->Text == b6->Text) {
        winLabel->Text = b4->Text + " wins";
        resetButton->Opacity = 1;
        return 1;
    }
    if (!b7->Text.IsEmpty() && b7->Text == b8->Text && b7->Text == b9->Text) {
        winLabel->Text = b7->Text + " wins";
        resetButton->Opacity = 1;
        return 1;
    }
    if (!b1->Text.IsEmpty() && b1->Text == b4->Text && b1->Text == b7->Text) {
        winLabel->Text = b1->Text + " wins";
        resetButton->Opacity = 1;
        return 1;
    }
    if (!b2->Text.IsEmpty() && b2->Text == b5->Text && b2->Text == b8->Text) {
        winLabel->Text = b2->Text + " wins";
        resetButton->Opacity = 1;
        return 1;
    }
    if (!b3->Text.IsEmpty() && b3->Text == b6->Text && b3->Text == b9->Text) {
        winLabel->Text = b3->Text + " wins";
        resetButton->Opacity = 1;
        return 1;
    }
    if (!b1->Text.IsEmpty() && b1->Text == b5->Text && b1->Text == b9->Text) {
        winLabel->Text = b1->Text + " wins";
        resetButton->Opacity = 1;
        return 1;
    }
    if (!b3->Text.IsEmpty() && b3->Text == b5->Text && b3->Text == b7->Text) {
        winLabel->Text = b3->Text + " wins";
        resetButton->Opacity = 1;
        return 1;
    }
    return 0;
}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner)
{
    symbolLabel->Text = currentSymbol;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonClick(TObject* Sender)
{
    if (currentStep == 9) {
        return;
    }
    if (IsWinner()) {
        return;
    }
    TButton* currentButton = dynamic_cast<TButton*>(Sender);
    if (currentStep == 8) {
        currentStep++;
        currentButton->Text = currentSymbol;
        if (IsWinner()) {
			winLabel->Text = currentSymbol + "wins";
		} else {
			winLabel->Text = "Draw";
		}
		resetButton->Opacity = 1;
        resetButton2->Opacity = 0;
        return;
    }
    currentStep++;
    currentButton->Text = currentSymbol;
	if (IsWinner()) {
        resetButton2->Opacity = 0;
        return;
    }
    if (currentSymbol == 'O') {
        currentSymbol = 'X';
    } else {
        currentSymbol = 'O';
    }
    symbolLabel->Text = currentSymbol;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::resetButtonClick(TObject* Sender)
{
    currentStep = 0;
	currentSymbol = 'O';
    symbolLabel->Text = currentSymbol;
	b1->Text ="";
	b2->Text ="";
	b3->Text ="";
	b4->Text ="";
	b5->Text ="";
	b6->Text ="";
	b7->Text ="";
	b8->Text ="";
	b9->Text ="";
    winLabel->Text="";
	resetButton->Opacity = 0;
    resetButton2->Opacity = 1;
}
//---------------------------------------------------------------------------

