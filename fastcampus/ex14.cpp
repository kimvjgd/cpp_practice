#include <iostream>

using namespace std;

int main()
{
  char ch = 'a';
go:
  cout << ch;
  if (++ch <= 'z')
  {
    goto go;
  }
}