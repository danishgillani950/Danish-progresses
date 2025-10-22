#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,d,count=0,ld;
    cout<<"enter a number=";
    cin>>n;
    cout<<"enter the digit whose frwequency you want=";
    cin>>d;
    n=abs(n);
    if(n==0&&d==0)
    {
        count=1;
    }
    else
    {
        while(n>0)
        {
            ld=n%10;
            if(ld==d)
             count++;
            n/=10;
        }
    }
    cout<<"frequency of digit "<<d<<" is ="<<count;
    return 0;
}