#include "Circle.h"

int main()
{
  Circle objArray[10];

  for (Circle &c : objArray)
  {
    c.x = rand() % 500;
    c.y = rand() % 300;
    c.radius = rand() % 100;
  }
  for (Circle c : objArray)
  {
    c.print();
  }
  return 0;
}