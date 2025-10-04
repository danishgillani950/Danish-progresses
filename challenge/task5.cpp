#include<iostream>
using namespace std;
int main()
{
    string a,b,c;
    int n1,n2,n3;
    cout<<"enter three brothers name=";
    cin>>a>> b>> c;
    cout<<"enter their ages=";
    cin>>n1 >>n2 >>n3;
    if((n1>n2)&&(n1>n3))
    {
        cout<<"name of big brother is="<<a;
    }
    else if((n2>n3)&&(n2>n1))
    {
        cout<<"name of big brother is="<<b;
    }
    else
    {
        cout<<"name of big brother is="<<c;
    }
    return 0;
}