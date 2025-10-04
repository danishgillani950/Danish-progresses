#include<iostream>
using namespace std;
int main()
{
    string name;
    int atp,ctp,ats,cts,p,d,total,r;
    cout<<"enter movie name=";
    cin>>name;
    cout<<"enter adult ticket price=";
    cin>>atp;
    cout<<"enter chid ticket price=";
    cin>>ctp;
    cout<<"enter adult tickets sold=";
    cin>>ats;
    cout<<"enter child tickets sold=";
    cin>>cts;
    cout<<"enter percentage you donate=";
    cin>>p;
    total=(atp*ats)+(ctp*cts);
    d=total/p;
    r=total-d;
    cout<<"name of movie:"<<name<<endl;
    cout<<"total amount of tickets="<<total<<endl;
    cout<<"amount you donate="<<d<<endl;
    cout<<"remaining amount after donation="<<r;
    return 0;
}