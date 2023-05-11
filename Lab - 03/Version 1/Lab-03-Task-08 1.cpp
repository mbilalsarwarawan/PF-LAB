#include<iostream>
using namespace std;
main()
{
	float total_cal,cal_fat,percentage,gram_fat;
	
	cout<<"Enter the total calories in food."<<endl;
	cin>>total_cal;
	if(total_cal<=0)
	{
		cout<<"Re-runYou have entered wrong negative value for the calories.";
		cout<<"Please enter a positive value.";
		return(0);
	}else
	{
		cout<<"Enter the fat grams in food."<<endl;
		cin>>gram_fat;
		cal_fat=gram_fat*9;
		percentage=cal_fat/total_cal;
		
		if(percentage>1)
		cout<<"Either the calories or the fat grams were incorrectly entered!";
		
		else if(percentage<0.3)
		cout<<"The food is low in fat.! "<<"The percentage of calories that comes from food is "<<percentage*100<<"%";
		else
		{
		cout<<"The percentage of calories that comes from food is "<<percentage*100<<"%";	
		}
	}
}
