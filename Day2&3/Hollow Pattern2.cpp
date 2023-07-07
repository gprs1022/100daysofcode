////hollow Pattern
//**********
//*        *
//*        *
//*        *
//*        *
//**********      

#include<iostream>
using namespace std;
int main(){
	for(int row=0; row<6; row++)
	{
		if(row==0 || row==5)
		{
			for(int col=0;col<10;col++)
			{
				cout<<"*";
			}
			cout<<endl;
		} 
		
		else{
			cout<<"*";
			for(int i=0;i<8;i++)
			{
				cout<<" ";
			} 
			
			cout<<"*";
		} 
		cout<<endl;
	}
}  
