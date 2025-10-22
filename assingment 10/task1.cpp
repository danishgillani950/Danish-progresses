#include<iostream>
#include<iomanip>
using namespace std;
const double ir=0.015;
int main()
{
    double ccb,p,b,penalty;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"enter credit card balance=";
    cin>>ccb;
    cout<<endl;
    cout<<"enter the payment=";
    cin>>p;
    cout<<endl;
    b=ccb-p;
    if(b>0)
     penalty=b*ir;
    cout<<"the balance is = $"<<b<<endl;
    cout<<"the penalty to be added to your next month bill = $"<<penalty<<endl;
    return 0;
}