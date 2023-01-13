#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
  int numbers[] = {1, 2, 3, 4, 5};
  int *p = numbers;
  cout << p << endl;
  cout << *p << endl;

  return 0;
}