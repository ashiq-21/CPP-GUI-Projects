//---------------------------------------------------------------------------

#include <fmx.h>
#include <queue>
using namespace std;
#pragma hdrstop

#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1* Form1;
class Question
{
  public:
    char* text;
    char* ans1;
    char* ans2;
    char* ans3;
    int correctAns;
    Question() {}
    Question(char* t1, char* a1, char* a2, char* a3, int c)
    {
        text = t1;
        ans1 = a1;
        ans2 = a2;
        ans3 = a3;
        correctAns = c;
    }
};
queue<Question> LoadQuestions()
{
    queue<Question> q;
    Question q1 = Question("first question", "ans1", "ans2", "correctAns", 3);
    Question q2 = Question("second question", "correctAns", "ans2", "ans3", 1);
    q.push(q1);
    q.push(q2);
    return q;
}
queue<Question> questions;
Question currentQuestion;
int currentAns, score;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner)
{
    questions = LoadQuestions();

    currentQuestion = questions.front();

    questions.pop();

    questionLabel->Text = currentQuestion.text;

    ans1Button->Text = currentQuestion.ans1;

    ans2Button->Text = currentQuestion.ans2;

    ans3Button->Text = currentQuestion.ans3;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ans1ButtonClick(TObject* Sender)
{
    currentAns = 1;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ans2ButtonClick(TObject* Sender)
{
    currentAns = 2;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ans3ButtonClick(TObject* Sender)
{
    currentAns = 3;
}

//---------------------------------------------------------------------------
void __fastcall TForm1::submitButtonClick(TObject* Sender)
{
    if (currentAns == currentQuestion.correctAns) {
        score++;
	}
	scoreLabel->Text = score;
	if (!questions.empty()) {

		currentQuestion = questions.front();

		questions.pop();

		questionLabel->Text = currentQuestion.text;

		ans1Button->Text = currentQuestion.ans1;

		ans2Button->Text = currentQuestion.ans2;

		ans3Button->Text = currentQuestion.ans3;

		ans1Button->IsChecked = false;

		ans2Button->IsChecked = false;

		ans3Button->IsChecked = false;
	}
	else
	{
	  submitButton->Enabled = false;
      submitButton->Text = "The end";
	}
}
//---------------------------------------------------------------------------

