// A school has following rules for grading system:
// a. Below 25 - F
// b. 25 to 44 - E
// c. 45 to 49 - D
// d. 50 to 59 - C
// e. 60 to 79 - B
// f. 80 to 100 - A
// Ask user to enter marks and print the corresponding grade.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=80 && n<=100)
    {
        cout<<"A";
    }
    else if(n>=60 && n<=79)
    {
        cout<<"B";
    }
    else if(n>=50 && n<=59)
    {
        cout<<"C";
    }
    else if(n>=45 && n<=49)
    {
        cout<<"D";
    }
    else if(n>=25 && n<=44)
    {
        cout<<"E";
    }
    else if(n<=25)
    {
        cout<<"F";
    }
 return 0;
}