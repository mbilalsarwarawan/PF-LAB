#include <iostream>
using namespace std;
//User Defined function
void addOne (int *ptrNum);
int main()
{
  int a = 0;
  cout << "Enter any number : ";
  cin >> a;
  addOne(&a);  //This & will pass the address of a to the pointer in the function
  cout << "Incremented Number : " << a;
}
//addOne func()
void addOne (int *ptrNum)
{
  *ptrNum = *ptrNum + 1;
}
