#include<cmath>
#include<iostream>
using namespace std;
main()
{
	int binary ,decimal,converter,rem;
	cout<<"Enter a binary number to covert it to decimals.IT should be in zeros and ones form.\n";
	cin>>binary;
	
	while(binary<0)
	{
		// this loop ask user for input again if a negative number is given
		cout<<"You have entered negative value.Try again with a different Binary number\n.";
        cin>>binary;
	} 
	
	for(int i=0;binary>0;i++)
	{
		//this rem will store the last digit of binary number for every loop
		rem=binary%10;
		//this eliminates the last stored digit
		binary=binary/10;
		//converter is the 2's factor by which the binary digit is multilpied
		converter=pow(2,i);
		decimal=decimal+rem*converter;
	    
	}
	cout<<"The decimal number is "<<decimal;
    
}
