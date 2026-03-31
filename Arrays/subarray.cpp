#include <iostream>
using namespace std;

int main()
{
  int arr[4] = {7, 2, 5, 10};
  for (int i = 0; i < 4; i++)
  {
    for (int j = i; j < 4; j++)
    {
      for (int k = i; k <= j; k++)
      {
        cout << arr[k] << " ";
      }
      cout << endl;
    }
  }
}