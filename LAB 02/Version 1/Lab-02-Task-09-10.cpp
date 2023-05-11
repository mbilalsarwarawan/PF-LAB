#include<iostream>
#include<string>
using namespace std;
main()
{
	string name1,name3,name2;
	float rain1,rain2,rain3;
	
	cout<<"Enter the name of first month and rainfall in it."<<endl;
	cin>>name1>>rain1;
	cout<<"Enter the name of second month and rainfall in it."<<endl;
	cin>>name2>>rain2;
	cout<<"Enter the name third month and rainfall in it."<<endl;
	cin>>name3>>rain3;
	cout<<"The average rainfall "<<name1<<", "<<name2<<", "<<name3<<", " <<"is "<<(rain1+rain2+rain3)/3<<endl;
	//Task-10
	cout<<"Task-10"<<endl;
		string Name;
	int Subsidizedtickets,adulttickets,childtickets,grossprofit,DistributerAmount,totalrevenue;
	
	cout<<"Enter the name of movie."<<endl;
	cin>>Name;
	cout<<"Enter the number of tickets sold to Seniorcitizen over sixty."<<endl;
	cin>>Subsidizedtickets;
	cout<<"Enter the number of tickets sold to aduts."<<endl;
	cin>>adulttickets;
	cout<<"Enter the number of tickets sold to childs."<<endl;
	cin>>childtickets;
	totalrevenue=Subsidizedtickets*450+adulttickets*500+childtickets*250;
	grossprofit=totalrevenue-totalrevenue*0.8;
	DistributerAmount=totalrevenue*0.8;
	cout<<"Movie : "<<Name<<endl;
	cout<<"Adult Tickets sold : "<<adulttickets<<endl;
	cout<<"Child Tickets sold : "<<childtickets<<endl;
	cout<<"Seniorcitizen tickets sold : "<<Subsidizedtickets<<endl;
	cout<<"Total revenue : "<<totalrevenue<<endl;
	cout<<"gross profit : "<<grossprofit<<endl;
	cout<<"net profit : "<<grossprofit<<endl;
	cout<<"Amount paid to distributer : "<<DistributerAmount;

	
}
