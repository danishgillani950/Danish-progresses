#include<iostream>
using namespace std;
int main()
{
    int p1,p2,c,counter,nf;
    cout<<"enter first two fibonacci = ";
    cin>>p1 >>p2;
    cout<<"first two fibonacci no.'s are = "<<p1<<","<<p2<<endl;
    cout<<"enter the position of desired fibonacci no. = ";
    cin>>nf;
    if(nf==1)
     c=p1;
    else if(nf==2)
     c=p2;
    else
     {
        counter=3;
        while (counter<=nf)
        {
           c=p2+p1;
           p1=p2;
           p2=c;
           counter++;
        }
     }
    cout<<"the fibonacci no. at position "<<nf<<" is = "<<c;
    return 0;
}