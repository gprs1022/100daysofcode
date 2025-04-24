#include<iostream>
using namespace std;
int main(){

    int hindi, english,maths,science, computer;
    cout<<"Enter the marks of hindi"<<endl;
    cin>>hindi;
    cout<<"Enter the marks of english"<<endl;
    cin>>english;
    cout<<"Enter the marks of maths"<<endl;
    cin>>maths;
    cout<<"Enter the marks of science"<<endl;
    cin>>science;
    cout<<"Enter the marks of computer"<<endl;
    cin>>computer;
    float percentage=(hindi+english+maths+science+computer)/5;
    cout<<"The percentage is "<<percentage<<endl;
    return 0;
}