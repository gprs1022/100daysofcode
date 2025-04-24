//simple intrest
#include<iostream>
using namespace std;

int main(){

    int SI,p,r,t;
    cout<<"Enter the principal amount : ";
    cin>>p;
    cout<<"Enter the rate of interest : ";
    cin>>r;
    cout<<"Enter the time period : ";
    cin>>t;
    SI = (p*r*t)/100;
    cout<<"The simple interest is : "<<SI;
    return 0;
}
