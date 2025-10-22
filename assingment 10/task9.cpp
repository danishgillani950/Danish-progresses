#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"enter first and second number = ";
    cin>>n1 >>n2;
    cout<<"numbers you entered are = "<<n1 <<n2<<endl;
    if(n1>n2)
     cout<<"larger no. is = "<<n1;
    else if(n2>n1)
     cout<<"larger no. is = "<<n2;
    else
     cout<<"both numbers are equal."<<endl;
    return 0;
}