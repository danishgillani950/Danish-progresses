#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    double atp,ctp,pd,ga,ad,nsa;
    int ats,cts;
    string movie;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"enter movie name=";
    cin>>movie;
    cout<<endl;
    cout<<"enter adult ticket price=";
    cin>>atp;
    cout<<"enter child ticket price=";
    cin>>ctp;
    cout<<"enter no. of adult tickets=";
    cin>>ats;
    cout<<"enter no. of child tickets=";
    cin>>cts;
    cout<<"enter percentage of donation=";
    cin>>pd;
    cout<<endl;
    ga=atp*ats+ctp*cts;
    ad=ga*(pd/100);
    nsa=ga-ad;
    cout<<endl;
    cout<<endl;
    cout<<"movie name="<<movie<<endl;
    cout<<"no. of tickets sold="<<ats+cts<<endl;
    cout<<"gross amount="<<ga<<endl;
    cout<<"percentage donated"<<pd<<endl;
    cout<<"amount donated="<<ad<<endl;
    cout<<"net sale="<<nsa;
    return 0;    
}