#include <iostream>

using namespace std;

int main()
{
  int num = -10;
  int abs = num < 0 ? -num : num; // 3항연산자
  cout << abs;
}