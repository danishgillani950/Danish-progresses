#include<iostream>
using namespace std;
int main()
{
    float vp,fp,totale;
    int totalv,totalf;
    cout<<"enter vegetables price per kg (in coins)=";
    cin>>vp;
    cout<<"enter fruit price per kg (in coins)=";
    cin>>fp;
    cout<<"total kg of vegetables=";
    cin>>totalv;
    cout<<"total kg of fruits=";
    cin>>totalf;
    totale=(vp*totalv)+(fp*totalf);
    totale=totale/1.94;
    cout<<"total earning (in rs)="<<totale;
    return 0;
}