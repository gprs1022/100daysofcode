#include<iostream>
using namespace std;

int main() {

    int fact =  1, n;
    cout<<"Enter a number:";
    cin>>n;

    for(int i=0; i<n;i++){

        fact = fact * (i+1);
       
      
        

    }
    cout<<fact<<endl;
    return 0;
}