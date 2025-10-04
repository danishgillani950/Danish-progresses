#include<iostream>
using namespace std;
int main()
{
    int p,n,fp;
    cout<<"enter current population=";
    cin>>p;
    cout<<"enter birth rate per month=";
    cin>>n;
    fp=(n*12)*30+p;
    cout<<"population after 30 yr is="<<fp;
    return 0;
}