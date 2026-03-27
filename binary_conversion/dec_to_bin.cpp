#include <iostream>
#include <math.h>
using namespace std;

int main(){
  // int num=0,bin=0;
  // cout<<"Enter the decimal number: ";
  // cin>>num; 
  // int place_value = 1;
  // while(num>0){
  //   bin+=num%2*place_value;
  //   num=num/2;
  //   place_value*=10;
  //   }
  // cout<<bin;
  int num=0,bit=0,i=0,ans=0;
  cout<<"Enter the decimal number: ";
  cin>>num;
  while(num!=0){
    bit = num & 1;
    ans += (bit*pow(10,i));
    num = num >> 1;
    
    i++;
  }
  cout<<ans;
}