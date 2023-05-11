#include<iostream>
using namespace std;
main()
{
	int num,reverse,temp;
	cout<<"Enter the number to check it is whether a palindrome or not.\n";
	cin>>num;
    //temp will store the user given number for reverse process.
	temp=num;
	while(temp>0)
	{
		//this loop will reverse the given number
		reverse=reverse*10;
		reverse=temp%10+reverse;
		temp=temp/10;
	}
	if(reverse==num)
	{
		cout<<"It is a palindrome number.";
	}else
	{
	cout<<"It is not a palindrome number.";
    }

}
