#include <iostream>
using namespace std;

int main(){
  int arr[6] = {7,9,10,1,2,3};
  int start = 0, end = 5;
  int mid = start+(end-start)/2;
  while(start<end){
    
    if(arr[mid]>arr[end]){
      start = mid+1;
    }
    else{
      end = mid;
    }
    mid = start+(end-start)/2;
  }
  cout<<mid;
}