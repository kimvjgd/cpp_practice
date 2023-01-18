#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
  struct EyeSight
  {
    float left;
    float right;
  };
  struct Person
  {
    float height;
    float weight;
    char name[10];
    short grade;
    EyeSight eyeSight;
  };
  Person person = {.height = 181.3, .weight = 72.2, .name = "dongdong", .grade = 5, {1.1f, 1.0f}};
  // person.height = 181.3;
  // person.weight = 72.2;
  // strcpy(person.name, "dongdong");
  // person.grade = 5;

  cout << person.height << endl;
  cout << person.weight << endl;
  cout << person.name << endl;
  cout << person.grade << endl;
  cout << person.eyeSight.left << endl;
  cout << person.eyeSight.right << endl;
}