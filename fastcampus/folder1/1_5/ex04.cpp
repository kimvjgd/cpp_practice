#include <iostream>

using namespace std;

int main()
{
  int intNum = 0;
  long longNum = 0;
  int *intPointer = &intNum;

  cout << sizeof(intNum) << endl;
  cout << sizeof(longNum) << endl;
  cout << sizeof(intPointer) << endl;
}