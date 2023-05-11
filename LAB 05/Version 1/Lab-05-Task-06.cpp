#include<iostream>
using namespace std;
main()
{
	int num_of_days,org_at_start,total_org;
	float percen_inc;
	
	cout<<"Enter the number of Organism at start."<<endl;
	cin>>org_at_start;
	while(org_at_start<2)
	{
		//this loop will not accept organism lesser than 2.
      cout<<"Please enter the number of organism 2 or greater to calculate the population."<<endl;
	  cin>>org_at_start;
    }
	cout<<"The average daily population increase percentage."<<endl;
	cin>>percen_inc;
	percen_inc/=100;
	while(percen_inc<0)
	{
		//this loop will not accept the percentage increase lesser than 0.
		cout<<"The percentage increase cannot be negative.Please try again!"<<endl;
		cin>>percen_inc;
	}
	cout<<"The number of days of population increase."<<endl;
	cin>>num_of_days;
	while(num_of_days<1)
	{
     //this loop will show start again and again until day<1.
      	cout<<"The number of days should be greater than 0.Re-enter the number of days of population increase."<<endl;
    	cin>>num_of_days;	
	}
	total_org=org_at_start;
	
	for(int i=1;i<=num_of_days;i++)
	{
		//this loop will calculate the total percentage of organisms
		total_org=percen_inc*total_org+total_org;
		cout<<"The population at "<<" day "<<i<<" "<<total_org<<endl;

    }
    

}
