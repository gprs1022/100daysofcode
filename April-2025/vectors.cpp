#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<string> cars = {"Audi", "BMW", "Volvo"};
    for (int i = 0; i < cars.size(); i++)
    {
        cout<<cars[i]<<endl;
    }

    for(string car : cars)
    {
        cout<<car<<endl;
    }
    return 0;
}