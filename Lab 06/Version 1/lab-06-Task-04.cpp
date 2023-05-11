#include<iostream>
using namespace std;
main()
{
	int end,sum;
	int first=0;
	int second=1;
	
	cout<<"Enter a number n to see Fibonacci Series up to n number of terms.\n";
	cin>>end;
	while(end<0)
	{
		cout<<"Don't enter a negative number.\n";
		cout<<"Enter a number n to see Fibonacci Series up to n number of terms.\n";
     	cin>>end;	
    }
	
	
	for(int i=1;i<=end;i++)
	{
		
	    cout<<first<<",";
	    sum=first+second;
	    first=second;
	    second=sum;
	    

	 	   
    }


	
	
	

}
