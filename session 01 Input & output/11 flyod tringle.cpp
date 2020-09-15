/*
Floyds triangle is defined by filling the rows of the triangle with consecutive numbers, starting with the number one in the top left corner.Floyd's triangle is a right-angled triangular array of natural numbers, used in computer science education.Create a c++ program to print Floyd's triangle up to the given n rows.

Input:
Get the integer n as a input.

Output:
Print the Floyd's triangle for the given number.
TEST CASE 1

INPUT
5
OUTPUT
1

23

456

78910

1112131415
TEST CASE 2

INPUT
4
OUTPUT
1

23

456

78910

*/

#include<iostream>
using namespace std;
int main ()
{
  int i,j,no,count=1;
  cin>>no;
  for (i=1;i<=no;i++)
  {
    for (j=1;j<=i;j++)
    {
      cout<<count;
      count++;
    }
    cout<<endl<<endl;
  }
  return 0;
}