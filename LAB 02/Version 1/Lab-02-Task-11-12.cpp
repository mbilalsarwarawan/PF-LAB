#include<iostream>
using namespace std;
main()
{
	int cookies,calories;
	
	cout<<"Enter the number of cookies you ate  to calculate the calories you consumed."<<endl;
	cin>>cookies;
	if(cookies<=40)
	{
		calories=cookies*75;
		cout<<"You have consumed "<<calories<<" calories."<<endl;
	}else
	{
		cout<<"You have entered wrong number because bag have only 40 cookies."<<endl;
	}
	//Task-12
	cout<<"Task-12"<<endl;
		int Actualvalue,choice;;
	double Assessedvalue1,Assessedvalue2,Taxratio,annualTax,quarterTax;
	
	cout<<"Enter the actual value of property in dollars."<<endl;
	cin>>Actualvalue;
	Assessedvalue1=Actualvalue-Actualvalue*0.4;
	Assessedvalue2=Assessedvalue1-5000;
	//5000$ is the exemption for senior citizen by the madison county
	cout<<"Enter the tax per 100$ of assessed value of property."<<endl;
	cin>>Taxratio;
	annualTax=(Assessedvalue2/100)*Taxratio;
	quarterTax=annualTax/4;
	cout<<"The Assessed value of your property is "<<Assessedvalue1<<"$"<<endl<<endl;
	cout<<"After the exemption of 5000$ by the Madison county the assessed value is "<<Assessedvalue2<<endl<<endl;
	cout<<"To pay tax in years press '1' or if in quarter press '2'."<<endl<<endl;
	cin>>choice;
	if(choice=1)
	{
		cout<<"Your yealy tax is "<<annualTax<<endl;
	}else
	{
		cout<<"Your quaterly tax is "<<quarterTax<<endl;
	}
}
