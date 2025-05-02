#include<iostream>
using namespace std;
int main(){

    int num,digit,N,reverse=0;
    cout<<"Enter the number: ";
    cin>>N;
   cout<<"The number entered is:"<<N;
   num=N;
   while(num!=0){
    digit=num%10;
    reverse=reverse*10+digit;
    num=num/10;
   }
   cout<<"Reverse of the number is:"<<reverse;
   if(N==reverse){
    cout<<"The number is a palindrome";
   }
   else{
    cout<<"The number is not a palindrome";
   }
return 0;
    
}