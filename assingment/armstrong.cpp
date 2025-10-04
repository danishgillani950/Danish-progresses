#include<iostream>
using namespace std;
int main()
{
    int n,n1,n2,n3,rem,sum;
    cout<<"enter a number=";
    cin>>n;
    n1=n/100;
    rem=n%100;
    n2=rem/10;
    rem=rem%10;
    n3=rem;
    sum=(n1*n1*n1)+(n2*n2*n2)+(n3*n3*n3);
    if(sum==n)
      cout<<"num is armstrong";
    else
      cout<<"num is not armstrong";
    return 0;
}