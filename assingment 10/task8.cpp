#include<iostream>
using namespace std;
int main()
{
    float gpa;
    cout<<"enter gpa = ";
    cin>>gpa;
    if(gpa>=2.0)
     {
        if(gpa>=3.9)
         cout<<"Dean's honor list.";
        else
         cout<<"you have a good gpa.";
     }
    else
     cout<<"the gpa is below graduation requirment."<<endl<<"see your academic adviser"<<endl;
    return 0;
}