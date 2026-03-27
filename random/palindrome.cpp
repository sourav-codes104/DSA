#include <iostream>
using namespace std;

int main(){
  string str = "abca";
  int i = 0, j = str.size()-1;
  bool is_palindrome = true;
  while (i<j)
  {
    if (str[i]!=str[j])
    {
     is_palindrome = false;
    }
    i++;
    j--;
    
  }
if (is_palindrome)
{
  cout<<"Palindrome String";
}
else{
  cout<<"Nope";
}


  
}