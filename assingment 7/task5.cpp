#include<iostream>
using namespace std;
int main()
{
    char ch1,ch2;
    int min;
    float rs,ps,charges;
    cout<<"enter r for residence and p for premium=";
    cin>>ch1;
    if(ch1=='r')
    {
        rs=10.00;
        cout<<"enter minutes=";
        cin>>min;
        if(min<=50)
        {
            charges=rs;
            cout<<"charges are="<<charges;
        }
        else
        {
            charges=rs+(min*0.20);
            cout<<"charges are="<<charges;
        }
    }
    else if(ch1=='p')
    {
        ps=25.00;
        cout<<"enter minutes=";
        cin>>min;
        cout<<"enter d for day and n for night=";
        cin>>ch2;
        if(ch2=='d')
        {
            if(min<=75)
            {
                charges=ps;
                cout<<"charges="<<charges;
            }
            else
            {
                charges=ps+(min*0.10);
                cout<<"charges="<<charges;
            }
        }
        else if(ch2=='n')
        {
            if(min<=100)
            {
                charges=ps;
                cout<<"charges="<<charges;
            }
            else
            {
                charges=ps+(min*0.05);
                cout<<"charges="<<charges;
            }
        }
    }
    return 0;
}