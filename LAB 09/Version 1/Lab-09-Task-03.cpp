#include<iostream>
#include<ctime>
#include<cstdlib>
const int r=3;
const int c=3;
using namespace std;
int Total(int matrix[r][c]);
float Average(int matrix[r][c]);
int totalCol(int matrix[r][c],int col);
int totalRow(int matrix[r][c],int row);
int highInCol(int matrix[r][c],int col);
int highInRow(int matrix[r][c],int row);
main()
{
	srand(time(0));
	int matrix[3][3];
	int noOfCol;
	int noOfRow;
	
	cout<<"Generating a 3 by 3 random matrix.\n";
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			matrix[i][j]=rand()%100;
		}
	}
	
	for(int i=0;i<r;i++)
	{
		cout<<"| ";
	   for(int j=0;j<c;j++)
	   {
	   	cout<<matrix[i][j]<<" ";
	   	
		}
		cout<<" |\n";	
	}
	cout<<"The sum of total enteries in the matrix is = ";
	cout<<Total(matrix)<<" ."<<endl;
	cout<<"The average of all the enteries in the matrix is = ";
	cout<<Average(matrix)<<" ."<<endl;
	cout<<"Enter the number of column in which you want to find sum of enteries.\n";
	cin>>noOfCol;
	while(noOfCol>3||noOfCol<1)
	{
		cout<<"Entered wrong value . Try again.\n";
		cin>>noOfCol;
	}
	cout<<totalCol(matrix,noOfCol)<<endl;;
	
	cout<<"Enter the number of row in which you want to find sum of enteries.\n";
	cin>>noOfRow;
	while(noOfRow>3||noOfRow<1)
	{
		cout<<"Entered wrong value . Try again.\n";
		cin>>noOfRow;
	}
	cout<<totalRow(matrix,noOfRow)<<endl;
	
	cout<<"Enter the number of column in which you want find highest entery.\n";
	cin>>noOfCol;
	while(noOfCol>3||noOfCol<1)
	{
		cout<<"Entered wrong value . Try again.\n";
		cin>>noOfCol;
	}
	cout<<highInCol(matrix,noOfCol)<<endl;
	
	cout<<"Enter the number of row in which you want you want to find the highest entery.\n";
	cin>>noOfRow;
	while(noOfRow>3||noOfRow<1)
	{
		cout<<"Entered wrong value . Try again.\n";
		cin>>noOfRow;
	}
	cout<<highInRow(matrix,noOfRow);
}

int Total(int matrix[r][c])
{ 
int total;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			total=total+matrix[i][j];
		}
	}
	return(total);
}
float Average(int matrix[r][c])
{
	float average;

	
	int noOfElements=r+c;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<r;j++)
		{
		  average=average+matrix[i][j];	
		}
	}
	average=average/(r*c);
	return(average);
}
int totalCol(int matrix[r][c],int col)
{
	int totalCol;
	col=col-1;
	for (int i=0;i<3;i++)
	{
		totalCol=totalCol+matrix[i][col];
	}
	return(totalCol);
}

int totalRow(int matrix[r][c],int row)
{
	int totalRow=0;
	row=row-1;
	for (int i=0;i<3;i++)
	{
		totalRow=totalRow+matrix[row][i];
	}
	return(totalRow);
}

int highInRow(int matrix[r][c],int row)
{
	int highest;
	row=row-1;
	for (int i=0;i<3;i++)
	{
		if(highest<matrix[row][i])
		{
			highest=matrix[row][i];
		}
	}
	return(highest);
}
int highInCol(int matrix[r][c],int col)
{
	int highest;
	col=col-1;
	for (int i=0;i<3;i++)
	{
		if(highest<matrix[i][col])
		{
			highest=matrix[i][col];
		}
	}
	return(highest);
}
