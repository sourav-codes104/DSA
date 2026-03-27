#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> nums = {1, 7, 3, 6, 5, 6};
  vector<int> right_array(nums.size()), left_array(nums.size());
  int left_array_sum =0 ,right_array_sum=0;

  int k = 0;
  for (int i = 1; i < left_array.size(); i++)
  {
    left_array_sum = left_array_sum + nums[k];
    left_array[i] = left_array_sum;
    k++;
  }

  for (int i = 0; i < left_array.size(); i++)
  {
    cout << left_array[i] << " ";
  }

  int l = right_array.size()-1;
  for (int j = right_array.size()-2; j >= 0; j--)
  {
    right_array_sum = right_array_sum + nums[l];
    right_array[j] = right_array_sum;
    l--;
  }
  cout<<endl;
  for (int j = 0; j < right_array.size(); j++)
  {
    cout << right_array[j] << " ";
  }
  cout<<endl;
  for (int i = 0; i < nums.size(); i++)
  {
    if (right_array[i]==left_array[i])
    {
      cout<<i;
    }
    
  }

}