#include<iostream>
using namespace std;
int main()
{
    int l,i,a=0,b=1,next;
    cout<<"enter length of fibonacci numbers=";
    cin>>l;
    for(i=1;i<=l;i++)
     {
        cout<<a<<",";
        next=a+b;
        a=b;
        b=next;
     }
    return 0; 
}