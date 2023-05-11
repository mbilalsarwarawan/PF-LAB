#include<iostream>
using namespace std;
main()
{
	int num,rem;
	
	cout<<"Enter a number to check whether it is even or odd."<<endl;
	cin>>num;
	rem=num%2;
	if(rem==0)
	{
		cout<<"It is a even number.";
	}else
	{
		cout<<"It is an odd number.";
	}
}
