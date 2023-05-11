#include<iostream>
using namespace std;
main()
{
	//iniatilizing the variables
	int arr[10],last,next,previous;
	cout<<"Enter the 10 numbers in the array to swap element with its next elements.\n";
	for(int i=0;i<10;i++)
	{
	   cin>>arr[i];	
    }
    //the output
    cout<<"The shuffled positions are \n";
    //shuffling the position in array
    for(int j=0;j<10;j++)
    {
     previous=arr[j];
     next=arr[j+1];
     arr[j]=next;
     arr[j+1]=previous;
	}
	//the output
	for(int m=0;m<10;m++)
	cout<<arr[m]<<endl;
}
