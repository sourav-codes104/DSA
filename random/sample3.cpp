#include <iostream>
#include <math.h>
using namespace std;

bool prime_num(int num){
  bool is_prime = true;
  if(num <= 1) return false;
  for(int i = 2; i<=sqrt(num); i++){
    if(num%i==0) return false;
  }
 return true;
}

int main(){

  int num;
  cout<<"Enter a number: ";
  cin>>num;

  bool is_prime = prime_num(num);
  cout<<is_prime;
}

