#pragma once

#include <string>
using namespace std;

// Circle 클래스의 원형(prototype, signature) 같은 경우 확장자를 h(header)로 바꿔준다.
class Circle
{
public:
  int radius;
  string color;

  double calcArea()
  {
    return 3.14 * radius * radius;
  }
};