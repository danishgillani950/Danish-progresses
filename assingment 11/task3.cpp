#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"enter a num=";
    cin>>n;
    if(n==0)
     {
        count=1;
     }
    else
     {
        n=abs(n);
        while(n>0)
        {
            n=n/10;
            count++;
        }
     }
    cout<<"total digits="<<count;
    return 0;
}