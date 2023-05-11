#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int num1,num2,odd,start,end,sum_of_even,sum_of_odd;
	int output[5];
	do
	{
		cout<<"Enter two number the first number must be lesser than second one to further proceed.\n";
		cout<<"Enter the first number .\n";
		cin>>num1;
		cout<<"Enter the second number .\n";
		cin>>num2;
	}while(num1>=num2);
	
	   
	cout<<"\n1)-The odd numbers between firstNum and secondNum.\n\n";
	 odd=num1;
       	odd=odd+1;
       	
	if(odd==num2)
		{
			cout<<"There is no odd number between them.";
		}
	while(odd<num2)
	{	
	     
		if(odd%2!=0)
		{
			cout<<odd<<",";
		}
		odd++;
   }
   cout<<"\n\n2)-The sum of all even numbers between firstNum and secondNum.\n";
   start=num1+1;
   end=num2;
   while(start<end)
   {
   	
   	if((start%2)==0)
	   {
	   	sum_of_even=start+sum_of_even;
	   }
	  start++;
   	
   }
     cout<<"\nThe sum of even number is "<<sum_of_even<<" .\n";
     cout<<"\n\n3)-The sum of squares of odd number is given.\n";
     start=num1+1;
     end=num2;
     int a;
        while(start<end)
        {
        	if(start%2!=0)
        	{
        		a=pow(start,2);
        		sum_of_odd=sum_of_odd+a;
			}
			start++;
		}
		cout<<"The sum of squares of odd number is "<<sum_of_odd<<" .\n";
		cout<<"\n4)-The Uppercase letters are ";
		char star;
		star='A';
	
		while(star<='Z')
		{
			cout<<star<<",";
			star++;
		}
		
}
