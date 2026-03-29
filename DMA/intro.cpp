#include <iostream>
using namespace std;

int main()
{
  // static memory allocation : stack memory at compile-time.
  int arr[5] = {1, 2, 3, 4, 5};

  // dynamic memory allocation : heap memory at run-time.
  int size;
  cin >> size;
  int *brr = new int[size];
  for (int i = 0; i < size; i++)
  {
    cin >> brr[i];
  }
  for (int i = 0; i < size; i++)
  {
    cout<< brr[i];
  }

  delete []brr;
}