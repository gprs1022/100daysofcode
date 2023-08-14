#include<bits/stdc++.h>
using namespace std;

// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times
// void -> which does not returns anything
// return
// parameterised
// non parameterised
// void printName(string name){
//     cout<<"Hey"<<name;
// }

// int main()
// { 
//     string name;
//     cin>>name;
//    printName(name);
//  return 0;
// }
int sum(int num1, int num2){
    int num3 = num1 + num2;
    return num3;
}
int main(){
 int num1, num2;
 cin>>num1>>num2;
  sum(num1, num2);
  
  return   0;
}