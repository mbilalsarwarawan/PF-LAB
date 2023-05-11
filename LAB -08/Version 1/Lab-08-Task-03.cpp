#include<iostream>
using namespace std;
//function's definition
int kineticEnergy(int ,int );

main()
{
	//variable declaration
	int mass,velocity;
	cout<<" Enter values for mass and velocity to calculate the Kinetic energy.\n";
	cin>>mass>>velocity;
	cout<<"The Kinetic energy of the object is "<<kineticEnergy(mass,velocity);
}
int kineticEnergy(int mass,int velocity)
{
	
	return(0.5*mass*velocity*velocity);
}
