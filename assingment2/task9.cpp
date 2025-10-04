#include<iostream>
using namespace std;
int main()
{
    int n,n1,n2,n3,n4,rem,sum;
    cout<<"enter 4-digit number=";
    cin>>n;
    n1=n/1000;
    rem=n%1000;
    n2=rem/100;
    rem=rem%100;
    n3=rem/10;
    rem=rem%10;
    n4=rem;
    sum=n1+n2+n3+n4;
    cout<<"sum is="<<sum;
    return 0;
}