#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> nums ={4,3,2,7,8,2,3,1}, ans;
  for (int i = 0; i < nums.size(); i++)
  {
    for (int j = i+1; j < nums.size(); j++)
    {
      if (nums[i]==nums[j])
      {
        ans.push_back(nums[i]);
      }
      
    }
    
  }
  for (int k = 0; k < ans.size(); k++)
  {
    cout << ans[k] << " ";
  }
  
}