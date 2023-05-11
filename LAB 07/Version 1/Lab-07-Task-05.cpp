#include<iostream>
using namespace std;
main()
{
	//initialization
	int arr[100],n,i;
	cout<<"Enter the size of array.\n";
	cin>>n;
	cout<<"Enter the numbers in array.\n";
	for( i=0;i<n;i++)
    { //filling the array
    	cin>>arr[i];
	}
	cout<<"The even values of arrays are given.\n";
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{//printing the even values
			cout<<arr[i]<<endl;
		}
	}
}
