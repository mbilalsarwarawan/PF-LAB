#include<iostream>
using namespace std;
main()
{
	int no_of_floor,room_at_floor,total_room,occupied_room;
	double percen_occ,total_occ;
	
	cout<<"Enter the number of floors in the Hotels.\n";
	cin>>no_of_floor;
	while(no_of_floor<1)
	{
		//if user enter floor lesser than zero This promt showed and input is asked again
		cout<<"You have entered a wrong command. Please try with again0\n";
		cout<<"Enter the number of floors in the Hotels.\n";
    	cin>>no_of_floor;
	}
	for(int i=1;i<=no_of_floor;i++)
	{
		//this loop will ask the number of rooms for each floor and occupied rooms
		//and calculate occupency rate and total rooms
		cout<<"Enter the number of rooms in floor "<<i<<" .\n";
		cin>>room_at_floor;
		while(room_at_floor<10)
		{
			//this loop ask input again if rooms are lesser than 10
			cout<<"Error: Enter the number of rooms 10 or greater.Please try again.\n";
		   	cout<<"Enter the number of rooms in floor "<<i<<" .\n";
	     	cin>>room_at_floor;	
		}
		cout<<"Enter the number of rooms occuped in the floor.\n";
		cin>>occupied_room;
		while(occupied_room>room_at_floor)
		{
			//this loop ask input again if occupied rooms are greater than room at floor
			cout<<"Error: you have entered occupied rooms greater than available.\n";
			cout<<"Enter again!\n";
			cin>>occupied_room;
		}
		total_room=room_at_floor+total_room;
		total_occ=occupied_room+total_occ;
		percen_occ=(total_occ/total_room)*100;
		
	}
	cout<<endl<<"\nThe Total number of rooms in the Hotel is "<<total_room<<" rooms.\n";
	cout<<"The percentage of rooms occupied in the Hotel is "<<percen_occ<<" %.";
}
