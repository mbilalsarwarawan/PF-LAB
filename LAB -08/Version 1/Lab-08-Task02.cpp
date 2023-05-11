#include<iostream>
using namespace std;
//function definition
float fallingDistance(float);
main()
{
	float time;
	cout<<"Enter a time for which the object is falling.\n";
	cin>>time;
	cout<<"The object falled is "<<fallingDistance(time)<<" m .\n";
		
	for(int time=1;time<=10;time++)
	{
		cout<<"\nThe time of falling of object is "<<time<<" s.";
		cout<<"The object falled is "<<fallingDistance(time)<<" m .\n";
		
	}
		
}
float fallingDistance(float time)
{
	float falledDistance;
	//9.8 is gravtation constant and 1/2=0.5
	falledDistance=0.5*9.8*time*time;
	return(falledDistance);

}
