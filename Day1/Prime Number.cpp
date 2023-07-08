//Prime number
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	if(N%1==0 && N%N==0)
	{
		cout<<"Number is Prime";
	} 
	else{
		cout<<"Number is not Prime";
	}
}
