#include<iostream>
using namespace std;

main()
{
	int month,day,year,magic;
	cout<<"Enter a day in numeric."<<endl;
    cin>>day;
	if(day <= 31 && day > 0)
	{
	cout<<"Enter a month in numeric."<<endl;
    }
	else	
	{
	cout<<"Reminder Enter day between 1 to 31."<<endl;
	return(0);
    }
    cin>>month;
    if(month<=12 &&month>0)
    {
    cout<<"Enter a year in numeric."<<endl;
    } 
    else
    {
	cout<<"Reminder Enter month between 1 to 12."<<endl;
	return(0);
    }
    cin>>year;
    if(year>0)
    cout<<"ok"<<endl;
    else
    {
    cout<<"Year can not be negative!"<<endl;
    return(0);
    }
    magic=day*month;
    if(magic==year)
    cout<<"It is a magic year."<<endl;
    else 
    cout<<"It is not magic year.";
    
	
}
