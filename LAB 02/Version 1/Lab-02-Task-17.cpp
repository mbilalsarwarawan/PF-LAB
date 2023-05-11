#include<iostream>
using namespace std;
main()
{
	int shares;
	double price1,price2,commision1,Selling,Buying,commision2,net_profit;
	
	shares=1000;price1=32.87;price2=33.92;
	price1=shares*price1;
	cout<<"The amount of money Kathryn paid for the stock is "<<price1<<endl;
	commision1=price1*0.02;
	cout<<"The amount of commission Kathryn paid her broker when she bought the stock is "<<commision1<<endl;
	price2=price2*shares;
	cout<<"The amount that Kathryn sold the stock for is "<<price2<<endl;
	commision2=price2*0.02;
	cout<<"The amount of commission Kathryn paid her broker when she sold the stock is "<<commision2<<endl;
	Buying=price1+commision1;
	Selling=price2-commision2;
	net_profit=Selling-Buying;
	cout<<"The Kathryn is at loss of "<<net_profit*-1;
	

}
