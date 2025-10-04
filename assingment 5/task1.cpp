#include<iostream>
using namespace std;
int main()
{
    string country,i;
    float tp,dp,d;
    i="ireland";
    cout<<"enter couuntry name=";
    cin>>country;
    cout<<"enter ticket price=";
    cin>>tp;
    if(country==i)
    {
        d=tp*(10/100.0);
        dp=tp-d;
    }
    else
    {
        d=tp*(5/100.0);
        dp=tp-d;
    }
    cout<<"discount is="<<d<<endl;
    cout<<"discounted price is="<<dp;
    return 0;
}