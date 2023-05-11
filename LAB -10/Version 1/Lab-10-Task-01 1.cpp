#include <iostream>
using namespace std;
int main()
{
  const int a = 5;
  int b = 6;
  const int *p = &a;
  cout << *p;
  p = &b;
  b = 4;
  cout << *p;

}
