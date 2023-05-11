#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int num,sum;
    int i=1;
	cout<<"Enter the number to get the sum of the numbers between 1 to that number ."<<endl;
	cin>>num;
	while(num<0)
	{
		//this loop will not accept a positive number.
		cout<<"Don't enter negative number.Try again!";
		cin>>num;
	}
	while(i<=num)
	{
	    //this loop will add the number between 1 to given numbers.
		sum=sum+i;
	    i++;
    }
    cout<<"The sum of number is "<<sum;
}
