#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float sd,sw,ac;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"enter suitcase deminsions (length + width + depth) in inches=";
    cin>>sd;
    cout<<endl;
    cout<<"enter suitcase weight in pounds =";
    cin>>sw;
    cout<<endl;
    if(sd>108||sw>50)
     ac=50.00;
    cout<<"additional suitcase charges =$"<<ac<<endl;
    return 0;
}