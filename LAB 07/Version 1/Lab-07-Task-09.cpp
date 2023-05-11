#include<iostream>
#include<stdlib.h>

using namespace std;
//initialization of variables
     int i;
     char row1[3]={'1','2','3'};
	 char row2[3]={'4','5','6'};
	 char row3[3]={'7','8','9'};
     int choice;
     int turn;
     char icon;
     bool state=true;
void display(){
	//this user-defined function for dispalying the board of tic tac toe
	//this function is for refreshing the screen
	system("cls");
	 cout<<"Tic Tac Toe!\n";
	 cout<<"\n Enter the number to chose the position.\n";
	    cout<<"\n\n";
     cout<<"\t "<<row1[0]<<" |  "<<row1[1]<<"  | "<<row1[2]<<" \n";
     cout<<"\t------------\n";
     cout<<"\t "<<row2[0]<<" |  "<<row2[1]<<"  | "<<row2[2]<<" \n";
     cout<<"\t------------\n";
     cout<<"\t "<<row3[0]<<" |  "<<row3[1]<<"  | "<<row3[2]<<" \n\n";
}
void players_turn()
{
	//this function is for players turn 
	    switch(choice)
     {
        case 1:
		if (row1[0]=='1')row1[0]=icon;
		else {
		cout<<"You have entered wrong\n"; i--;
		system("pause");
		}
		break;
		case 2:if (row1[1]=='2')row1[1]=icon;
		else {
		cout<<"You have entered wrong\n"; i--;
		system("pause");
		}
		break;
		case 3:if (row1[2]=='3')row1[2]=icon;
		else {
		cout<<"You have entered wrong\n"; i--;
		system("pause");
		}
		break;
		case 4:if (row2[0]=='4')row2[0]=icon;
		else {
		cout<<"You have entered wrong\n"; i--;
		system("pause");
		}
		break;
		case 5:if (row2[1]=='5')row2[1]=icon;
		else {
		cout<<"You have entered wrong\n"; i--;
		system("pause");
		}
		break;
		case 6:if (row2[2]=='6')row2[2]=icon;
		else {
		cout<<"You have entered wrong\n"; i--;
		system("pause");
		}
		break;
		case 7:if (row3[0]=='7')row3[0]=icon;
		else {
		cout<<"You have entered wrong\n"; i--;
		system("pause");
		}
		break;
		case 8:if (row3[1]=='8')row3[1]=icon;
		else {
		cout<<"You have entered wrong\n"; i--;
		system("pause");
		}
		break;
		case 9:if (row3[2]=='9')row3[2]=icon;
	    else {
		cout<<"You have entered wrong\n"; i--;
		system("pause");
		}
		break; 
	
	 }
}
void status()
{
	// this is for match status 
	// draw or win 
	{
		if(row1[0]==row1[1]&&row1[2]==row1[0]||row1[0]==row2[0]&&row1[0]==row3[0])
		{
		cout<<"Player "<<icon<<" win!";
		state=false;
		}
		else if(row2[0]==row2[1]&&row2[2]==row2[0]||row1[1]==row2[1]&&row1[1]==row3[1])
		{
		cout<<"Player "<<icon<<" win!";
		state=false;
		}
		else if(row3[0]==row3[1]&&row3[2]==row3[0]||row1[2]==row2[2]&&row1[2]==row3[2])
		{
		cout<<"Player "<<icon<<" win!";
		state=false;
		}
		else if(row1[0]==row2[1]&&row1[0]==row3[2]||row1[2]==row2[1]&&row1[2]==row3[0])
		{
		cout<<"Player "<<icon<<" win!";
		state=false;	
		}
		else if(i==9)
    	 {
    	 	cout<<"Match Draw.!";
    	 	state=false;	
		 }
	}
}
main()
{
    status();
    display();
    {
     i=0;
    while(state)	   
    {
    	status();
    	if(i<9)
    	{
    	if(i%2==0)
    	{
    		icon='O';
    		cout<<"Player 1's Turn [O]\n";
    		cin>>choice;
    		players_turn();
    		display();
    		status();
		}
		else if(i%2!=0)
		{
			icon='X';
			cout<<"Player 2's Turn  [X]\n";
    		cin>>choice;
			players_turn();
			display();
			status();	
		}
		i++;}
		

	}
	}
    
}
