#include <iostream>
using namespace std;

int main(){
  int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},};
  int top = 0, bottom = 2, left = 0, right =3;
  while(top<=bottom && left<=right){
    for (int i = left ; i <= right; i++)
    {
      cout<<arr[top][i]<<" ";
    }
    top++;
    for (int i = top; i <= bottom ; i++)
    {
      cout<<arr[i][right]<<" ";
    }
    right--;
    for (int i = right; i >= left; i--)
    {
      cout<<arr[bottom][i]<<" ";
    }
    bottom--;
    for (int i = bottom; i >= top; i--)
    {
      cout<<arr[i][left]<<" ";
    }
    left++;
  }
}