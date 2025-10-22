#include<iostream>
using namespace std;
int main()
{
    string m;
    char ch1,ch2;
    int d;
    float spn,p;
    cout<<"enter month=";
    cin>>m;
    cout<<"enter s for studio=";
    cin>>ch1;
    cout<<"enter a for apartment=";
    cin>>ch2;
    cout<<"enter days of stay=";
    cin>>d;
    if((ch1=='s'||ch1=='S')&&(m=="may"||m=="october"))
    {
        spn=50.00;
        if(d<=7)
        {
            p=spn*d;
            cout<<"price="<<p<<endl;
        }
        else if((d>7)&&(d<=14))
        {
            p=spn*d;
            p=p-(p*0.05);
            cout<<"price="<<p<<endl;
        }
        if(d>14)
        {
            p=spn*d;
            p=p-(p*0.30);
            cout<<"price="<<p<<endl;
        }
    }
    else if((ch1=='s'||ch1=='S')&&(m=="june"||m=="september"))
    {
        spn=75.20;
        if(d<=14)
        {
            p=spn*d;
            cout<<"price="<<p<<endl;
        }
        else
        {
            p=spn*d;
            p=p-(p*0.20);
            cout<<"price="<<p<<endl;
        }
    }
    if((ch1=='s'||ch1=='S')&&(m=="july"||m=="august"))
    {
        spn=76.00;
        p=spn*d;
        cout<<"price="<<p<<endl;
    }
    if((ch2=='a'||ch2=='A')&&(m=="may"||m=="october"))
    {
        spn=65.00;
        if(d<=14)
        {
        p=spn*d;
        cout<<"price="<<p<<endl;
        }
        else
        {
            p=spn*d;
            p=p-(p*0.10);
            cout<<"price="<<p<<endl;
        }
    }
    else if((ch2=='a'||ch2=='A')&&(m=="june"||m=="september"))
    {
        spn=68.70;
        if(d<=14)
        {
        p=spn*d;
        cout<<"price="<<p<<endl;
        }
        else
        {
            p=spn*d;
            p=p-(p*0.10);
            cout<<"price="<<p<<endl;
        }
    }
    if((ch2=='a'||ch2=='A')&&(m=="july"||m=="august"))
    {
        spn=77.00;
        if(d<=14)
        {
        p=spn*d;
        cout<<"price="<<p<<endl;
        }
        else
        {
            p=spn*d;
            p=p-(p*0.10);
            cout<<"price="<<p<<endl;
        }
    }
    return 0;
}