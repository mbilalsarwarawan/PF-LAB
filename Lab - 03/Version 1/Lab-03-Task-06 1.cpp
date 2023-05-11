#include<iostream>
using namespace std;
main()
{
	int Balance,Total,Cheq,cheq_c,Default=50;
	
	cout<<"Enter your Bank balance : "<<endl;
	cin>>Balance;
	if(Balance<=0)
	{
	cout<<"Your Account is overdrawn.";
	return(0);
	}

	if(Balance<15000)
	Default=Default+100;
	cout<<"Enter the cheques withdrawn. "<<endl;
	cin>>Cheq;
	while(Cheq<0)
	{
		cout<<"Your account is account is overdrawn.Enter it Again!\n";
		cin>>Cheq;
	}if(Cheq>0)
	 
	{
		if(Cheq<20)
		{
		cheq_c=Cheq*10;
	    }
		else if(20<=Cheq&&Cheq<40)
		{
			cheq_c=Cheq*8;
		}
		else if(40<=Cheq&&Cheq<60)
		{
		cheq_c=Cheq*6;	
		}
		else if (Cheq>=60)
		{
			cheq_c=Cheq*4;	
	    }
		
	}
	Total=cheq_c+Default;
    cout<<"The total bank service fee is "<<Total<<endl;
    if (Balance<=cheq_c)
    cout<<"Sorry,Your account is drawn";
}
