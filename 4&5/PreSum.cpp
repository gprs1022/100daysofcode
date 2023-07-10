//Prefix sum
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	} 
	
	int pref=0;
	for(int i=0;i<n;i++)
	{
		pref=pref+a[i];
		a[i]=pref;
		cout<<a[i]<<" ";
	} 
	
	cout<<endl;
	return 0;
}
