#include <iostream>
using namespace std;

int main(){
  char ch;
  cin>>ch;
  if(ch>='A' && ch<='Z')cout<<"Upper Case Character";
  else if(ch>='a' && ch<='z')cout<<"Lower case Character";
  else if(ch>='0'  && ch<='9')cout<<"Digit";
  else cout<<"Special Character";
}