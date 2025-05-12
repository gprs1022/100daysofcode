#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the size of arrey";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<""<<endl;
    }
    cout<<endl;

    return 0;

}