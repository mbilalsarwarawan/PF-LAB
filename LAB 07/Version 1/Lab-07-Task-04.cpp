#include<iostream>
using namespace std;
main()
{
	//initializing the variables
	int arr[100],n,temp;
	//n is the size of array
	int j,i;
	cout<<"Enter the size of array.\n";
	cin>>n;
	cout<<"Enter the array elements.\n";
	for( i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for( i=0,j=n-1;i<n/2;i++,j--)
	{
       //reversing the array
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	
	}
	cout<<"Reverse order.\n";
	for(int j=0;j<n;j++)
	cout<<arr[j]<<endl;
}
