#include <iostream>
using namespace std;
#include <vector>

int main()
{
  int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  int brr[3][3];
  int k = 0;
  for (int i = 0; i < 9; i++)
  {
    brr[i/3][i%3] = arr[i];
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << brr[i][j] << " ";
    }
    cout << endl;
  }
}