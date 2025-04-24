// Convert a Person’s Name in Abbreviated
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string firstName, middleName, lastName;
    cout << "Enter First Name: ";
    cin >> firstName;
    cout << "Enter Middle Name: ";
    cin >> middleName;
    cout << "Enter Last Name: ";
    cin >> lastName;

    cout << "Abbreviated Name: " 
         << firstName[0] << ". " 
         << middleName[0] << ". " 
         << lastName << endl;

    return 0;
}
