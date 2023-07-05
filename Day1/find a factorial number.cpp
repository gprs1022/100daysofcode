//find a factorial of a number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,fact=1;
	cin>>a;
	for(int i=1; i<=a;++i)
	{
		fact = fact*i;
   	}
   	
   	
   	cout<<fact;
}
