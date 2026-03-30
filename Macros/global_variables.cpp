#include <iostream>
using namespace std;

int x = 5;

// int main(){
//   int x = 6;
//   cout<<::x<<endl;//:: scope resolution operator to access the global if variable shadowing occurs
//   x++;
//   cout<<x; 
// }

void ex(){
  cout<<x++<<endl;
}

void ex2(){
  cout<<x++<<endl;
}

void ex3(){
  cout<<x<<endl;
}

int main(){
  ex();
  ex2();
  ex3();
}