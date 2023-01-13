#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
  int list[] = {1, 2, 3, 4, 5};
  for (int i : list)
  {
    cout << i << " ";
  }
  cout << endl;

  for (int &i : list)
  {
    i += 2;
  }
  cout << endl;

  for (auto &i : list)
  {
    cout << i << " ";
  }
  return 0;
}