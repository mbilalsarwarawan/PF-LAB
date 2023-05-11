#include<iostream>
using namespace std;
//functions definition
float calculateRetail(float,float);
main()
{
	float wholesale,markup;
cout<<"Enter the wholesale cost of the product.\n";
cin>>wholesale;
while(wholesale<0)
{//this loop will accept a negative number
 cout<<"Enter again You have enterd negative value.\n";
 cin>>wholesale;	
}
cout<<"Enter the markup percentage of the product.\n";
cin>>markup;	
while(markup<0)
{//negative markup is not accepted
 cout<<"Enter again You have enterd negative value.\n";
 cin>>markup;	
}
 cout<<"The retail price of the product is "<<calculateRetail(wholesale,markup)<<".";
}
float calculateRetail(float wholesale,float markup)
   {
   	
		markup=markup/100;
		return(wholesale*markup+wholesale);
   }
