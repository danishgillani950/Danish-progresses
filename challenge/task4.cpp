#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter character=";
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        cout<<"character is vowel";
    }
    else if(ch=='0'||ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9')
    {
        cout<<"character is digit";
    }
    else
    {
        cout<<"character is a consonent";
    }
    return 0;
}