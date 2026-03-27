#include <iostream>
using namespace std;

int main(){
  // int i = 5;
  // cout<<i<<endl;
  // int &j = i;
  // cout<<j<<endl;
  // cout<<&i<<endl;
  // cout<<&j<<endl;

  int *ptr  = new int;
  cout<<ptr<<endl;
  cout<<sizeof(*ptr)<<endl;
  cout<<*ptr<<endl;
}