#include<iostream>
using namespace std;
void showIntro();
int getCups();
double cupsToOunces(double);

main()
{
double cups;	
showIntro();
cups=getCups();
cout<<"The ounces you have to buy is "<<cupsToOunces(cups);	
}

void showIntro()
{
	cout<<"\t\t\t\t Task-01\n\n";
	cout<<"Your friend runs a catering company. Some of the ingredients that his recipes required\n";
    cout<<"are measured in cups. When he goes to the grocery store to buy those ingredients,however,\n";
    cout<<" they are sold only by the fluid ounces. ";
}
int getCups()
{
	int noOfCups;
	cout<<"\n Enter the number of cups of ingredients tou need ?\n";
	cin>>noOfCups;
	return(noOfCups);
}
double cupsToOunces(double cups) 
{
	double ounces;
	ounces=cups/8;
	return(ounces);
	
}
