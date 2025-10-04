#include<iostream>
using namespace std;
int main()
{
    float s;
    cout<<"enter speed=";
    cin>>s;
    if(s<=10)
      cout<<"slow";
    else if((s>10)&&(s<=50))
      cout<<"average";
    else if((s>50)&&(s<=150))
      cout<<"fast";
    else if((s>150)&&(s<=1000))
      cout<<"ultra fast";
    else
      cout<<"extremely fast";
    return 0;
}
