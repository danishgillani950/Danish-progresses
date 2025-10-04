#include<iostream>
using namespace std;
int main()
{
    int salary,advance,totaladv,cadv;
    salary=10000;
    cout<<"enter salary="<<salary<<endl;
    advance=10000/2;
    cout<<"advance per month is="<<advance<<endl;
    totaladv=(advance*6)+salary;
    cout<<"total advance of 6 months is="<<totaladv<<endl;
    cadv=(advance*8)+salary;
    if(totaladv==50000)
    {
        cout<<"he can buy laptop";
    }
    else
    {
        cout<<"he cannot buy a laptop"<<endl;
        cout<<"if cannot buy laptop then he needs 8 months advance that is="<<cadv;
    }
    return 0;
}