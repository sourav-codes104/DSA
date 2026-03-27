#include <iostream>
#include <cmath>
using namespace std;

int main(){
  // // int num = 11;
  // // cout<<(num & 1);
  // int num = -321,rev=0;
  // while (num)
  // {
  //   rev=rev*10+(num%10);
  //   num/=10;
  // }
  // cout<<rev;
  // cout<<(64&63);
  int num = 5;
  int bit = 0,flip=0,result=0;
  while(num){
    bit=num&1;
    flip=bit^1;
    result=result<<1|flip;
    cout<<result<<endl;
    
    num=num>>1;
  }
  cout<<result;
}