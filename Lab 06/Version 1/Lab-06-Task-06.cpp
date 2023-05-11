#include <iostream>
#include<string>
using namespace std;
int main()
{
 int score[5];
 string name[5];
 int n=0;
 cout<<"Enter the points earned by ali : ";
 name[0]="Ali";
 cin>>score[0];
 cout<<"\nEnter the points earned by foo : ";
 name[1]="foo";
 cin>>score[1];
 cout<<"\nEnter the points earned by cal : ";
 name[2]="cal";
 cin>>score[2];
 cout<<"\nEnter the points earned by dan : ";
 name[3]="dan";
 cin>>score[3];
 cout<<"\nEnter the points earned by zoo : ";
 name[4]="zoo";
 cin>>score[4];
 cout<<"\nPoints scored for the season by each player is scaled by 10.: \n";
 
 for(int i=0;i<5;i++)
 {
 	cout<<name[i]<<" : ";
 	score[i]=score[i]/10;
 	for(int s=0;s<score[i];s++)
	 {
 		
 		cout<<"*";
	 }
	 n++;
	 cout<<endl;
 }

}
