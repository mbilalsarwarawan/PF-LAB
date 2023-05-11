#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	double Weight,Mass;
	cout<<"Enter the mass of object in Kg's to calculate the Weight ."<<endl;
	cin>>Mass;
	Weight=static_cast<int>((Mass)*9.8);
	cout<<"The weight of object is "<<Weight<<" Newtons.";
	if(Weight<1000)
	{
		cout<<"The object is too light.";
	}
	else if(Weight>1000)
	{
		cout<<"The object is too heavy.";
	}
	else
	{
		cout<<"The object is neither too heavy nor too light.";
	}
}
