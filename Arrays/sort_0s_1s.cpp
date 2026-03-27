#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;

int main()
{
  vector<int> nums = {1, 1, 0, 1, 0}; // {0,0,1,1,1}
  int i = 0, j = nums.size() - 1;
  while (i <= j)
  {
    if (nums[i] == 0)
    {
      i++;
    }
    if (nums[j] == 1)
    {
      j--;
    }
    if (nums[i] == 1 && nums[j] == 0)
    {
      swap(nums[i], nums[j]);
      i++;
      j--;
    }
  }
  for (int k = 0; k < nums.size(); k++)
  {
    cout << nums[k] << " ";
  }
}