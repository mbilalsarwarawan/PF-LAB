#include<iostream>
#include<cmath>
using namespace std;
main()
{
	double BMI,Height,Weight;
	cout<<"Enter your height in inches."<<endl;
	cin>>Height;
	cout<<"Enter your weight in pounds."<<endl;
	cin>>Weight;
	Height=pow(Height,2);
	BMI=Weight*703/Height;
	cout<<"Your BMI is "<<BMI<<endl;
	if(BMI >= 18.5 && BMI<= 25)
	{
		cout<<"According to the BMI , You Are Fit. ";		
	}
	else if(BMI<18.5)
	{
		cout<<"According to the BMI , You Are underweight.";
	}
	else
	{
		cout<<"According to the BMI , You are overweight.";
	}
}
