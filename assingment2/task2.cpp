#include<iostream>
using namespace std;
int main()
{
    int m,fs,tf;
    cout<<"enter minutes=";
    cin>>m;
    cout<<"enter frame per second=";
    cin>>fs;
    tf=(m*60)*fs;
    cout<<"total frames are="<<tf;
    return 0;
}