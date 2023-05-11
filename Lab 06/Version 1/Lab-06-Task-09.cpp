#include<iostream>
using namespace std;
main()
{
	int row;
	cout<<"Enter the number of rows to print the sequence :";
	cin>>row;
	
	for(int i=1;i<=row;i++)
	{
		for(int s=1;s<=i;s++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}
