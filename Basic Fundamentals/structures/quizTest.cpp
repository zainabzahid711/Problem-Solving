#include <iostream>
using namespace std;

struct Quiz
{
  string question;
  int answer;
};

struct Options
{
  string option1;
  string option2;
  string option3;
};

void display(Quiz *qs, Options *op)
{
  for (int i = 0; i < 3; i++)
  {
    cout << qs[i].question << endl;
    cout << "1- " << op[i].option1 << endl;
    cout << "2- " << op[i].option2 << endl;
    cout << "3- " << op[i].option3 << endl;

    int choice;
    cout << "choose the correct option _" << endl;
    cin >> choice;

    if (choice == qs[i].answer)
    {
      cout << "correct! " << endl;
    }
    else
    {
      cout << "incorrect! " << endl;
      cout << "correct option is " << qs[i].answer << endl;
    }
  }
}

int main()
{
  Options op[3] = {
      {"atlantic ocean", "pacific ocean", "indian ocean"},
      {"5", "4", "3"},
      {"rapheal", "micheal", "leaonardo"},
  };
  Quiz qz[3] = {
      {"which is the largest ocean ?", 2},
      {"what is 2*2 ? ", 2},
      {"who painted mona lisa ?", 3},
  };

  display(qz, op);
}