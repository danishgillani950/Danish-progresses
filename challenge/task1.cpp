#include<iostream>
using namespace std;
int main()
{
    float shopping,disc1,disc2,p1,p2;
    cout<<"enter cost of your shopping=";
    cin>>shopping;
    if(shopping<=5000)
    {
        disc1=(5/100.0)*shopping;
        cout<<"discount is="<<disc1;
    }
    else if(shopping>5000)
    {
        disc2=(10/100.0)*shopping;
        cout<<"discount is="<<disc2;
    }
    return 0;
}