#include <iostream>
#include <climits>
using namespace std;

int main(){
  int arr[100] = {34,32,65,13,76,41,29,45,67};
  int max = INT_MIN;
  int min = INT_MAX;
  for (int i = 0; i < 9; i++)
  {
    if (arr[i]>max)
    {
      max=arr[i];
    }
    if (arr[i]<min)
    {
      min=arr[i];
    }
    
  }

  cout<<"Maximum value: "<<max<<endl;
  cout<<"Minimum value: "<<min<<endl;
}