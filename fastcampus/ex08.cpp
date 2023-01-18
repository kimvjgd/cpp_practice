#include <iostream>

using namespace std;

int main()
{
  int num0 = 5;  // 0000 0101
  int num1 = 10; // 0000 1010
                 // &하면 0
                 // |하면 0000 1111 => 1+2+4+8 = 15

  int result1 = num0 & num1;
  cout << result1 << endl;

  int result2 = num0 | num1;
  cout << result2 << endl;
}