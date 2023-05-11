#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int n,i;
	float sum,r,temp;
	cout<<"Enter the n number by which the geometric series is to be added.\n";
	cin>>n;
	i=0;
	while(i<n)
	{
		//this loop add the geometric sum to (n-1).
		//because first term is zero n=0
    sum=sum+0.5*pow(0.5,i);
     
     i++;
    }
    cout<<"The sum of the series is = "<<sum;
}
