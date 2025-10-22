#include<iostream>
using namespace std;
const int ipf=12;
const float cpi=2.54;
int main()
{
    int f,i,ti;
    float centi;
    cout<<"enter two numbers one for feet and one for inches=";
    cin>>f >>i;
    cout<<"the numbers you entered are "<<f <<"for feet and "<<i <<"for inches"<<endl;
    ti=ipf*f+i;
    cout<<"total no. of inches="<<ti<<endl;
    centi=cpi*ti;
    cout<<"the no. of centimeter="<<centi<<endl;
    return 0;
} 