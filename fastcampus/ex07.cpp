#include <iostream>

using namespace std;

int main()
{
  int num = 0;
  cout << ~num << endl; // => -1이 나온다.
}
// 00000000000000000000000000000000 = 0
// 11111111111111111111111111111111 = -1