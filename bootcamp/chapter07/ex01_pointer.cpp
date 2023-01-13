#include <iostream>
using namespace std;

int main()
{
  int number = 0;
  int number2 = 100;
  int *p = &number;

  cout << p << endl;
  cout << *p << endl;

  p = &number2; // 변경 가능하다.

  cout << p << endl;
  cout << *p << endl;

  return 0;
}