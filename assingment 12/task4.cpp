#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int n,g;
    float ig;
    srand(time(0));
    n=rand()%100;
    ig=false;
    while(!ig)
    {
        cout<<"enter an integer greater than or equal to 0 and less than 100 = ";
        cin>>g;
        if(g==n)
        {
            cout<<"you guessed the correct number."<<endl;
            ig=true;
        }
        else if(g<n)
          cout<<"your guess is lower than the number.\n Guess again."<<endl;
        else
          cout<<"your guess is higher than the number\n Guess again."<<endl;
    }
    return 0;
}