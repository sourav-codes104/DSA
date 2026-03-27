#include <iostream>
using namespace std;

// int swap(int &x,int &y){
//   int temp = x;
//   x = y;
//   y = temp;
// }

int swap(int *p, int *q){
  int temp = *p;
  *p = *q;
  *q = temp;
}

int main(){
  int a = 5 , b =8;
  cout<<"Before: "<<endl;
  cout<<"a: "<<a<<endl;
  cout<<"b: "<<b<<endl;

  cout<<"After: "<<endl;
  swap(&a,&b);
  cout<<"a: "<<a<<endl;
  cout<<"b: "<<b<<endl;

  
} 