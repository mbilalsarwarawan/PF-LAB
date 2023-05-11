#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int num,sum,temp;
	//variable num is for number given by user
	//variable sum is for sum of digits of given number
	//variable temp is stored the digits seperated from variable num
	
	cout<<"Enter the number to reverse."<<endl;
	cin>>num;
	while(num>0)
	{
        //modules gives the last digit of given number number
	    temp=num%10;
	    //by division it removes the digit which is stored in temp
	    num=num/10;
	    //this will add the digits seperated by num
	   sum=sum+temp;
    }
    cout<<"The sum of number is "<<sum;
}
