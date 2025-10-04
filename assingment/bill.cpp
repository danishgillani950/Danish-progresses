#include<iostream>
using namespace std;
int main()
{
    int price,unit;
    float tax,total;
    cout<<"enter units=";
    cin>>unit;
    price=3*unit;
    tax=(20.0/100)*price;
    total=price+tax+35+500;
    cout<<"total price is="<<total;
    return 0;
}