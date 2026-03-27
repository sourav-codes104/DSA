#include <iostream>
using namespace std;

int main(){
  int arr[5]={1,2,3,4,5};
  int i = 0, j = 4;
  while(i<5 && j>=0){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
    cout<<arr[i]<<" ";
  }

}