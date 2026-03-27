#include <iostream>
using namespace std;

int main(){
  int bin = 0, dec = 0, pow = 1;
  cout<<"Enter the number(binary): ";
  cin>>bin;
  while(bin){
    int last = bin%10;
    dec+=last*pow;
    bin/=10;
    pow*=2;
  }
  cout<<"----------------"<<endl;
  cout<<"The number after converting to decimal is: "<<dec;
}