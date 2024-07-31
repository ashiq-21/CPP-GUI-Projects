//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;

const int miliseconds =  86400000;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
  reminderTimer->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::reminderButtonClick(TObject *Sender)
{
   TDate dateValue = reminderDate->Date;
   TTime timeValue = reminderTime->Time;

   TDateTime dateTimeValue = dateValue + timeValue;
   TDateTime remainingTime = dateTimeValue - Now();


   double reminderMiliSeconds = static_cast<double>(remainingTime)*miliseconds;
   reminderTimer->Interval = reminderMiliSeconds;
   reminderTimer->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::reminderTimerTimer(TObject *Sender)
{
	 ShowMessage("reminder reminder");
     reminderTimer->Enabled = false;
}
//---------------------------------------------------------------------------
