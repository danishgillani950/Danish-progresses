#include<iostream>
using namespace std;
int main()
{
    float r,w,t,tp,dp;
    cout<<"enter no. of red roses=";
    cin>>r;
    cout<<"enter no. of white roses=";
    cin>>w;
    cout<<"enter no. of tulips=";
    cin>>t;
    r=r*2.00;
    w=w*4.10;
    t=t*2.50;
    tp=r+w+t;
    cout<<"total price="<<tp<<endl;
    if(tp>200.0)
    {
        dp=tp-(tp*(20/100.0));
        cout<<"discounted price="<<dp;
    }
    return 0;    
}