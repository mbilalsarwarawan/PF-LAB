#include<iostream>
using namespace std;
main()
{
	int shares;
	shares=600;
	float price,totalamountpaid1,totalamountpaid2,commision;
	price=21.77;
	totalamountpaid1=shares*price;
	commision=0.02*totalamountpaid1;
	totalamountpaid2=commision+totalamountpaid1;
	cout<<"total amount without commision="<<totalamountpaid1<<endl;
	cout<<"total commision="<<commision<<endl;
	cout<<"total amount with commision="<<totalamountpaid2<<endl;
}
