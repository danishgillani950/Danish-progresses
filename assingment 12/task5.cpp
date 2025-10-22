#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"enter a number =";
    cin>>num;
    while(num<=10)
    {
        sum=sum+num;
        num++;
    }
    cout<<"sum = "<<sum;
    return 0;
}