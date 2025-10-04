#include<iostream>
using namespace std;
int main()
{
    float ic,pc,i;
    cout<<"enter imposter count=";
    cin>>ic;
    cout<<"enter player count=";
    cin>>pc;
    i=100*(ic/pc);
    cout<<"chance of being an imposter is="<<i<<"%";
    return 0;
}    