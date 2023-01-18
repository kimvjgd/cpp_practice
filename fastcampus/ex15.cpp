#include <iostream>

using namespace std;

int main()
{

  int nums0[3] = {0, 1, 2};
  int nums1[3];
  memcpy(nums1, nums0, sizeof(nums0));
  for (int i = 0; i < 3; i++)
  {
    cout << nums1[i] << endl;
  }
}
