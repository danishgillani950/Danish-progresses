#include<iostream>
#include<cmath>
#include<string>
using namespace std;
const double PI=3.1416;
int main()
{
    double sr,sv,p1x,p1y,p2x,p2y,d;
    string str;
    cout<<"enter radius of sphere=";
    cin>>sr;
    sv=(4/3)*PI*pow(sr,3);
    cout<<"volume of sphere="<<sv<<endl;
    cout<<"enter coordinates of two points in X-Y plane=";
    cin>>p1x>>p1y>>p2x>>p2y;
    d=sqrt(pow(p2x-p1x,2)+pow(p2y-p1y,2));
    cout<<"distance between points"<<"("<<p1x<<","<<p1y<<") and "<<"("<<p2x<<","<<p2y<<") is ="<<d<<endl;
    str="programming in c++ is good";
    cout<<"no. of characters including blanks in"<<str<<"is ="<<str.length()<<endl;
    return 0;
}