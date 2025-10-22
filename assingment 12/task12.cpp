#include<iostream>
#include<iomanip>
using namespace std;
const int N=20;
int main()
{
    int n,c,z=0,o=0,e=0;
    cout<<"enter "<<N<<" integers positive,negative or zeros = "<<endl;
    cout<<"numbers you enterd are = "<<endl;
    for(c=1;c<=N;c++)
     {
        cin>>n;
        cout<<n<<" ";
        switch (n%2)
        {
        case 0:
            e++;
            if(n==0)
            z++;
            break;
        case 1:
         case -1:   
            o++; 
        }
     }
    cout<<endl;
    cout<<"there are "<<e<<" evens,"<<"which includes "<<z<<" zeros"<<endl;
    cout<<"the no. of odds are = "<<o;
    return 0;

}