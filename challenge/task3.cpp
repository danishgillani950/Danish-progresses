#include<iostream>
using namespace std;
int main()
{
    int n1,n2,result;
    char op;
    cout<<"enter 1st num=";
    cin>>n1;
    cout<<"enter operator=";
    cin>>op;
    cout<<"enter 2nd num=";
    cin>>n2;
    if(op=='+')
    {
        result=n1-n2;
    }
    if(op=='-')
    {
        result=n1+n2;
    }
    if(op=='*')
    {
        result=n1/n2;
    }
    if(op=='/')
    {
        result=n1*n2;
    }
    cout<<"result is="<<result;
    return 0;
}