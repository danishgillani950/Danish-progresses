#include<iostream>
using namespace std;
int main()
{
    string name;
    int kg,n;
    cout<<"enter patient name=";
    cin>>name;
    cout<<"enter targeted weight lose=";
    cin>>kg;
    n=kg*15;
    cout<<name<<" need "<<n<<" days to lose "<<kg<<" of weight by following doctor suggestions"; 
}