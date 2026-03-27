#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  char ch[5] = {'a','b','c','d','e'};
    // char ch[6] = "abcde";

  for (int i = 0; i < 5; i++)
  {
    cout<<ch[i]<<" ";
  }
  cout<<endl;
  cout<<"Address of array";
  cout<<endl;
  cout<<(void*)&ch[1];
  

           
}