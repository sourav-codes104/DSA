#include <iostream>
// #include <string>
using namespace std;

int main(){
  string word = "aaabbbcc";
  int i = 0, j = 1;
  int count=1;
  string ans;
 
  while (i<word.size())
  {
    if (j < word.size() && word[i]==word[j] )
    {
      count++;
      j++;
    }
    else{
    cout<<count<<endl;
    ans+=to_string(count);
    ans+=word[i];
    count=1;
    i=j;
    j++;
    }

    
  }
  cout<<"Answer : "<<ans;

}