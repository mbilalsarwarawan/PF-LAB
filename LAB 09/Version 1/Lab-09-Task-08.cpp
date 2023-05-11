//Libraries
#include <iostream>
#include <conio.h>
#include <iomanip>
//Namespace
using namespace std;
//Custom Funtions
double computeBill(double);
double computeBill(double , int);
double computeBill(double , int , double);
//Main Function
int main()
{
  //Variable Declarations
  bool quantchk = false;
  bool couponchk = false;
  double price = 0;
  double coupon = 0;
  double total = 0;
  int quantity = 0;
  char option = '0';
  //Input section
  cout << "\t<Input Panel>" << endl;
  cout << "Enter price of the product   : ";
  cin >> price;
  cout << "\n\n";
  //Checking if quantity is greater than 1 and if it is than ask for the price
  cout << "Is quantity greater than 1 (Y/N) : ";
  option = _getche();
  cout << "\n";
  if(option == 'y' || option =='Y')
  {
    quantchk = true;  //Marks boolean quantchk as true
    cout << "Enter quantity of the product : ";
    cin >> quantity;
  }
  cout << "\n\n";
  //Checking if there is any coupon
  //(it'll be asked only if quantity is greater than 1)
  //as specified by the program requirement
  if(quantchk == true)
  {
    cout << "Is there any available coupon (Y/N) : ";
    option = _getche();
    cout << "\n";
    if(option == 'y' || option =='Y')
    {
      couponchk = true;
      cout << "Enter price of the coupon     : ";
      cin >> coupon;
    }
  }

  if(quantchk == false)
  {
    total = computeBill(price);
  }
  if(quantchk == true && couponchk == false)
  {
    total = computeBill(price , quantity);
  }
  if(quantchk == true && couponchk == true)
  {
    total = computeBill(price , quantity , coupon);
  }
  system("cls");
  cout << "\t\t    <Bill Summary>\n\n";
  cout << "\t+-------------------------------------+" << endl;
  cout << "\t|             Product Bill            |" << endl;
  cout << "\t+-------------------------------------+" << endl;
  cout << "\t| Price of the product      " << left << setw (10) << price << "|" << endl;
  cout << "\t| Quantity of the product   " << left << setw (10) << quantity << "|" << endl;
  cout << "\t| Coupon price (if any)     " << left << setw (10) << coupon << "|" << endl;
  cout << "\t+-------------------------------------+" << endl;
  cout << "\t| Total Price :             " << left << setw (10) << total << "|" << endl;
  cout << "\t+-------------------------------------+" << endl;

}

//computeBill with single Parameter
double computeBill(double price)
{
  double total;
  total = price + (price * (0.08));
  return total;
}
//computeBill with two parameteers
double computeBill(double price , int quantity)
{
  double total;
  //it'll calculate total price for a quantity
  price = price * quantity;
  //it'll calculate after adding tax of 8%
  total = price + (price * (0.08));
  return total;
}
//computeBill with Three parameteers
double computeBill(double price , int quantity , double coupon)
{
  double total;
  //it'll calculate total price for a quantity
  price = price * quantity;
  //it'll calculate price after discounting coupon value
  price = price - coupon;
  //it'll calculate after adding tax of 8%
  total = price + (price * (0.08));
  return total;
}
