#include<iostream>
using namespace std;
int main()
{
    int vi,t,a,vf;
    cout<<"enter initial velocity in m/s=";
    cin>>vi;
    cout<<"enter time=";
    cin>>t;
    cout<<"enter acceleration in (m/s^2)=";
    cin>>a;
    vf=(a*t)+vi;
    cout<<"final velocity is="<<vf;
    return 0;
}