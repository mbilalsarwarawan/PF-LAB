//Libraries
#include <iostream>
#include <conio.h>
#include <iomanip>
//Namespace
using namespace std;
//Custom Funtions
void get_input(int& , int&);
void swap_values(int& , int&);
void order(int& , int&);
void give_results(int num1, int num2);
//main function
int main()
{
  int num1;
  int num2;
  get_input(num1 , num2);
  order(num1 , num2);
  give_results(num1 , num2);
}

//get_input() function
void get_input(int& num1 , int& num2)
{
  cout << "Enter first number  : ";
  cin >> num1;
  cout << "Enter second number : ";
  cin >> num2;
}

//swap functions
void swap_values(int& num1 , int& num2)
{
  int temp;
  temp = num1;
  num1 = num2;
  num2 = temp;
}

//order function
void order(int& num1 , int& num2)
{
  if(num1 >= num2)
  {
    swap_values(num1 , num2);
  }
}

//give_results function
void give_results(int num1 , int num2)
{
  cout << num1 << endl << num2;
}
