#include<iostrem>
using namespace std;
int main(){
	int n;
	cin>>n;
	//hollow Diomond
	
	for(int row=0;row<n;row++)
	{
	  //space
	  for(int col=0;col<n-row-1;col++)
	  {
	  	cout<<" ";
		  }	
	}
}
