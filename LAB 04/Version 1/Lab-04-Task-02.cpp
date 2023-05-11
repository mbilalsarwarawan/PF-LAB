#include<iostream>
#include<cmath>
using namespace std;
main()
{
 float accel,time,time_sq,x,xi,vi;
 
 cout<<"Enter the acceleration,time simultaneously";
 cout<<" of the object to find its Position."<<endl;
 cin>>accel>>time;
 cout<<"Enter the initial velocity and position simultaneouly";
 cout<<" of the object to find its Position."<<endl;
 cin>>vi>>xi;
 time_sq=pow(time,2);
 x=0.5*(accel*time_sq)+(vi*time)+xi;
 cout<<"The position of free falling object is "<<x<<" meters.";
}
