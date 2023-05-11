#include<iostream>
using namespace std;
main()
{
	int num,reverse;
	//variable num is for number given by user
	//variable reverse is for reversed number given as output
	 
	cout<<"Enter the number to reverse."<<endl;
	cin>>num;
	while(num>0)
	//this loop ends until last digit of num is reversed
	{
		//this step multiply the reverse by 10 so that gives
		// a placeholder for the next digit
	    reverse=reverse*10;
	    //this step adds the last digit of the variable num to reverse
		reverse=num%10+reverse;
		//this step remove the last digit of variable num
	    num=num/10;
	}
	cout<<"The reverse number is "<<reverse;
}


