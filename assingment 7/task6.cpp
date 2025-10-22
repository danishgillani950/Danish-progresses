#include<iostream>
using namespace std;
int main()
{
    string fruit,day;
    int n;
    float p;
    cout<<"enter fruit name=";
    cin>>fruit;
    cout<<"enter day=";
    cin>>day;
    cout<<"enter total fruits=";
    cin>>n;
    if((fruit=="apple")&&(day=="monday"||day=="tuesday"||day=="wednesday"||day=="thursday"||day=="friday"))
    {
        p=n*1.20;
        cout<<"price="<<p;
    }
    else if((fruit=="apple")&&(day=="saturday"||day=="sunday"))
    {
        p=n*1.25;
        cout<<"price="<<p;
    }
    else if((fruit=="banana")&&(day=="monday"||day=="tuesday"||day=="wednesday"||day=="thursday"||day=="friday"))
    {
        p=n*2.50;
        cout<<"price="<<p;
    }
    else if((fruit=="banana")&&(day=="saturday"||day=="sunday"))
    {
        p=n*2.70;
        cout<<"price="<<p;
    }
    else if((fruit=="orange")&&(day=="monday"||day=="tuesday"||day=="wednesday"||day=="thursday"||day=="friday"))
    {
        p=n*0.85;
        cout<<"price="<<p;
    }
    else if((fruit=="orange")&&(day=="saturday"||day=="sunday"))
    {
        p=n*0.90;
        cout<<"price="<<p;
    }
    else if((fruit=="grapefruit")&&(day=="monday"||day=="tuesday"||day=="wednesday"||day=="thursday"||day=="friday"))
    {
        p=n*1.45;
        cout<<"price="<<p;
    }
    else if((fruit=="grapefruit")&&(day=="saturday"||day=="sunday"))
    {
        p=n*1.60;
        cout<<"price="<<p;
    }
    else if((fruit=="kiwi")&&(day=="monday"||day=="tuesday"||day=="wednesday"||day=="thursday"||day=="friday"))
    {
        p=n*2.70;
        cout<<"price="<<p;
    }
    else if((fruit=="kiwi")&&(day=="saturday"||day=="sunday"))
    {
        p=n*3.00;
        cout<<"price="<<p;
    }
    else if((fruit=="pineapple")&&(day=="monday"||day=="tuesday"||day=="wednesday"||day=="thursday"||day=="friday"))
    {
        p=n*5.50;
        cout<<"price="<<p;
    }
    else if((fruit=="pineapple")&&(day=="saturday"||day=="sunday"))
    {
        p=n*5.60;
        cout<<"price="<<p;
    }
    else if((fruit=="grapes")&&(day=="monday"||day=="tuesday"||day=="wednesday"||day=="thursday"||day=="friday"))
    {
        p=n*3.85;
        cout<<"price="<<p;
    }
    else if((fruit=="grapes")&&(day=="saturday"||day=="sunday"))
    {
        p=n*4.20;
        cout<<"price="<<p;
    }
    return 0;
}