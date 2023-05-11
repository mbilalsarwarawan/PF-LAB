#include<iostream>
using namespace std;
main()
{
	int food[3][7];
	int maxFood=food[0][1];
	int minFood=food[0][0];
	float average;
	float avg[3]={0,0,0};
	for(int i=0;i<3;i++)
	{
		cout<<"Enter the food eaten by Monkey number "<<i+1<<"\n";
		for(int j=0;j<7;j++)
		{
		  
			cout<<"Enter the food eaten on day "<<j+1<<" .\n";
			cin>>food[i][j];
			average=average+food[i][j];
			avg[i]=avg[i]+food[i][j];
			
			if(maxFood<food[i][j])
			{
				maxFood=food[i][j];
			}
			if(minFood>food[i][j])
			{
				minFood=food[i][j];
			}

		}
		
		system("cls");
	}
	cout<<"Average of the food eaten by the Monkeys Family in the week. = "<<average/21<<" pounnds."<<endl;
    
	for(int i=0;i<3;i++)
	{
		cout<<"THe food eaten by monkey "<<i+1<<" Per week is "<<avg[i]/7<<" POunds .\n";
		
	}

	cout<<"The max food eaten by any monkey is "<<maxFood<<" Pounds."<<endl;
		cout<<"The minimum food eaten by any monkey is "<<minFood<<" Pounds.";
}
