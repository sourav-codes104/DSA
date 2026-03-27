#include <iostream>
using namespace std;

int main(){
  // int size=0;
  // cout<<"Enter the size of array: ";
  // cin>>size;
  // int *ptr = new int[size];
  // for (int i = 0; i < size; i++)
  // {
  //   cin>>ptr[i];
  // }
  // delete []ptr;

  int *num = new int ;
  cout<<"Enter num: ";
  cin>>*num;
  
  cout<<sizeof(*num)<<endl;
  
  cout<<sizeof(num)<<endl;

 delete num;
  



}