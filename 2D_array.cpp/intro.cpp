#include <iostream>
using namespace std;

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
}