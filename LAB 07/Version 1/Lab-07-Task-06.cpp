#include<iostream>
using namespace std;
main()
{
	int A[100],B[100],C[100],i,m,n,k,j,temp,c=0;
	cout<<"Enter the size of first array.\n";
	//n is the size of array
	cin>>n;
	cout<<"Enter the elements in ascending order.\n";
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<"Enter the size of array.\n";
	//m is the size of second array
	cin>>m;
	cout<<"Enter the elements in descending order.\n";
	for(i=0;i<m;i++)
	{
		cin>>B[i];
	}
	k=n+m;
	for(i=0,j=0;i<k;i++)
	{
		//merging the array
		if(i<n&&j<n)
		{
			//merging the first
		C[i]=A[j];
		j++;
		}
		 if(i>=n&&c<m)
		{
			//merging the second
		C[i]=B[c];
		c++;
		}
		
	}
		for(i=0;i<k;i++)
	{		
		for(j=i+1;j<k;j++)
		{
			if(C[i]>C[j])
			{
				//aligning the array in ascending order
				temp=C[i];
				C[i]=C[j];
				C[j]=temp;
			}
		}
	}
	cout<<"The Merged array in Ascending order is printed.\n";
	for(i=0;i<k;i++)
	{
		cout<<C[i]<<endl;
	}

}

