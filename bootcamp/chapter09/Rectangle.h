#include "Shape.h"

class Rectangle : public Shape
{
  int width, height;

public:
  Rectangle()
  {
    cout << "Rectangle() 생성자" << endl;
  }
  Rectangle(int x, int y, int w, int h) : Shape(x, y), width(w), height(h)
  {
    cout << "Rectangle(x, y, w, h) 생성자" << endl;
  }
  ~Rectangle()
  {
    cout << "~Rectangle() 소멸자" << endl;
  }
};