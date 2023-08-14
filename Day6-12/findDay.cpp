/*
Take the day no and print the corresponding day
for 1 print Monday, I
for 2 print Tuesday and so on for 7 print Sunday.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int day;
    cin>>day;
    switch(day)
    {
        case 1 : cout<<"Monday";
        break;
        case 2 :cout<<"Teusday";
        break;
        case 3 :cout<<"wenesday";
        break;
        case 4 :cout<<"Thursday";
        break;
        case 5 :cout<<"friday";
        break;
        case 6 :cout<<"saturday";
        break;
        case 7 :cout<<"sunday";
        break;
        default: cout<<"Invalid";
    
    }
    cout<<"Check"
 return 0;
}