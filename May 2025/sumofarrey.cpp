#include<iostream>
using namespace std;
int main(){
    int n , sum =0;
    cout<<"Enter the size of Arrey";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    for(int i =0;i<n;i++){
        sum =sum+arr[i];
    }
    cout<<"Sum of array is "<<sum<<endl;

    return 0;
}