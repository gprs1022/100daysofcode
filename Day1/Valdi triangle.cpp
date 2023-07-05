//valid Triangle or not
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int angle1,angle2,angle3, sum;
	cin>>angle1>>angle2>>angle3;
	sum = angle1+angle2+angle3;
	if(sum==180)
	{
		cout<<"Triangle is valid";
	} 
	else
	{
		cout<<"Triangle is  not valid";
	}
}
