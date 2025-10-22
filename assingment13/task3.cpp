#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=4;i>=0;i--)
     {
        for(j=i;j<4;j++)
         cout<<" "<<" ";
        for(k=i;k>0;k--)
         cout<<" "<<"*";
        cout<<endl;
     }
    return 0;
}