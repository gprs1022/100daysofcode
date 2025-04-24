#include<iostream>
using namespace std;
int main(){

    int grossSalary, basicSalary, HRA, DA, TA, PF, netSalary;
    cout<<"Enter the basic sarary";
    cin>>basicSalary>>HRA>>DA>>TA>>PF;
    grossSalary = basicSalary + HRA + DA + TA;
    netSalary = grossSalary - PF;
    cout<<"Gross Salary is "<<grossSalary<<endl;
    cout<<"Net Salary is "<<netSalary<<endl;

  
}