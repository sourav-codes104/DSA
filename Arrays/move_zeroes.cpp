#include <iostream>
#include<vector>
using namespace std;

int main(){
vector<int>nums={0,1,0,3,12};
int i = 0, j = 0, swap = 0;

  while (j< nums.size())
  {
    if ( nums[j] != 0)
    {
      int temp = nums[i];
      nums[i] = nums[j];
      nums[j] = temp;
      i++;
      swap++;
    }
    j++;
  }
  for (int i = 0; i < nums.size(); i++)
  {
    cout<<nums[i]<<" ";
  }
  cout<<endl;
  cout<<swap;
}