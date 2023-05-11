#include<iostream>
#include<cmath>
using namespace std;
main()
{
	double angle1,angle2,x;
	cout<<"Enter the value of angle 1 in radians.\n";
	cin>>angle1;
	angle1=sin(angle1);
	cout<<"Enter the value of angle 2 in radians.\n";
	cin>>angle2;
	angle2=cos(angle2);
	x=angle1+angle2;
	cout<<"The result of sum of sin of angle1 and cos of angle2 is "<<x<<endl;
	//Task-06
	cout<<"Task-06"<<endl;
	double a,y;
    
    cout<<"Enter the value of Angle a in radians"<<endl;
	cin>>a;
	y=1/sin(a);
	cout<<"The value of cosec of anle a is"<<endl<<y;

}
