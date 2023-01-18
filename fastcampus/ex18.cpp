#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  int num = 100;
  char str0[100];

  sprintf(str0, "%d %d", num, num);
  cout << str0 << endl;
}