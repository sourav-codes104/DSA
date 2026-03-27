#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> nums1 = {3, 1, 2, 0, 1, 0};
  int i = 0, j = nums1.size() - 1;
  int itr = 0 ;
  while (itr <= j)
  {
    if (nums1[itr]==2)
    {
      swap(nums1[itr],nums1[j]);
      j--;
    }
    else if (nums1[itr] == 0)
    {
      swap(nums1[itr],nums1[i]);
      itr++;
      i++;
    }
    else 
    {
      itr++;
    }

  }
  for (int k = 0; k < nums1.size(); k++)
  {
    cout << nums1[k] << " ";
  }
}