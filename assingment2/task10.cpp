#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,r1,r2,r3,r4,r5,r;
    cout<<"enter 15 numbers=";
    cin>>n1 >>n2 >>n3 >>n4 >>n5 >>n6 >>n7 >>n8 >>n9 >>n10 >>n11 >>n12 >>n13 >>n14 >>n15;
    r1=n1+n2+n3+n4+n5;
    r2=n6*n7*n8*n9*n10;
    r3=n11-n12-n13-n14-n15;
    r4=r1+r2;
    r5=r4-r3;
    r=r5;
    cout<<"end result is="<<r;
    return 0;
}