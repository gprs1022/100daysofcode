#include<iostream>
using namespace std;
int positiveNumber(int a){

    if(a>0){
        return a;
    }else{
        return -a;
    }
}

int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"The negative number is "<<positiveNumber(a);
    return 0;
}
