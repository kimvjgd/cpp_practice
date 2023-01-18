#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  // uint32_t attendanceBook = 0u;

  // attendanceBook |= (int)pow(2, 0) + (int)pow(2, 2);
  // // 만약 여기서 3번째 날을 결석처리하려고 한다면?
  // attendanceBook &= ~(int)pow(2, 2);
  // cout << attendanceBook;
  int num0 = 1; //  0001
  int num1 = 5; //  0101
  cout << (num0 ^ num1);
}

// 00000000000000000000000000000000
// 00000000000000000000000000000001
// or
// 00000000000000000000000000000001 -> 1번째날 출석처리