#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int m=245,s=55;
    float h=35.45,err=3.7564;
    cout<<fixed<<showpoint;
    cout<<"123456789012345678901234567890"<<endl;
    cout<<setw(5)<<m<<endl;
    cout<<setprecision(2);
    cout<<setw(5)<<m<<setw(5)<<s<<setw(6)<<h<<setw(7)<<err<<endl<<endl;
    cout<<setw(5)<<s<<setw(5)<<m<<setw(4)<<h<<setw(7)<<err<<endl<<endl;
    cout<<setw(2)<<m<<setw(6)<<h<<setw(7)<<err<<endl<<endl;
    cout<<setw(5)<<m<<setw(7)<<"error"<<err<<endl;
    return 0;
}