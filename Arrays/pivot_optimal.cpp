#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int>nums={2,1,-1};
  int left_sum = 0;
  int total = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    total = total+nums[i];
  }
  for (int i = 0; i < nums.size(); i++){
  int right_sum = total-nums[i]-left_sum;

  if(right_sum==left_sum){
    cout<<i;
    break;
  }

  left_sum+=nums[i];
}
  }