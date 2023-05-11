#include<iostream>
using namespace std;
main()
{
	// number is the array in which numbers stored.
	int number[10];
	int largest,smallest;
	
	cout<<"Enter ten numbers to check the largest and smallest.\n";
	//this loop is for initializing the array 
	for(int i=0;i<10;i++)
	{
	    cout<<"Enter the "<<" number "<<i+1<<".\n";
		cin>>number[i];	
	}
	//first we initialize largest and smallest
	largest=number[0];
	smallest=number[0];
	for(int j=0;j<10;j++)
	{
		//now we compare the numbers one by one
		if(number[j]>largest)
		largest=number[j];
		if(number[j]<smallest)
		smallest=number[j];
	}
	cout<<"The largest number is "<<largest<<" .\n";
	cout<<"The smallest number is "<<smallest<<" .\n";
}
