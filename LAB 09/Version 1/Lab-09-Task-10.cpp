#include<iostream>
using namespace std;
int factorial(int );
main()
{
	int num;
	cout<<"Enter the number whose factorial is to be calculated .\n";
	cin>>num;
	cout<<"The sum of the series from 1 to "<<num<<" is given.\n";
	cout<<factorial(num);
}
int factorial(int num)
{

	if(num==1)
	{
	  return num;
	}
	else
	return (num*factorial(num-1));
}
