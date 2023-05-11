#include<iostream>
using namespace std;
int seriesSum(int );
main()
{
	int num;
	cout<<"Enter the number to which you want to add the numbers from 1.\n";
	cin>>num;
	cout<<"The sum of the series from 1 to "<<num<<" is given.\n";
	cout<<seriesSum(num);
}
int seriesSum(int num)
{

	if(num==0)
	{
	  return num;
	}
	else
	return (num+seriesSum(num-1));
}
