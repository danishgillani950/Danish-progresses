#include<iostream>
using namespace std;
int main()
{
    int age,pt,tt=0,em=10,tm=0,tp,wmp;
    cout<<"enter lilly's age = ";
    cin>>age;
    cout<<"enter price of toy = ";
    cin>>pt;
    cout<<"enter washing machine price = ";
    cin>>wmp;
    for(int i=1;i<=age;i++)
     {
        if(i%2==0)
        {
            tm+=em-1;
            em+=10;
        }
        else
        {
            tt+=1;
        }
     }
    tp=tm+(tt*pt);
    if(tp==wmp)
    {
        cout<<"Yes she can buy a washing machine.";
    }
    else if(tp<wmp)
    {
        cout<<"No! she can't buy washing machine."<<endl;
        cout<<"she need "<<wmp-tp<<" more to buy washing machine."<<endl; 
    }
    else
    {
        cout<<"Yes! she can buy a washing machine."<<endl;
        cout<<"she even have "<<tp-wmp<<" more after buying washing machine.";
    }
    return 0;
}