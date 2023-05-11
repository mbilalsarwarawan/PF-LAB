#include<iostream>
using namespace std;
main()
{
	float total,weight,distance;
	 cout<<"Enter the weight of Package in KG's."<<endl;
	 cin>>weight;
	 if(weight<=0||weight>20)
	 {
	 cout<<"Re-run the program and Enter the weight in positive values"<<endl;
	 return(0);	
	 }
	 else
	 {
	 	cout<<"Enter the distance over which the package is to be shipped."<<endl;
	 	cin>>distance;
	 	if(distance<=10||distance>3000)
	 	{
	 		cout<<"Re-run the program and Enter the distance again Because our range is between 10 to 3000Km."<<endl;
	 		return(0);
		}else
		{
			if(weight<=2)
			total=distance/500*50;
			
			else if(weight>2&&weight<=6)
			total=distance/500*100;
			
			else if(weight>6&&weight<=10)
			total=distance/500*150;

			else if(weight>10&&weight<=20)
			total=distance/500*200;
			
			cout<<"The price for the shippment is "<<total<<" rupees.";
			
		}
	 }
	 
} 
