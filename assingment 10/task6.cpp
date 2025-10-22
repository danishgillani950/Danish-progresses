#include<iostream>
using namespace std;
int main()
{
    int s;
    char g;
    cout<<"enter score = ";
    cin>>s;
    switch (s/10)
    {
    case  0:
    case  1:
    case  2:
    case  3:
    case  4:
    case  5:
      g='F';
      cout<<"grade is F";
      break;
    case  6:
      g='D';
       cout<<"grade is D";
      break;
    case  7:
      g='C';
       cout<<"grade is C";
      break;
    case  8:
      g='B';
       cout<<"grade is B";
      break;
    case  9:
    case 10:
      g='A';
      cout<<"grade is A";
      break;          
    default:
      cout<<"invalid test score.";
    }
    return 0;
}