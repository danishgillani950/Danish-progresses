#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter integer between 0 and 7:";
    cin>>n;
    cout<<endl;
    switch (n)
    {
    case 0:
    case 1:
      cout<<"learning to use=";
    case 2:
     cout<<"C++'s";
    case 3:
     cout<<"switch structure";
     break;
    case 4:
     break;
    case 5:
     cout<<"this program show effect";
    case 6:
    case 7:
     cout<<"of the break statment";
     break;
    default:
       cout<<"the number is out of range."<<endl;
    }
    cout<<"out of the switch structure."<<endl;
    return 0;
}