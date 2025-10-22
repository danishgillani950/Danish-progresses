#include<iostream>
using namespace std;
int main()
{
    int h,m,ah,am;
    cout<<"enter starting time(hours)=";
    cin>>h;
    cout<<"enter staring time(minutes)=";
    cin>>m;
    cout<<"enter arrival time(hours)=";
    cin>>ah;
    cout<<"enter arrival time(minutes)=";
    cin>>am;
    if(ah>h||m>am)
    {
        cout<<"late"<<endl;

    }
}