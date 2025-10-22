#include<iostream>
using namespace std;
int main()
{
   char l;
   int d,n;
   cout<<"program to convert uppercase letter to their corresponding telephone digits."<<endl;
   cout<<"to stop the program enter #."<<endl;
   cout<<"enter an uppercase letter:";
   cin>>l;
   while (l!='#')
    {
      cout<<"letter = "<<l;
      cout<<",c(orresponding telephone digit = ";
      n=static_cast<int>(l)-static_cast<int>('A');
      if(0<=n&&n<26)
       {
        d=(n/3)+2;
        if(((n/3==6)||(n/3==7))&&(n%3==0))
         d=d-1;
        if(d>9)
         d=9;
        cout<<d<<endl;
       }
      else
       cout<<"invalid input."<<endl;
       cout<<"\nenter another uppercase letter to find it's corresponding telephone digit."<<endl;
       cout<<"to stop the program enter #."<<endl;
       cout<<"enter a letter = ";
       cin>>l;
    }
    return 0;
    
}