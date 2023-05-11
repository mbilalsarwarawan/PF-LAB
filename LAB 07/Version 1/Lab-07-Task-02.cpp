#include<iostream>
using namespace std;
main()
{
//this  is initializtion of variables
	double rainfall[12],avg_rain,total_rain,max,min;
	
	for(int i=0;i<12;i++)
	{
		//for storing values in variables
		cout<<"Enter the rainfall for the "<<i+1<<" rainfall.\n";
		cin>>rainfall[i];
		while(rainfall[i]<0)
		{
			//if you entered a negative value then this prompt will show
			
			cout<<"You have entered a wrong value.Please Re-enter."<<endl;
			cin>>rainfall[i];
		}
		total_rain=rainfall[i]+total_rain;
	}
	
    max=rainfall[0];
    min=rainfall[0];
    for(int j=0;j<12;j++)
    {
    	//this loop is for determing the max and min rainfall
    	if(rainfall[j]>max)
    	max=rainfall[j];
    	
    	if(rainfall[j]<min)
    	min=rainfall[j];
	}
	//the output
	avg_rain=total_rain/12;
	cout<<"The average rainfall of the year is "<<avg_rain<<" .\n";
    cout<<"The total rainfall of the year is "<<total_rain<<" .\n";
    cout<<"The Highest rainfall of the year is "<<max<<" .\n";
    cout<<"The lowest rainfall of the year is "<<min<<" .\n";
}
