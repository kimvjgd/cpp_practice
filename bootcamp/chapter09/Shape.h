#include <iostream>
#include <string>
using namespace std;
class Shape
{
  int x, y;

public:
  Shape()
  {
    cout << "Shape() 생성자" << endl;
  }
  Shape(int xloc, int yloc) : x(xloc), y(yloc)
  {
    cout << "Shape(xloc, yloc) 생성자" << endl;
  }
  ~Shape()
  {
    cout << "~Shape() 소멸자" << endl;
  }
};