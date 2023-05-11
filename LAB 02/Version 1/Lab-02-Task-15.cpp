#include<iostream>
#include<cmath>
using namespace std;
main()
{
	float Diameter,Area,r;
	const float slice=14.125;
	const float pi=3.1415;
	float noofslices;
	
	cout<<"Enter the diameter of pizza in inches to calculate the number of slice in it."<<endl;
	cin>>Diameter;
	r=Diameter/2;
	Area=pi*pow(r,2);
	noofslices=Area/slice;
	cout<<"Your pizza has ";
	printf("%1.f",noofslices);
	cout<<" number of slices."<<endl;
	//Task-16
	cout<<"Task-16"<<endl;
	int num_of_people,num_of_pizza;
	float noofslices1,Diameter1,Area1,r1;
	
    cout<<"Enter the no of peoples which are invited in the party. ";
    cin>>num_of_people;
    num_of_people=num_of_people*4;
    cout<<"Enter the diameter of the pizza in inches.";
    cin>>Diameter1;
	r1=Diameter1/2;
	Area=M_PI*pow(r1,2);
	noofslices1=Area1/slice;
	noofslices1=1/noofslices1;
	num_of_pizza=num_of_people*noofslices1;
	cout<<"You have to buy "<<num_of_pizza<<" pizza.";
    
    
}

