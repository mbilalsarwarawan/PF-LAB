#include<iostream>
using namespace std;
int row1,col1,row2,col2;
void showMatrix(int matrix[100][100]);
void fillMatrix(int matrix[100][100]);
void multiplication(int matrix1[100][100],int matrix2[100][100] );
int result[100][100];

main()
{
	int matrix1[100][100];
	int matrix2[100][100];
	

    repeat :
	
	cout<<"Enter the number of rows in First matrix.\n";
	cin>>row1;
	cout<<"Enter the number of columns in the First matrix.\n";
	cin>>col1;
	cout<<"Enter the number of rows in Second matrix.\n";
	cin>>row2;
	cout<<"Enter the number of columns in the Second matrix.\n";
	cin>>col2;
	
	if(col1!=row2)
	{
		cout<<"For multipication the columns of first matrix  must be equal to rows of second matrix.\n";
		system("pause");
		system("CLS"); 
		 goto repeat;
		
	}
	
	
		cout<<"Now enter the values for Second matrix.\n";

	 fillMatrix(matrix1);
	showMatrix(matrix1);
	
	cout<<"Now enter the values for Second matrix.\n";
    fillMatrix(matrix2);
	showMatrix(matrix2);
	cout<<"The resultant matrix is given.\n";
	multiplication(matrix1,matrix2);
	showMatrix(result);
	
	
}
void fillMatrix(int matrix[100][100])
{
		for(int i=0;i<row1;i++)
	{
		for(int j=0; j<col1 ;j++)
		{
			cin>>matrix[i][j];
		}
	}
}

void showMatrix(int matrix[100][100])
{
		for(int i=0;i<row1;i++)
	{
		cout<<"| ";
		for(int j=0;j<col1;j++)
		{
		  cout<<matrix[i][j]<<" ";
		}
	
		cout<<" |\n";
	}
	
}
void multiplication(int matrix1[100][100],int matrix2[100][100] )
{
	int sum=0;
	for(int i=0;i<row1;i++)
	{
		for (int j=0;j<col2;j++)
		{
	       for(int k=0;k<row2;k++)
		   {
		   	   sum=sum+(matrix1[i][k]*matrix2[k][j]);
		   }
		   
			   result[i][j]=sum;
			   sum=0;	
			
		}
	}
}
