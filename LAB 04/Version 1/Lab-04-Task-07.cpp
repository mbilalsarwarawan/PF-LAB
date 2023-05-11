#include<iostream>
using namespace std;
main()
{
	int num1,num2,num3;
	cout<<"Enter the First,Second,Third number."<<endl;
	cin>>num1>>num2>>num3;
	if(num1>=num2&&num2<=num3)
	{
		cout<<"Ascending order!"<<endl;
		cout<<max(num1,num3)<<endl;
		cout<<min(num1,num3)<<endl;
		cout<<num2<<endl;
		cout<<endl<<"Descending order!"<<endl;
		cout<<num2<<endl;
		cout<<min(num1,num3)<<endl;
		cout<<max(num1,num3)<<endl;
	}else if(num1>=num3&&num3<=num2)
	{
		cout<<"Ascending order!"<<endl;
		cout<<max(num1,num2)<<endl;
		cout<<min(num1,num2)<<endl;
		cout<<num3<<endl;
		cout<<endl<<"Descending order!"<<endl;
		cout<<num3<<endl;
		cout<<min(num1,num2)<<endl;
		cout<<max(num1,num2)<<endl;
	}else if(num2>=num1&&num1<=num3)
	{
		cout<<"Ascending order!"<<endl;
		cout<<max(num2,num3)<<endl;
		cout<<min(num2,num3)<<endl;
		cout<<num1<<endl;
		cout<<endl<<"Descending order!"<<endl;
		cout<<num1<<endl;
		cout<<min(num2,num3)<<endl;
		cout<<max(num2,num3)<<endl;
	}
}
