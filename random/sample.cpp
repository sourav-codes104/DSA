
#include <iostream>
using namespace std;

int main(){
  // cout<<"Hello World";
  // int b = 'a';
  // char c = 65;
  // cout<<b<<endl;
  // cout<<c;

  /* int a = 'c';
  char b = 67;
  cout<<a+b<<endl;

  double d = 456.78;
  cout<<a+int(d);
  */

 int arr[8] = {1,2,3,4,6,7,8};
 int sum = 0;
 for (int i = 0; i < 8; i++)
 {
  sum += arr[i];
 }

 int brr[8] = {3,4,5,6,8,10};
 int sum2 = 0;
for (int i = 0; i < 8; i++)
 {
 sum2 += brr[i];
 }
if(sum > sum2)cout<<"Array arr has max sum"<<":"<<sum<<endl;
else cout<<"Array brr has max sum"<<":"<<sum<<endl;

}