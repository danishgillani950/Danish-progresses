#include<iostream>
using namespace std;
const int num=12;
int main()
{
    int fn,sn;
    fn=16;
    cout<<"line 8: first no.="<<fn<<endl;
    cout<<"line 9: enter second no.=";
    cin>>sn;
    cout<<"line 11: second no.="<<sn<<endl;
    fn=fn*num+4*sn;
    cout<<"line 13: new value of first no.="<<fn<<endl;
    return 0;
}