#include<iostream>
using namespace std;
main()
{
	double Length1,Width1,Area_of_rec1,Length2,Width2,Area_of_rec2;
	cout<<"Enter the length of the First rectangle."<<endl;
	cin>>Length1;
	cout<<"Enter the width of the First rectangle."<<endl;
	cin>>Width1;
	cout<<"Enter the length of the Second rectangle."<<endl;
	cin>>Length2;
	cout<<"Enter the width of the Second rectangle."<<endl;
	cin>>Width2;
	Area_of_rec1=Length1*Width1;
	Area_of_rec2=Length2*Width2;

	if(Area_of_rec1>Area_of_rec2)
	{
		cout<<"The area of First rectangle is greater than area of Second rectangle."<<endl;
	}
	else if(Area_of_rec1<Area_of_rec2)
	{
		cout<<"The area of Second rectangle is greater than area of First rectangle."<<endl;
	}
	else
	{
	cout<<"The area of First rectangle = area of Second rectangle"<<endl;
    }
    cout<<"Area of first rectangle = "<<Area_of_rec1<<endl;
    cout<<"Area of second rectangle = "<<Area_of_rec2<<endl;
}
