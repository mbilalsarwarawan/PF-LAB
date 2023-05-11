#include<iostream>
using namespace std;
main()
{
	float tax,tip,mealcost,misc;
	int totalbill;
	totalbill=4450;
	tax=0.0675;
	tip=0.15;
	tax=tax*totalbill;
	tip=tip*totalbill;
	misc=tax+tip;
	mealcost=totalbill - misc;
	cout<<"tax="<<tax<<"\n";
	cout<<"tip="<<tip<<"\n";
	cout<<"mealcost="<<mealcost<<"\n";
	cout<<"totalbill="<<totalbill;
	
	
}
