#include<iostream>
using namespace std;
main()
{
	int number1,number2,greater,lesser;
	do
	{
	
	cout<<"Enter the first number to proceed.Note the numbers can't be equal.\n";
	cin>>number1;
	cout<<"Enter the second number to see the in between numbers\n";
	cin>>number2;
    }while(number1==number2);
    
	greater=max(number1,number2);
	lesser=min(number1,number2);
	for(++lesser;lesser<=greater;lesser++)
	{
		cout<<lesser<<" ";
	}
	
	
}
