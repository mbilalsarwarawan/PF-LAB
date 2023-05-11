#include<iostream>
using namespace std;
main()
{
	int row;
	
	cout<<"Enter the number of rows to print the diamond : ";
	cin>>row;
	int space=row;
	
	for(int i=1;i<=row;i++)
	{
		
		for(space=row;space>=i;space--)
		{
			cout<<" ";	
		}
		
		for(int n=1;n<=2*i-1;n++)
		{
		
	       cout<<"*";
			
			
		}
		cout<<"\n";
	
	}
	for(int i=1;i<row;i++)
	{
		for(int space=1;space<=i+1;space++)
		{
			cout<<" ";
		}
		for(int n=(2*row-i)-1;n>i;n--)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
