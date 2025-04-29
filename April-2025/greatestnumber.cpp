#include<iostream>
using namespace std;
int main(){

    int a,b,c;
    cout<<"Enter the value of a,b,c"<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"a is the greatest number"<<endl;
    }
    else if(b>a && b>c){
        cout<<"b is the greatest number"<<endl;
    }
    else {
        cout<<"c is the greatest number"<<endl;
    }
  
    return 0;
}