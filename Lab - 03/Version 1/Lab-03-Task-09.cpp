#include<iostream>
using namespace std;
main()
{
	float gross_1,gross_2,gross_3,basic,comm,total_1,total_2,total_3,average;
	basic=200;comm=0.09;
	
	cout<<"Enter the gross sale of First Salesperson for the last week."<<endl;
	cin>>gross_1;
	cout<<"Enter the gross sale of second Salesperson for the last week."<<endl;
	cin>>gross_2;
	cout<<"Enter the gross sale of third Salesperson for the last week."<<endl;
	cin>>gross_3;
	if(gross_1<0||gross_2<0||gross_3<0)
	{
		cout<<"You have entered one or more negative gross which can't be negative."<<endl;
		cout<<"Please run program again. Put positive values. ";
		return(0);
	}else
	{
	  total_1=gross_1*comm+basic;
	  cout<<"The earning of first salesperson for last week. "<<total_1<<endl;
	  total_2=gross_2*comm+basic;
	  cout<<"The earning of second salesperson for last week. "<<total_2<<endl;
	  total_3=gross_3*comm+basic;
	  cout<<"The earning of third salesperson for last week. "<<total_3<<endl<<endl;
	  average=(total_1+total_2+total_3)/3;
	  cout<<"The average sale by the three salespersons. "<<average<<endl;
	  if(total_1>total_3&&total_3<total_2)
	  {
	  	cout<<"The max sale is "<<max(total_1,total_2)<<endl;
	  	cout<<"The max sale is "<<total_3;
	  }else if(total_2>total_1&&total_1<total_3)
	  {
	 	cout<<"The max sale is "<<max(total_3,total_2)<<endl;
	  	cout<<"The max sale is "<<total_1;
	  }else if(total_1>total_2&&total_2<total_3)
	  {
	  	cout<<"The max sale is "<<max(total_3,total_1)<<endl;
	  	cout<<"The max sale is "<<total_2;
	  }else
	  {
	  	cout<<"The max sale is "<<total_1<<endl;
	  	cout<<"The max sale is "<<total_2;
	  }
	  
	}
	
}
