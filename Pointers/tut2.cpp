#include <iostream>
using namespace std;

int main()
{
int arr[5] = {1,2,3,4,5};
int *ptr = &arr[0];
cout<<ptr;
cout<<endl;
int *ptr2 = &arr[1];
cout<<ptr2; 
}