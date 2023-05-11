#include<iostream>
#include<cmath>
using namespace std;
main()
{
	double Amount,Timecompound,Principal,interestrate,interest;
	
	cout<<"Enter the Principal Amount."<<endl;
	cin>>Principal;
	cout<<"Enter the interest rate."<<endl;
	cin>>interestrate;
	cout<<"Enter the number of time the interest is compounded."<<endl;
	cin>>Timecompound;
	Amount=(1+interestrate/100/Timecompound);
	Amount=pow(Amount,Timecompound);
	Amount=Principal*Amount;
	interest=Amount-Principal;
	cout<<"Interest rate is : "<<interestrate<<endl;
	cout<<"Timecompounded is : "<<Timecompound<<endl;
	cout<<"Principal amount is : "<<Principal<<endl;
	cout<<"Interest is : "<<interest<<endl;
	cout<<"Amounts in savings : "<<Amount<<endl;
	//Task-14
	cout<<"Task-14"<<endl;
	double Loanamount,interestrate1,noofpayments,Payment,interest1,totalpaid;
	cout<<"Enter the Amount of Loan."<<endl;
	cin>>Loanamount;
	cout<<"Enter the number of Payments."<<endl;
	cin>>noofpayments;
	cout<<"Enter the value of interest on loan."<<endl;
	cin>>interestrate1;
	Payment=1+(interestrate1/100);
	Payment=pow(Payment,noofpayments);
	Payment=(Payment/(Payment-1))*interestrate1/100*Loanamount;
	totalpaid=Payment*noofpayments;
	interest1=totalpaid-Loanamount;
	
	cout<<"Loan Amount : "<<Loanamount<<endl;
	cout<<"Monthly interest : "<<interestrate1<<endl;
	cout<<"Number of Payments : "<<noofpayments<<endl;
	cout<<"Monthly payment : "<<Payment<<endl;
	cout<<"Amount paid back : "<<totalpaid<<endl;
	cout<<"Interest paid : "<<interest1;
}
