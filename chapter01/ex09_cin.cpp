#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
  int i;
  cin >> i;
  // 파이썬에서는 무조건 str 타입으로 입력되는데 여기선 저절로... 오 이건 괜찮네
  double f;
  cin >> f;
  cout << i << " " << f << endl;
  return 0;
}