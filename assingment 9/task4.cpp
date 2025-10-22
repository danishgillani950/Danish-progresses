#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    int age=0,weight=0;
    float height=0.0;
    cout<<"enter name , age , weight and height =";
    cin>>name>> age>> weight>> height;
    cout<<"name="<<name<<endl;
    cout<<"age="<<age<<endl;
    cout<<"weight="<<weight<<endl;
    cout<<"height="<<height<<endl;
    cin.clear();
    cin.ignore(200,'\n');
    cout<<"\nline 17: Enter name , age , weight and height:";
    cin>>name>>age>>weight>>height;
    cout<<endl;
    cout<<"name="<<name<<endl;
    cout<<"age="<<age<<endl;
    cout<<"weight="<<weight<<endl;
    cout<<"height="<<height<<endl;
    return 0;
}