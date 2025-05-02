#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the value of a,b,c:";
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"a is maximum number";


    } else if(b>a && b>c){
        cout<<"b is maximum number";

    }
    else if(c>a && c>b){
        cout<<"c is maximum number";

    }

    return 0;
}