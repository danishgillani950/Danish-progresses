#include<iostream>
using namespace std;
int main()
{
    float h=35.45,r=15.00,t=0.010;
    cout<<"hours="<<h<<", rates="<<r<<", pay="<<h*r<<", tolerance="<<t<<endl;
    cout<<scientific;
    cout<<"scientific notation="<<endl;
    cout<<"hours="<<h<<", rates="<<r<<", pay="<<h*r<<", tolerance="<<t<<endl;
    cout<<fixed;
    cout<<"fixed decimal notation="<<endl;
    cout<<"hours="<<h<<", rates="<<r<<", pay="<<h*r<<", tolerance="<<t<<endl;
    return 0;
}