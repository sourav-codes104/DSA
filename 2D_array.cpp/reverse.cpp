#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(){
int row, col;
cout<<"Enter the no of rows and columns: ";
cin>>row>>col;
vector<vector<int>>grid(row,vector<int>(col));


for (int i = 0; i < row; i++)
{
  for (int j = 0; j < col; j++)
  {
    cin>>grid[i][j];
  }
  
}

for (int i = 0; i < row; i++)
{
  for (int j = 0; j < col; j++)
  {
    cout<<grid[i][j]<<" ";
  }
  cout<<endl;
}

int total = row*col;
for (int i = 0; i < total/2; i++)
{
  int r1 = i/col;
  int c1 = i%col;

  int r2 = (total-1)/col;
  int c2 = (total-1)%col;

  swap(grid[r1][c1], grid[r2][c2]);
}

for (int i = 0; i < row; i++)
{
  for (int j = 0; j < col; j++)
  {
    cout<<grid[i][j]<<" ";
  }
  cout<<endl;
}





}