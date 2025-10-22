#include<iostream>
#include<iomanip>
using namespace std;
const double PI=3.14159265;
int main()
{
    float r=12.67,h=12.00;
    cout<<fixed<<showpoint;
    cout<<setprecision(2)<<"setprecision(2)"<<endl;
    cout<<"radius="<<r<<endl;
    cout<<"height="<<h<<endl;
    cout<<"volume="<<PI*r*r*h<<endl;
    cout<<"PI="<<PI<<endl<<endl;
    cout<<setprecision(3)<<"setprecision(3)"<<endl;
    cout<<"radius="<<r<<endl;
    cout<<"height="<<h<<endl;
    cout<<"volume="<<PI*r*r*h<<endl;
    cout<<"PI="<<PI<<endl<<endl;
    cout<<setprecision(4)<<"setprecision(4)"<<endl;
    cout<<"radius="<<r<<endl;
    cout<<"height="<<h<<endl;
    cout<<"volume="<<PI*r*r*h<<endl;
    cout<<"PI="<<PI<<endl<<endl;
    cout<<setprecision(3) <<r<<","<<setprecision(2) <<h<<","<<setprecision(5) <<PI<<endl;
    return 0;
}
