
#include "Animal.h"

class Dog : public Animal
{
public:
  void speak()
  {
    cout << "개가 소리를 내고 있음" << endl;
  }
};