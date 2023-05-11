#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
main()
{
	int lottery[5],user[5],i,same=0;
	//this is the fuction of random to initializing the random number for lottery number
	srand(time(0));
	
	cout<<"Enter the number of your lottery.\n";
	for(i=0;i<5;i++)
	{
		cin>>user[i];
		while(user[i]>10)
		{//enter the number of lottery one by one
			cout<<"Enter digit ine by one.\n";
		cin>>user[i];
		}
		
	}
	cout<<"User's Lottery number.\n";
	for(i=0;i<5;i++)
	{
		//user entered lottery number
		cout<<user[i]<<"|";
	}
	cout<<"\nThe lottery number .\n";
	for( i=0;i<5;i++)
	{
		//random lottery number
		lottery[i]=rand()%9+1;
		cout<<lottery[i]<<"|";
	}
	cout<<"\nThe same number in the lottery and the user are printed.\n";
	for(i=0;i<5;i++)
	{
		//the same number of lottery and user entered
		for(int j=0;j<5;j++)
		if(lottery[i]==user[j])
		{
			cout<<endl<<lottery[i];
		}
	}
}
