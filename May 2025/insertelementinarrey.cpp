#include<bits/stdc++.h>
using namespace std;
void insertAtPosition(vector<int>&arr,int element,int pos){
    
   if(pos >= 0 && pos<= arr.size()){
    arr.insert(arr.begin()+pos,element);
   }
   else{
    cout<<"Invalid Position";
    return;
   }

}
int main(){

    int n;
    cout<<"Enter the size of arrey";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the elements of arrey";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int element ,pos;
    cout<<"Enter the element to be inserted";
    cin>>element;
    cout<<"Enter the position at which element is to be inserted";
    cin>>pos;
    insertAtPosition(arr,element,pos);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;



}
    
