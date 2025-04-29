#include<iostream>
using namespace std;
int main(){

    char ch;
    cout<<"Enter the charecter"<<endl;
    cin>>ch;
    if(ch>='A'&& ch<='Z'){
        cout<<"Uppercase"<<endl;
    }
    else if(ch>='a'&& ch<='z'){
        cout<<"Lowercase"<<endl;
    }
    else if(ch>='0'&& ch<='9'){
        cout<<"Digit"<<endl;
    }
    else{
        cout<<"Special"<<endl;
    }
    return 0;
    
}