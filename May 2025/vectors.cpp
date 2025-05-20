#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<string> cars = {"Volvo", "BMW", "Ford","Mazda"};
     cars.push_back("Hondai");// Maz
    cout<<cars.front()<<endl; // Volvo
    cout<<cars.back()<<endl;
    
    cout<<cars.at(1);
    cout<<cars.at(4);

    
    
}