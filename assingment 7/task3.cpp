#include<iostream>
using namespace std;
int main()
{
    string name;
    int e,m,c,s,b,marks;
    float percentage;
    cout<<"enter name of student=";
    cin>>name;
    cout<<"enter english marks out of 100=";
    cin>>e;
    cout<<"enter math marks out of 100=";
    cin>>m;
    cout<<"enter chemistry marks out of 100=";
    cin>>c;
    cout<<"enter social science marks out of 100=";
    cin>>s;
    cout<<"enter biology marks out of 100=";
    cin>>b;
    marks=e+m+c+s+b;
    percentage=(marks/500.0)*100.0;
    cout<<"percentage is="<<percentage<<endl;
    if(percentage>=90)
      cout<<"A+";
    else if(percentage>=80||percentage<90)
      cout<<"A";
    else if(percentage>=70||percentage<80)
      cout<<"B+";
    else if(percentage>=60||percentage<70)
      cout<<"B";
    else if(percentage>=50||percentage<60)
      cout<<"C";
    else if(percentage>=40||percentage<50)
      cout<<"D";
    else
      cout<<"F";
    return 0;
}