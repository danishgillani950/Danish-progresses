#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter string=";
    cin.get(ch);
    cout<<"after first cin.get(ch);ch="<<ch<<endl;
    cin.get(ch);
    cout<<"after second cin.get(ch);ch="<<ch<<endl;
    cin.putback(ch);
    cin.get(ch);
    cout<<"after putback and then cin.get(ch);ch="<<ch<<endl;
    ch=cin.peek();
    cout<<"after cin.peek();ch="<<ch<<endl;
    cin.get(ch);
    cout<<"after cin.get(ch);ch="<<ch<<endl;
    return 0;
}
