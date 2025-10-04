#include<iostream>
using namespace std;
int main()
{
    string name;
    float m,i,e;
    float agg;
    cout<<"enter name=";
    cin>>name;
    cout<<"enter matric marks out of 1100=";
    cin>>m;
    cout<<"enter inter marks out of 550=";
    cin>>i;
    cout<<"enter ecat marks out of 400=";
    cin>>e;
    agg=(e/400)*50+(i/550)*40+(m/1100)*10;
    cout<<"your aggrecate is="<<agg;
    return 0;
}