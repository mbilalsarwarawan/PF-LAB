#include <iostream>
using namespace std;
#include <cmath>
main()
{
	double value1, value2, value3;
	cout<<"Enter the number : ";
	cin>>value1;
	value2 = 2 * pow(value1 , 2.0);
	value3 = 3 + value2 / 2 - 1;
	cout<< value3<<endl;
	// For 2 the program gives 6
	// For 5 the program gives 27
	//For 4.3 the program gives 20.49
	//For 6 the program gives 38
	//Task-02
	cout<<"task-02"<<endl;
	int maxcredit,creditused,availablecredit;
	cout<<"Enter the maximum credit.";
	cin>>maxcredit;
	cout<<"Enter the credit used.";
	cin>>creditused;
	availablecredit=maxcredit-creditused;
	cout<<"The remianing credit is "<<availablecredit;
}


