#include<cstdlib>
#include<string.h>
#include<iostream>
using namespace std;
main()
{
	string target;
	//initializing the arrray
	string name[4]={"KHIZER","ABDUL REHMAN","ALI","AMINA"};
	string phone[4]={"0333-8000258","0303-3023302","0320-1487846","03000770078"};
	cout<<"Enter the name of the person whose number is requierd in capital letters.\n";
	cin>>target;
	for(int i=0;i<4;i++)
	{
		//this function is for comparing two strings
		if(strcmp (name[i].c_str(),target.c_str()) == 0)
		{
			cout<<"Found.\n";
			cout<<target<<" "<<phone[i];
			return(0);
		}
	}
}
