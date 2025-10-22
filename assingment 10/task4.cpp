#include<iostream>
using namespace std;
int main()
{
    char g;
    cout<<"enter grade=";
    cin>>g;
    switch (g)
    {
    case 'A':
     cout<<"grade point = 4.0";
     break;
    case 'B':
     cout<<"grade point = 3.0";
     break;
    case 'C':
     cout<<"grade point = 2.0";
     break;
    case 'D':
     cout<<"grade point = 1.0";
     break;
    case 'F':
     cout<<"grade point = 0.0";
     break;    
    default:
     cout<<"invalid grade";
    }
    return 0;
}