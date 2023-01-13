#pragma once

#include <iostream>
using namespace std;
int hour = 14;
class Time
{
protected:
  int hour;
  int minute;

public:
  // 생성자
  Time(int hour = 0, int minute = 0)
  {
    this->hour = hour;
    this->minute = minute;
  }

  ~Time()
  {
    cout << "destructor call!";
  }

  void print()
  {
    cout << hour << ":" << minute << endl;
  }
};