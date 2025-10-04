#include<iostream>
using namespace std;
int main()
{
    int age,t,avg;
    cout<<"enter person age=";
    cin>>age;
    cout<<"enter times he move house=";
    cin>>t;
    avg=age/(t+1);
    cout<<"average years he live in same house="<<avg;
    return 0;
}