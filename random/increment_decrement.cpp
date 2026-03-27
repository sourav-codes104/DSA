#include <iostream>
using namespace std;

int main(){
  cout<<"--------Post Increment-----------"<<endl;
  int a = 5;
  cout<<"Value of a initially: "<<a<<endl;
  int i = a++;
  cout<<"Value of i initially: "<<i<<endl;
  cout<<"Value of a finally: "<<a<<endl;

  cout<<"--------Post Decrement-----------"<<endl;
  int b = 5;
  cout<<"Value of a initially: "<<b<<endl;
  int j = b--;
  cout<<"Value of j initially: "<<j<<endl;
  cout<<"Value of b finally: "<<b<<endl;

  cout<<"--------Pre Increment-----------"<<endl;
  int c = 5;
  cout<<"Value of c initially: "<<c<<endl;
  int k = ++c;
  cout<<"Value of k initially: "<<k<<endl;
  cout<<"Value of c finally: "<<c<<endl;

  cout<<"--------Pre Decrement-----------"<<endl;
  int d = 5;
  cout<<"Value of d initially: "<<d<<endl;
  int l = --d;
  cout<<"Value of l initially: "<<l<<endl;
  cout<<"Value of d finally: "<<d<<endl;

}