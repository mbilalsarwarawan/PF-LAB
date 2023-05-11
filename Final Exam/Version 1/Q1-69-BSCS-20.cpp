/*
Roll no 69-bscs-20;
question no3:
task:15
*/

#include<iostream>
using namespace std;
main()
{
	//delaration of array of size eight
	int array[10],average;
	
	cout<<"Enter ten values in the array.\n";
	for(int i=0;i<10;i++)//this loop is for filling the array from user input
	{
		cin>>array[i];
	}
	for(int i=0;i<10;i++)
	{
		//this loop will add all the elements in the array to average
		average=average+array[i];
	}
	//divide the average variable which store sum of all the by the size to finfd the average
	average=average/10;
	cout<<"The average of all the elements in the array is "<<average<<" .";
}
