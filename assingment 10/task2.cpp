#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float w,r,h;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"enter working hours or rate=";
    cin>>h >>r;
    if(h>40.0)
     w=40.0*r+1.5*r*(h-40.0);
    else 
     w=h*r;
    cout<<endl;
    cout<<"the wages are = $"<<w<<endl;
    return 0; 
}