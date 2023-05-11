using namespace std;
#include<iostream>
main()
{
	int a[100][100];
	int b[100][100];
	int c[100][100];
	 int row,column;
	
	 cout<<"Enter the number of rows of the two matrices which are to be added.\n";
	 cin>>row;
	  cout<<"Enter the number of columns of the two matrices which are to be added.\n";
	 cin>>column;
	 
	 cout<<"Enter the values for first matrix.\n";
	 for(int i=0;i<row;i++)
	 {
	 	for(int j=0;j<column;j++)
	 	{
	 		cin>>a[i][j];
	 		
		 }
	
	 }
	 
	 cout<<"Enter the values for second matrix.\n";
	 	for(int i=0;i<row;i++)
     	{
	  
	 	for(int j=0;j<column;j++)
	 	{
	 		cin>>b[i][j];
	 		
        }
	
	     }
	 	 for(int i=0;i<row;i++)
	 {
	 	for(int j=0;j<column;j++)
	 	{
	 		
	 		c[i][j]=a[i][j]+b[i][j];
		 }
	    
	 }
	 cout<<"The resultant matrix is \n";
		 for(int i=0;i<row;i++)
	 {
	 	cout<<"| ";
	 	for(int j=0;j<column;j++)
	 	{
	 	 
		  cout<<c[i][j]<<" ";	
	 		
		 }
	cout<<" |\n";
	 }
	
	
}
