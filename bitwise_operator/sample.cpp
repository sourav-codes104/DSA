#include <iostream>
using namespace std;

int main(){
  int a = 5;
  int b = 6;
  /*
  "Bitwise Operators"
  1.and(&)
  Ex: a = 5; b = 6;
  In binary a = 00000000 00000000 00000000 00000101
            b = 00000000 00000000 00000000 00000110
        a & b = 00000000 00000000 00000000 00000100
        ans   = 4(Decimal)
  */
  cout<<"a&b:"<<(a&b)<<endl;
   /*
  "Bitwise Operators"
  2.or(|)
  Ex: a = 5; b = 6;
  In binary a = 00000000 00000000 00000000 00000101
            b = 00000000 00000000 00000000 00000110
        a & b = 00000000 00000000 00000000 00000111
        ans   = 7(Decimal)
  */
  cout<<"a|b:"<<(a|b)<<endl;
     /*
  "Bitwise Operators"
  3.not(~)
  Ex: a = 5;
  In binary a = 00000000 00000000 00000000 00000101
           !a = 11111111 11111111 11111111 11111010
           !a = 00000000 00000000 00000000 00000101
           +1 = 00000000 00000000 00000000 00000110                                 
        ans   = 6(Decimal)
  */
  cout<<"~a:"<<(~a)<<endl;
   /*
  "Bitwise Operators"
  4.xor(^)
  Ex: a = 5; b = 6;
  In binary a = 00000000 00000000 00000000 00000101
            b = 00000000 00000000 00000000 00000110
        a ^ b = 00000000 00000000 00000000 00000011
        ans   = 3(Decimal)
  */
  cout<<"a^b:"<<(a^b)<<endl;
 /*
  "Bitwise Operators"
  5.left shift(<<)
  Ex: a = 5<<2;
  In binary a = 00000000 00000000 00000000 00000101
         a<<2 = 00000000 00000000 00000000 00010100
          ans = 20(Decimal)
  */
  cout<<"a<<2:"<<(a<<2)<<endl;
 /*
  "Bitwise Operators"
  6.right shift(^)
  Ex: a = 5>>2;
  In binary a = 00000000 00000000 00000000 00000101
         a>>2 = 00000000 00000000 00000000 00000001
        ans   = 1(Decimal)
  */
  cout<<"a>>2:"<<(a>>2)<<endl;
  
}