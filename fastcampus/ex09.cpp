#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  bool attendanceboolBook[32];
  uint32_t attendanceBook = 0; // 00000000000000000000000000000000
  // 한달 출석체크를 나타내려면 아래가 훨씬 낫다.

  // ex) 00000000000000000000000000000101 => 1, 3번째 날 출첵했다

  uint32_t attendance = 5u;
  // cout << attendance << endl;
  // 이러면 그냥 5가 나와서 알기 쉽지 않다.

  // 00000000000000000000000000000101 = 5
  // 00000000000000000000000000000001 = 1
  // &하면

  // 00000000000000000000000000000001 => true
  // 00000000000000000000000000000000 => false
  if (attendance & (int)pow(2, 0))
    cout << "1st" << endl;
  if (attendance & (int)pow(2, 1))
    cout << "2nd" << endl;
  if (attendance & (int)pow(2, 2))
    cout << "3rd" << endl;
}