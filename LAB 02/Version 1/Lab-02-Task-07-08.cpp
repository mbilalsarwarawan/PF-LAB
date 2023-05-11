#include<iostream>
using namespace std;
main()
{
	int value,note1000,note500,note100,note50,note20,note10,note5,note1,remain,number;
	
	cout<<"Enter the non zero number to find the notes .\n";
	cin>>value;
	if(value>=1000)
	{
		note1000=value/1000;
    	value=value%1000;
		cout<<"1000 : "<<note1000<<endl;
	}
	if(value>=500)
	{
		note500=value/500;
		value=value%500;
		cout<<"500 : "<<note500<<endl;
	}
	if(value>=100)
	{
		note100=value/100;
	    value=value%100;
		cout<<"100 : "<<note100<<endl;
	}
	if(value>=50)
	{
		note50=value/50;
		value=value%50;
		cout<<"50 : "<<note50<<endl;
	}
	if(value>=20)
	{
		note20=value/20;
		value=value%20;
		cout<<"20 : "<<note20<<endl;
		
	}
		if(value>=10)
	{
		note10=value/10;
		value=value%10;
		cout<<"10 : "<<note10<<endl;
		
	}	if(value>=5)
	{
		note5=value/5;
		value=value%5;
		cout<<"5 : "<<note5<<endl;
		
	}	if(value>=1)
	
	{
		note1=value/1;
		
		cout<<"1 : "<<note1<<endl;	
    }    else
	{
    	cout<<"you have entered wrong value"<<endl;
    } 
	//Task-08
	cout<<"Task-08"<<endl;
	double classA,classB,classC;
	long Totalrevenue;
	cout<<"Enter the number of tickets of Class A sold.\n";
	cin>>classA;
	cout<<"Enter the number of tickets of Class B sold.\n";
	cin>>classB;
	cout<<"Enter the number of tickets of Class B sold.\n";
	cin>>classC;
	Totalrevenue=classA*2000+classB*1000+classC*500;
	cout<<"The total revenue generated is "<<Totalrevenue;

}
