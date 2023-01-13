#include <iostream>
#include <string>
// 문자열 처리하는 library

using namespace std;

int main(int argc, char const *argv[])
{
  int i;
  i = 1000;
  cout << i << endl;

  string s = "hello";
  // string s { "hello"};      // 컴파일 버젼에 따라 안되는 경우가 있다.(나도 안된다... ㅠ)
  cout << s << endl;
  return 0;
}