#include<iostream>
using namespace std;
int main()
{
    int m,ey,age,year;
    cout<<"enter money ivan starts with = ";
    cin>>m;
    cout<<"enter year ivan live upto = ";
    cin>>ey;
    age=18;
    for(year=1800;year<=ey;year++)
    {
        if(year%2==0)
        {
            m-=12000;
        }
        else
        {
            m-=12000+(50*age);
        }
        age++;
    }
    if(m>=0)
     cout<<"Yes! ivan live good life and left "<<m<<"$ behind.";
    else
     cout<<"He will need "<<"-"<<m<<"$ more.";
    return 0;
}