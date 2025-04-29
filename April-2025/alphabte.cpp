#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
    {
        cout<<ch<<" is a alphabet";
    }
    else
    {
        cout<<ch<<" is not a alphabet";
    }
    return 0;
}