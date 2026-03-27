#include <iostream>
using namespace std;

int main()
{
  int first_term = 0;
  int second_term = 1;
  int num_of_terms;
  cout<<"Enter the number of terms: ";
  cin>>num_of_terms;
  int sum = 0;
  cout<<first_term<<" "<<second_term<<" ";
  for (int i = 2; i < num_of_terms; i++)
  {
    sum = first_term+second_term;
    cout<<sum<<" ";
    first_term = second_term;
    second_term = sum;
  }
  
}