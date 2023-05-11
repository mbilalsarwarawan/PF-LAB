#include<iostream>
using namespace std;
main()
{
	int row;
	
	
	for(int i=0;i<=6;i++)
	{
		
		for(int s=7;s>=i;s--){
			cout<<" ";
		}
		
		for(row=1;row<=2*i+1;row++)
		{
		
	       cout<<"T";
			
			
		}
		cout<<"\n";
	}
}
