#include<iostream>
using namespace std;
int main()
{
    int counter,sum,n;
    cout<<"enter no. of positive integers to be added = ";
    cin>>n;
    sum=0;
    for(counter=1;counter<=n;counter++)
     sum+=counter;
    cout<<"sum of first "<<n<<" positive integers = "<<sum;
    return 0;
}