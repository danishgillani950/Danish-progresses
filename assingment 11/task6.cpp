#include<iostream>
using namespace std;
int main()
{
    int n1,n2,x,y,n,gcd,lcm;
    cout<<"enter two numbers = ";
    cin>>n1 >>n2;
    x=n1;
    y=n2;
    while(n2!=0)
    {
        n=n2;
        n2=n1%n2;
        n1=n;
    }
    gcd=n1;
    lcm=(x*y)/gcd;
    cout<<"gcd = "<<gcd<<endl;
    cout<<"lcm = "<<lcm;
    return 0;
}