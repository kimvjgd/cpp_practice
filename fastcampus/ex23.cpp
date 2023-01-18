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

  Person persons[5];
  persons[0].grade = 1;
  cout << persons[0].grade << endl;

  Person &person = persons[1]; // Person& person을 해줘야한다.
  person.grade = 5;
  cout << person.grade << endl;
  cout << persons[1].grade << endl;
}