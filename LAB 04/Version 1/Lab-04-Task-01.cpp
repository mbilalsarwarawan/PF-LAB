#include<iostream>
using namespace std;
main()
{
	int option;
	cout<<"Enter the number of control statement to know the syntax and other info."<<endl;
	cout<<"Help on:"<<endl<<"1-If."<<endl<<"2-If-then else."<<endl;
	cout<<"3-If and else if."<<endl<<"4-Nested if statement."<<endl;
	cin>>option;
	
	if(option==1)
	{
		cout<<"Purpose:"<<endl;
		cout<<"Use if to specify a block of code to be executed, if a specified condition is true.";
		cout<<endl<<"\nSyntax:"<<endl;
		cout<<"if (condition)"<<endl<<" {// block of code to be executed if the condition is true}";
      
	}else if(option==2)
	{
		cout<<"Purpose:"<<endl;
		cout<<"Use if-then else to choose between two condition."<<endl;
		cout<<endl<<"Syntax:"<<endl;
		cout<<"if (condition)"<<endl<<"{execution block} "<<endl;
		cout<<" else {execution block}";
	}else if(option==3)
	{
		cout<<"Purpose:"<<endl;
		cout<<"Use else if two check more than two condition."<<endl;
		cout<<endl<<"Syntax:"<<endl;
		cout<<"if (condition)"<<endl<<"{execution block}"<<endl;
		cout<<"else if(condition)"<<endl<<"{execution block} and so on...";
	}else if(option==4)
	{
		cout<<"Purpose:"<<endl;
		cout<<"A nested if in C is an if statement that is the target of another if statement";
		cout<<". Nested if statements means an if statement inside another if statement."<<endl;
		cout<<endl<<"Syntax:"<<endl;
		cout<<"if (condition)"<<endl<<"{ if (condition) execution block}"<<endl;
	}else
	{
		cout<<"You  have entered wrong command!";
	}
}
