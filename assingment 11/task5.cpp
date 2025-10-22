#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,sum=0,d;
    cout<<"enter a number=";
    cin>>n;
    n=abs(n);
    while(n>0)
    {
        d=n%10;
        sum+=d;
        n/=10;
    }
    cout<<"sum of digits="<<sum;
    return 0;
}