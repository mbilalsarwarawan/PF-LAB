#include<iostream>
#include<cmath>
using namespace std;
//function's definition
float presentValue(float,float,float);
main()
{
	//variable declaration
	float futureValue,annualInterest,noOfYear,deposit;
	cout<<"Enter the future value that you want in the account.\n";
	cin>>futureValue;
	cout<<"Enter the is the annual interest rate.\n";
	cin>>annualInterest;
	annualInterest=annualInterest/100;
	cout<<"Enter the number of years that you plan to let the money sit in the account.\n";
	cin>>noOfYear;
	
	cout<<"The Amount to deposit is "<<presentValue(futureValue,annualInterest,noOfYear)<<" $.";
}
float presentValue(float f,float r,float n)
{
	//calculation
	 float deposit;
	deposit=f/pow(1+r,n);
	return(deposit);
}
