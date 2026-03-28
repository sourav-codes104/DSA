#include <iostream>
using namespace std;

void row_sum(int arr[][3], int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    int sum = 0;
    for (int j = 0; j < col; j++)
    {
      sum+=arr[i][j];
    }
    cout<<"sum of "<<i+1<<" row is: "<<sum<<endl;
  }
  
}

void col_sum(int arr[][3], int row, int col){
  for (int i = 0; i < col; i++)
  {
    int sum = 0;
    for (int j = 0; j < row; j++)
    {
      sum+=arr[j][i];
    }
    cout<<"sum of "<<i+1<<" column is: "<<sum<<endl;
  }
  
}

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
  row_sum(arr, 3, 3);
  col_sum(arr,3,3);
}