#include <iostream>
#include <limits>

using namespace std;

int main()
{

  // 암시적인 형변환이 일어났다. => 항상 올바르게 작동하는 것은 아닌다
  unsigned int uintNum = 1;
  int intNum = 1u;
  float fNum = 1.1;

  uintNum = intNum;
  intNum = uintNum;
  fNum = intNum;
}