#include <iostream>
using namespace std;

int main()
{
  int num = 5;
  // cout<<num<<" "<<&num;
  // int *addr = &num;
  // cout<<addr<<endl;
  // cout<<*addr;
  int *ptr = &num;
  cout<<++(*ptr);
  
}