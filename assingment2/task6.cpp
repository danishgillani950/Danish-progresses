#include<iostream>
using namespace std;
int main()
{
    int fb,b,as,fp,fs;
    cout<<"enter size of fertilizer bag in pounds=";
    cin>>fb;
    cout<<"enter cost of bag=";
    cin>>b;
    cout<<"enter area in square feet that can be cover by bag=";
    cin>>as;
    fp=b/fb;
    fs=fb*as;
    cout<<"cost of fertilizer per pound="<<fp<<endl;
    cout<<"cost of fertilizing per square feet="<<fs;
    return 0;
}