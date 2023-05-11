#include<iostream>
using namespace std;
main()
{
	double balance,start_balance,deposit,withdrawn,interest_earned;
	double monthly_interest,total_deposit,total_withdrawn;
    int no_of_month;
    cout<<"First! Enter the Amount of Balance Deposited At opening of saving account."<<endl;
    cin>>start_balance;
    balance=start_balance;
    if(start_balance<1)
    {
    	cout<<"Your accout is closed.Sorry!";
    	return(0);
	}
    cout<<"Enter the the annual interest rate for the account.\n";
    cin>>monthly_interest;
    while(monthly_interest<=0)
    {
    	cout<<"The interest rate cannot be zero or negative in saving account.Enter the the annual interest rate again!.\n";
        cin>>monthly_interest;
	}
	monthly_interest=monthly_interest/12;
	cout<<"Enter the number of months that have been passed since the account was established.\n";
	cin>>no_of_month;
	while(no_of_month<1)
	{
		cout<<"Error: Please enter the no of months again To continue.";
		cin>>no_of_month;
	}
	
	for(int i=1;i<=no_of_month;i++)
	{
		cout<<"Enter the amount deposited the month "<<i<<".\n";
		cin>>deposit;
		while(deposit<0)
		{
			cout<<"Error: Don't enter a negative amount.";
			cout<<"Enter the amount deposited the month "<<i<<".\n";
		    cin>>deposit; 
		}
		total_deposit=total_deposit+deposit;
		balance=balance+deposit;
		cout<<"Enter the amount withdrawn the month "<<i<<".\n";
	    cin>>withdrawn;
	    while(withdrawn<0)
	    {
	    cout<<"Error:Don't enter a negative amount.Enter the amount withdrawn the month "<<i<<".\n";
	    cin>>withdrawn;	
		}
		total_withdrawn=total_withdrawn+withdrawn;
		balance=balance-withdrawn;
		if(balance<0)
		{
			cout<<"Sorry your account is corrupted.\n";
			return(0);
		}else
		{
			interest_earned+=monthly_interest*balance;
			balance+=monthly_interest*balance;
	    }
		
    }
		cout<<"-----------------------------------------------------\n";
		cout<<"The starting balance is "<<start_balance<<" $.\n";
		cout<<"The ending balance is "<<balance<<" $.\n";
		cout<<"The total amount of deposites is "<<total_deposit<<" $.\n";
		cout<<"The total amount of withdrwans is "<<total_withdrawn<<" $.\n";
		cout<<"The total interest earned is "<<interest_earned<<" $.\n";
		cout<<"------------------------------------------------------\n";
    
}
