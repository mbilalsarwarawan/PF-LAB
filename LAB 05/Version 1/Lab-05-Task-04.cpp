#include<iostream>
#include<cmath>
using namespace std;
main()
{
	float mili_meter,year,total_rise;
	cout<<"This a table showing the number of millimeters that the ocean will\n";
    cout<<	" have risen each year for the next 25 years"<<endl;
	mili_meter=1.5;
	year=1;
	
	cout<<"--------------------------------------------------------------------------\n";
	while(year<=25)
	{
		//total_rise will show the milimeter rised from this first year to the current year
	    total_rise=mili_meter+total_rise;
	    //this show  the output
	    cout<<"Year="<<year<<" The milimeter risen is "<<total_rise<<endl;
		//this will increase year at the end of loop
	    year++;
    }
    	cout<<"--------------------------------------------------------------------------";
}
