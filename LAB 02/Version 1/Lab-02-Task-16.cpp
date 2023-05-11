#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int num_of_people,num_of_pizza;
	float noofslices,Diameter,Area,r,slice=14.125;
	
    cout<<"Enter the no of peoples which are invited in the party. ";
    cin>>num_of_people;
    num_of_people=num_of_people*4;
    cout<<"Enter the diameter of the pizza in inches.";
    cin>>Diameter;
	r=Diameter/2;
	Area=M_PI*pow(r,2);
	noofslices=Area/slice;
	noofslices=1/noofslices;
	num_of_pizza=num_of_people*noofslices;
	cout<<"You have to buy "<<num_of_pizza<<" pizza.";
    
    
}
