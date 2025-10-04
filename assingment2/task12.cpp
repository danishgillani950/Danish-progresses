#include<iostream>
using namespace std;
int main()
{
    int n,w,h,nw;
    cout<<"enter square meters you can paint=";
    cin>>n;
    cout<<"enter width (in meters)=";
    cin>>w;
    cout<<"enter height (in meters)=";
    cin>>h;
    nw=n/(w*h);
    cout<<"no. of walls you paint are="<<nw;
    return 0;
}