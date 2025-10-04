#include<iostream>
using namespace std;
int main()
{
    int hd,td,wd,pm,norm;
    cout<<"enter holidays=";
    cin>>hd;
    td=365;
    wd=td-hd;
    pm=(wd*63)+(hd*127);
    norm=30000;
    if(pm>norm)
    {
        cout<<"tom ran away"<<endl;
        cout<<pm-norm <<" more minuets for play";
    }
    else
    {
        cout<<"tom sleep well"<<endl;
        cout<<norm-pm <<" less  minutes for play";
    }
    return 0;

}