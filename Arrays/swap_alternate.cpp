#include <iostream>
using namespace std;

int main(){
  int arr[5] = {1,2,3,4,5};
  // = {2,1,4,3,6,5}
  for (int i = 0, j = 1; i < 6; i+=2, j+=2)
  {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
  for (int i = 0; i < 5; i++)
  {
    cout<<arr[i]<<" ";
  }
  
  
}