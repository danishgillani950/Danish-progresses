#include<iostream>
using namespace std;
int main()
{
    string temp,h;
    cout<<"enter temprature=";
    cin>>temp;
    cout<<"enter humidity=";
    cin>>h;
    if(temp=="warm"&&h=="dry")
      cout<<"play tennis";
    else if(temp=="warm"&&h=="humid")
      cout<<"swim";
    else if(temp=="cold"&&h=="dry")
      cout<<"play basketball";
    else if(temp=="cold"&&h=="humid")
      cout<<"watch tv";
    else
      cout<<"invalid input";
    return 0;
}