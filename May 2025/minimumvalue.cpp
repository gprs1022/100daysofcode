#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the size of arrey";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the arrey";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
        
    }
    cout<<"The minimum value of the arrey is"<<min;
    return 0;
}