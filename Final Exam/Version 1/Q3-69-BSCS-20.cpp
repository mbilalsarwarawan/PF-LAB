/*
Roll no 69-bscs-20;
question no3:
task:15
*/

#include<iostream>
using namespace std;
//fuction prototypes
int array[8];
void display(int [],int );
void displayRev(int [],int );
int sum(int [],int );
void limitValue(int ,int [],int );
void highThanAvg(int [],int );
main()
{	
//limit variable will store the value below which the array elemts is required
int limit;

cout<<"Enter the eight values to fill the array.\n";
// the respected array is for storing the array	
for(int i=0;i<8;i++)
{
	cin>>array[i];
}
cout<<"The array is : \n";
display(array,8);
cout<<"The reverse order array is given as:\n";

displayRev(array,8);
cout<<"The sum of the array elements is "<<sum(array,8)<<endl;
cout<<"Enter the limiting value to find lesser elements then it.\n";
cin>>limit;
limitValue(limit,array,8);
cout<<"The values higher than the average values.\n";
highThanAvg(array,8);
	
}
void display(int array[],int size)
{
	//function to display the valuesin array
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<"\n";
	}
}
void displayRev(int array[],int size)
{
	//this loop will reverse the order the array
	int temp;
	for(int i=0;i<size;i++)
	{		
		for(int j=i+1;j<size;j++)
		{
			if(array[i]<array[j])
			{
				temp  =array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	//again used the display function to show the reverse
	display(array,8);
}

int sum(int array[],int size)
{
	int sum;
	//this add the arrays elements
	for(int i=0;i<size;i++)
	{
		sum=sum+array[i];
	}
	return sum;
}

void limitValue(int limit,int array[],int size)
{
	
	cout<<"The values less than than limit are :\n";
	for(int i=0;i<size;i++)
	{
		//this condition will show the values lesser limiting value
		if(array[i]<limit)
		{
			cout<<array[i]<<"\n";
		}
	}
}
void highThanAvg(int array[],int size)
{
	//this is used to find the average
	int average;
	for(int i=0;i<size;i++)
	{
		average=average+array[i];
	}
	average=average/size;
	//this loop will print the values higher than the average value inthe array
	cout<<"The value higher than the average value are \n";
	for(int i=0;i<size;i++)
	{
		if(array[i]>average)
		{
			cout<<array[i]<<"\n";
		}
	}
}
