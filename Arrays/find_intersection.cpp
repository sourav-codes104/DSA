#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int num1[7] = {1, 2, 2, 2, 4, 4,8};
  int num2[5] = {2, 2, 4, 8,9};

  vector<int> ans;
  for (int i = 0; i < 7; i++)
  {
    bool exist = false;
    for (int k = 0; k < ans.size(); k++)
    {
      if (num1[i] == ans[k])
      {
        exist = true;
        break;
      }
    }
    if (exist)
      continue;

    for (int j = 0; j < 5; j++)
    {
      if (num1[i] == num2[j])
      {
        ans.push_back(num1[i]);
        break;
      }
    }
  }
  cout<<'[';
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  cout<<']';
}