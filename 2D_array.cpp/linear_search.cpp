#include <iostream>
#include <algorithm>
using namespace std;

pair<int,int> search(int arr[][3], int row, int col, int target);

int main()
{
  int arr[3][3];
  // Array Input
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> arr[i][j];
    }
  }
  cout << "Array Ouptut: " << endl;
  cout << "[" << endl;
  for (int i = 0; i < 3; i++)
  {
    cout << "[";
    for (int j = 0; j < 3; j++)
    {
      cout << arr[i][j];
      if (j < 2)
        cout << " ,";
    }
    cout << "]";
    if (i < 2)
      cout << ",";
    cout << endl;
  }
  cout << "]";
  cout<<endl;
  int target = 8;
  pair<int, int>ans = search(arr, 3, 3, target);
  if (ans.first!=-1)
  {
    cout << "Element found at index :" << ans.first<<","<<ans.second;
  }
  else
  {
    cout << "Not found";
  }
}

pair<int,int>search(int arr[][3], int row, int col, int target)
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (arr[i][j] == target)
      {
        return {i, j};
      }
    }
  }
  return {-1,-1};
}