#include<iostream>
using namespace std;

//initialization of variables
float score[5],avg,total;
int i;
//functios definitions
void getJudgeData();
float findHighest(float score[]);
float findLowest(float score[]);
void calcScore();
main()
{
	for( i=0;i<5;i++)
	{
	cout<<"Judge "<<i+1<<".";
	//function calling for storing the score
	getJudgeData();
    }
    //function for calculation of score
	calcScore();

}
	
	

void getJudgeData() 
{
	cout<<"Please enter score.\n";
	cin>>score[i];
}
 void calcScore()
 {
 	//this loop will add all the score of judges
 	for(int i=0;i<5;i++)
 	{
 		total=total+score[i];
	 }
	 //this will drop the highest and lowest from the score
 	total=total-findLowest(score)-findHighest(score);
    //average of the remaining score
 	avg=total/3;
 	cout<<"The contestent's Score is "<<avg<<".";
 }
 float findHighest(float score[])
 {
 	//this compare the value in score array to find the highest
 	float highest=score[0];
 	for(int i=0;i<5;i++)
 	{
 		if(highest<score[i])
 		{
 			highest=score[i];
		 }
		
	 }
	 return(highest);
	 }
	 
	 
	 
  float findLowest(float score[])
 {
 	
 	//this compare the value in score array to find the lowest
 	float lowest=score[0];
 	for(int i=0;i<5;i++)
 	{
 		if(lowest>score[i])
 		{
 			lowest=score[i];
		 }
		
	 }
	 return(lowest);
 }

