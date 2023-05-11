#include<iostream>
using namespace std;
main()
{
	int sec,minutes,remainder,hours,days;
	cout<<"Enter the seconds to calculate the minutes or hours or days."<<endl;
	cin>>sec;
	if(sec>=60&&sec<3600)
	{
		remainder=sec%60;
	    sec=sec-remainder;
	    minutes=sec/60;
	    cout<<"There are "<<minutes<<" minutes : "<<remainder<<"sec\n";
	}else if(sec>=3600&&sec<86400)
	{
		remainder=sec%3600;
		sec=sec-remainder;
		hours=sec/3600;
		if(remainder>=60)
		{
		 sec=remainder%60;
		 minutes=remainder/60;
		 cout<<"There are "<<hours<<" hours : "<<minutes<<" mins : "<<sec<<" sec\n"	;
		}else
		{
			cout<<"There are "<<hours<<" hours : "<<remainder<<"sec";
		}
	
		
	}else if(sec>=86400)
	{
		remainder=sec%86400;
		sec=sec-remainder;
		days=sec/86400;
		if(remainder>=60&&remainder<3600)
		{
		sec=remainder%60;
		 minutes=remainder/60;
		 cout<<"There are "<<days<<" days :"<<minutes<<" mins : "<<sec<<" sec\n"	;
		}else if(remainder>=3600&&remainder<86400)
		{
	     sec=remainder%3600;
	     hours=remainder/3600;
	     if(sec>=60)
	     {
	     	remainder=sec%60;
	     	minutes=sec/60;
	     	sec=sec-remainder;
	    	cout<<"There are "<<days<<" days:"<<hours<<" hours:"<<minutes<<" minutes:"<<remainder<<" sec\n";
		 }
	     
		}else
		{
			cout<<"There are "<<days<<" days:"<<remainder<<" sec.\n";
		}
	}else 
	{
		cout<<sec<<":sec";
	}
}
