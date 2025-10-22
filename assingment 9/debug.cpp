#include<iostream>
using namespace std;
int main()
{
    int f,c;
    cout<<"enter tempreture in fehrenheit=";
    cin>>f;
    cout<<endl;
    c=static_cast<int>(5.0/9*(f-32)+0.5);
    cout<<f<<"degree fahrenheit="<< c<<"degree calcius";
    return 0;
}