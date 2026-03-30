#include <iostream>
using namespace std;

//MACRO definition (Object-like)
#define PI 3.14

//MACRO definition (Chain-like)
#define sourav singh
#define singh "Hello world"

//MACRO definition (Multi-Line)
#define ELE 1,\
            2,\
            3,\
            4

//MACRO definition (Function)
#define min(a,b) (a<b ? a : b)

// int main(){
//   double area = 0, radius = 0;
//   cout<<"Enter the radius of a circle: ";
//   cin>>radius;

//   area = PI*radius*radius;

//   cout<<area;

// }

// int main(){
//   cout<<"Testing the chain macro"<<endl;
//   cout<<sourav<<endl;
// }


// int main(){
//   cout<<"Testing the multi-line macro"<<endl;
//   int arr[] = { ELE };
//   for (int i = 0; i < 3; i++)
//   {
//     cout<<arr[i]<<" ";
//   }
// }

int main(){
  cout<<"Testing the function macro"<<endl;
  int a = 12 , b = 15;
  cout<<"The minimum between a and b is: "<<min(a,b);
}
