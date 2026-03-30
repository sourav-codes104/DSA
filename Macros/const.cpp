#include <iostream>
using namespace std;

int main(){
  // const int value = 10;
  // cout<<value;
  // value++;
  // cout<<value; (not allowed)

  //const with pointers

  //case 1 const value
  // int x = 10;
  // const int *ptr = &x;
  // x = 20;
  // cout<<*ptr;

  // // *ptr = 20;(not allowed)
  // // cout<<ptr;

  // int y = 20;
  // ptr = &y;
  // cout<<ptr;

  //case 2 const pointer

  // int x = 10;
  // int *const ptr = &x;
  // x = 20;
  // cout<<x;

  // int y = 30;
  // ptr = &y;(not allowed)

  //case 3 both const

  // int x = 20;
  // const int *const ptr = &x;
  // *ptr = 30;(not allowed)

  // int y = 30;
  // ptr = &x;(not allowed)

}