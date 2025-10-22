#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x=7'087'625;
    long long y=45'446'245'456'234;
    double z=23'987'966.68'458;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    cout<<"z="<<z<<endl;
    cout<<1'2'3'4'5'8'6'7'9;
    cout<<endl;
    cout<<"4'672 * 3'564 ="<<4'672*3'564<<endl;
    return 0;
}