#include<iostream>
using namespace std;
int main()
{
    cout<<"static_cast<int>(9.4)="<<static_cast<int>(9.4)<<endl;
    cout<<"static_cast<int>(4.8)="<<static_cast<int>(4.8)<<endl;
    cout<<"static_cast<double>(43)="<<static_cast<double>(43)<<endl;
    cout<<"static_cast<double>(7-4)="<<static_cast<double>(7-4)<<endl;
    cout<<"static_cast<double>(14/2)"<<static_cast<double>(14/2)<<endl;
    cout<<"static_cast<int>(7.7 + static_cast<double>(15)/2)="<<static_cast<int>(7.7+static_cast<double>(15)/2)<<endl;
    return 0;
}