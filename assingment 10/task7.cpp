#include<iostream>
using namespace std;
int main()
{
    char ch;
    int acc;
    float bpf,tc,bsf,pc,pcon,bill;
    cout<<"enter customer account no.=";
    cin>>acc;
    cout<<"enter r for residential or b or business connection="<<endl;
    cin>>ch;
    switch (ch)
    case 'r': case'R': 
    { 
      bpf=4.50;
      bsf=20.50;
      pc=7.50;
      cout<<"enter premium connection=";
      cin>>pcon;
      bill=(pcon*pc)+bpf+bsf;
      cout<<"bill is="<<bill<<endl;
      break;
    case 'b':case'B':
       bpf=15.00;
       pc=50.00;
       cout<<"total channel="<<endl;
       cin>>tc;
       cout<<"enter premium connection="<<endl;
       cin>>pcon;
       if(pcon>10)
       {
        bill=75+(pcon-10)*5;
        bill=bill+((tc*pc)+bpf);
        cout<<"bill="<<bill;
       }
       else
       {
        cout<<"total channel="<<endl;
        cin>>tc;
        bill=75;
        bill=bill+((tc*pc)+bpf);
        cout<<"bill="<<bill;
       }
       break;
       default:
       cout<<"invalid";
    }
    return 0;    
}