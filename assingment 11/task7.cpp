#include<iostream>
using namespace std;
int main()
{
    int n,num,i,c1=0,c2=0,c3=0,c4=0,c5=0;
    float p1,p2,p3,p4,p5;
    cout<<"enter how many numbers you want to enter = ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"enter number "<<i<<" = ";
        cin>>num;
        if(num<200)
         c1++;
        else if(num>=200&&num<=399)
         c2++;
        else if(num>=400&&num<=599)
         c3++;
        else if(num>=600&&num<=799)
         c4++;
        else
         c5++;
    }
    p1=(c1*100)/n;
    p2=(c2*100)/n;
    p3=(c3*100)/n;
    p4=(c4*100)/n;
    p5=(c5*100)/n;
    cout<<"percentage of 1st no. = "<<p1<<"%"<<endl;
    cout<<"percentage of 2nd no. = "<<p2<<"%"<<endl;
    cout<<"percentage of 3rd no. = "<<p3<<"%"<<endl;
    cout<<"percentage of 4th no. = "<<p4<<"%"<<endl;
    cout<<"percentage of 5th no. = "<<p5<<"%"<<endl;
    return 0;
}