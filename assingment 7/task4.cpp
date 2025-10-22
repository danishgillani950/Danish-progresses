#include<iostream>
using namespace std;
int main()
{
    string m;
    int date;
    cout<<"enter birth month=";
    cin>>m;
    cout<<"enter birth date=";
    cin>>date;
    if((m=="march"&&date>=21)||(m=="april"&&date<=19))
     {
         cout<<"the ram";
     }
    else if((m=="april"&&date>=20)||(m=="may"&&date<=20))
     {
         cout<<"the bull";
     }
    else if((m=="may"&&date>=21)||(m=="june"&&date<=20))
     {
         cout<<"the twins";
     }
    else if((m=="june"&&date>=21)||(m=="july"&&date<=22))
     {
         cout<<"the crab";
     }
    else if((m=="july"&&date>=23)||(m=="august"&&date<=22))
     {
         cout<<"the lion";
     }
    else if((m=="august"&&date>=23)||(m=="september"&&date<=22))
     {
         cout<<"the virgin";
     }
    else if((m=="september"&&date>=23)||(m=="october"&&date<=22))
     {
         cout<<"the scales";
     }
    else if((m=="october"&&date>=23)||(m=="november"&&date<=21))
     {
         cout<<"the scorpion";
     }
    else if((m=="november"&&date>=22)||(m=="december"&&date<=21))
     {
         cout<<"the archer";
     }
    else if((m=="december"&&date>=22)||(m=="january"&&date<=19))
     {
         cout<<"the goat";
     }
    else if((m=="january"&&date>=20)||(m=="february"&&date<=18))
     {
         cout<<"the water bearer";
     }
    else if((m=="february"&&date>=19)||(m=="march"&&date<=20))
     {
         cout<<"the fishes";
     }
    else
      cout<<"invalid month";       
    return 0;
}