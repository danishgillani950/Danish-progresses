#include<iostream>
using namespace std;
int main()
{
    string shape;
    float l,w,b,h,rad,s,r,c,t,a;
    cout<<"enter shape=";
    cin>>shape;
    if(shape=="square")
    {
        cout<<"enter length=";
        cin>>l;
        a=l*l;
        cout<<"area ="<<a;
    }
    else if(shape=="rectangle")
    {
        cout<<"enter length="<<endl;
        cin>>l;
        cout<<"enter width="<<endl;
        cin>>w;
        a=l*w;
        cout<<"area="<<a;
    }
    else if(shape=="circle")
    {
        cout<<"enter radius="<<endl;
        cin>>rad;
        a=3.14*(rad*rad);
        cout<<"area="<<a;
    }
    else if(shape=="triangle")
    {
        cout<<"enter base="<<endl;
        cin>>b;
        cout<<"enter height="<<endl;
        cin>>h;
        a=0.5*(b*h);
        cout<<"area="<<a;
    }
    else
      cout<<"invalid input";
    return 0;
}