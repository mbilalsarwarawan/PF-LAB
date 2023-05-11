#include<iostream>
using namespace std;
main()
{
	float score1,score2,score3;
	float average;
	cout<<"Enter the score of golfer in match 1\n";
	cin>>score1;
	cout<<"Enter the score of golfer in match 2\n";
	cin>>score2;
	cout<<"Enter the score of golfer in match 3\n";
	cin>>score3;
	average=(score1+score2+score3)/3;
	cout<<"The average score of golfer is ";
	printf("%.2f",average);
	//Task-04
	cout<<endl<<"Task-04"<<endl;
	   short test;
    bool Option;
    test=32767;
    
    cout<<"When we initialize a short variable named 'test' with a value 32767."<<endl;
   cout<<"When we add one to the variable 'test' then we get"<<++test<<endl;
   cout<<"When we subtract one from the variable 'test' then we get "<<--test;
   //when we add one to 32767 in short variable it overflow because the range of short
   // variable is between 32767 to -32768 and it stores only two bytes therefore 
  //it gives the lowest value of the range.
  //But when we subtract one from 32767 it gives the right value because it lies in the range. 

}
