#include <iostream>
using namespace std;

int main(){
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  for (int i = 0; i <= 0;i++)
  {
    
    for (int j = 0; j < 3; j++)
    {
      cout<<arr[i][j]<<" ";
    }
  
  for (int i = 1; i <= 2 ; i++)
  {
    for (int j = 2; j <= 2; j++)
    {
      cout<<arr[i][j]<<" ";
    }
    
  }

  for (int i = 2; i <= 2 ; i++)
  {
    for (int j = 1; j >=0 ; j--)
    {
      cout<<arr[i][j]<<" ";
    }
    
  }
  
  for (int i = 1; i <= 1 ; i++)
  {
    for (int j = 0 ; j <=1 ; j++)
    {
      cout<<arr[i][j]<<" ";
    }
    
  }
  
  
  

    
  }
}

  

