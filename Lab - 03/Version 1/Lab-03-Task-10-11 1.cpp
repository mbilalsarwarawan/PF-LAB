#include<iostream>
using namespace std;
main()
{
	int Acc_no;
	double beg_bal,allow_cre,tot_cre,tot_charges,new_bal,rem_cre;
	cout<<"Enter the account number of the constumer."<<endl;
	cin>>Acc_no;
	if(Acc_no<=0)
	{
		cout<<"Re-enter the account number .It is not correct!";
		return(0);
	}else
	{
		cout<<"Enter the Allowed credit limit."<<endl;
		cin>>allow_cre;
		cout<<"Enter Balance at the beginning of the month."<<endl;
		cin>>beg_bal;
		cout<<"Enter Total of all items charged by this customer this month."<<endl;
		cin>>tot_charges;
		cout<<"Enter Total of all credits applied to this customer's account this month."<<endl;
		cin>>tot_cre;
	
		cout<<endl<<endl;
		new_bal=beg_bal+tot_charges-tot_cre;
		if(new_bal>allow_cre)
		{
			cout<<"The account no is "<<Acc_no<<endl;
			cout<<"The new balance is "<<new_bal<<endl;
			cout<<"The Allowed credit is "<<allow_cre<<endl;
			cout<<"“Credit Limit Exceeded!”";
		}else if(new_bal<=allow_cre)
		{
			cout<<"The account no is "<<Acc_no<<endl;
			cout<<"The new balance is "<<new_bal<<endl;
			cout<<"The Allowed credit is "<<allow_cre<<endl;
			rem_cre=allow_cre-new_bal;
			cout<<"The remaining balance is "<<rem_cre<<endl;
		}
	}
	//task-11
	cout<<"task-11"<<endl;
		int number,remain,a,b,c,d,e,number_2;
	
	cout<<"Enter the non-zero five digit number to check .It is whether a palindrome or not."<<endl;
	cin>>number;
	if(number<10000&&number>99999)
	{
		cout<<"You can only a five digit number!";
		return(0);
	}else
	{
	remain=number*1;
	a=remain%10;
	remain=remain-a;
	remain=remain/10;
	b=remain%10;
	remain=remain-b;
	remain=remain/10;
	c=remain%10;
	remain=remain-c;
	remain=remain/10;
	d=remain%10;
	remain=remain-d;
	remain=remain/10;
	e=remain;
	number_2=a*10000+b*1000+c*100+d*10+e;
	cout<<number_2<<endl;
     	if(number_2==number)
	    {
		cout<<"It is a Palindrome!";
     	}
	    else
	    {
		cout<<"It is not a Palindrome!";
	    }
	}
}
