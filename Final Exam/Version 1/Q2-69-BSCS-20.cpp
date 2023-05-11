/*

Roll no 69-bscs-20;
question no2:
task:10
*/


#include <iostream>
//namespace
using namespace std;
//main function
 main()
{
    //declaration of required variables
    double arr[15]; 
	//array of 15 double elements
    double sum = 0;
	 // store sum of all entered number
    double input = 0;
    double average;
    int i = 0;
	 //used throughout the program for looping the array
    bool check = false; 
	//check whether user exitted without entering any number
    //Taking input from the user
    cout << "Start Entering numbers in the array (enter 99999 to stop)" << endl;
    while(input != 99999 && i < 15)
    {
        cout << "Enter any number in "<< i+1 << " array : ";
        cin >> input;
        if(input == 99999)
        {
            if (i == 0)
                check = true;
            continue;
        }
        if(input != 99999)
        {
            arr[i] = input;
            sum = sum + arr[i];
            i++;
        }
    }
    if(check) 
    {
        cout << "You have not entered any number therefore terminating the program";
        return 0;
    }
    //calculating average
    average = sum / (i);
    //displaying results
    for(int j = 0 ; j < i ; j++)
    {
        cout << arr[j] << "\t\t" << average - arr[j] << endl;
    }   
}
