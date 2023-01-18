#include <iostream>

using namespace std;

int main()
{
  int nums[] = {5, 4, 3, 1, 7, 5, 3, 5, 6, 1, 2};

  for (int i = 0; i < sizeof(nums) / 4; i++)
  {
    for (int j = 0; j < sizeof(nums) / 4 - i - 1; j++)
    {
      if (nums[j] > nums[j + 1])
      {
        int temp = nums[j];
        nums[j] = nums[j + 1];
        nums[j + 1] = temp;
      }
    }
  }
  for (int i = 0; i < sizeof(nums) / 4; i++)
  {
    cout << "what the... -> ";
    cout << nums[i] << endl;
  }
}