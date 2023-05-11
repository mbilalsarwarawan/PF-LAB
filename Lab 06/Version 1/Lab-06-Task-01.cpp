#include<iostream>
using namespace std;
main()
{

	 int limit=1;
	int factorial=1;
	
	
	for(int i=1;i<=10;i++)
	{
		while(limit<=i)
		{
		    factorial=i*factorial;
			limit++;		
		}
		
		cout<<"The factorial of "<<i<<" ! ="<<factorial<<endl;
	}
}

