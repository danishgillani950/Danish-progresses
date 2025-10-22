#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    string name;
    int nov,nob,tnob,counter;
    float cob;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"enter no. of volunteers =";
    cin>>nov;
    tnob=0;
    counter=0;
    while(counter<nov)
    {
        cout<<"enter volunteer's name and no. of boxes sold = ";
        cin>>name >>nob;
        tnob=tnob+nob;
        counter++;
    }
    cout<<"total no. of boxes sold are = "<<tnob<<endl;
    cout<<"enter cost of one box = ";
    cin>>cob;
    cout<<"total money made by selling cookies = $"<<tnob*cob<<endl;
    if(counter!=0)
     cout<<"average no. of boxes sold by volunteers = "<<tnob/counter<<endl;
    else
     cout<<"no input.";
    return 0; 
}