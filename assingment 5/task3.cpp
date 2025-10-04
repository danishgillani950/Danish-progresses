#include<iostream>
using namespace std;
int main()
{
    int t1,t2;
    cout<<"enter temprature of 1st city=";
    cin>>t1;
    cout<<"enter temprature of 2nd city=";
    cin>>t2;
    if(t1-t2>10)
      cout<<"diffrnce is too big";
    else
    cout<<"program ended";
    return 0;  
}