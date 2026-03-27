#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> nums = {4,2,1,7,9,8};
  int target = 13;
  for (int i = 0; i < nums.size(); i++)
  {
    for (int j = i+1; j < nums.size(); j++)
    {
      for (int k = j+1; k < nums.size(); k++)
      {
        if (nums[i]+nums[j]+nums[k]==target)
        {
          cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k];
          cout<<endl;
        }
        
      }
      
    }
    
  }
  
}