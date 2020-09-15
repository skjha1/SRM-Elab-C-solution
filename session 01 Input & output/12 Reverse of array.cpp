/*Create a C++ program to print a given array in reverse order.First integer represents the size of array.
TEST CASE 1

INPUT
5
9 8 5 4 2
OUTPUT
2 4 5 8 9
TEST CASE 2

INPUT
13
6 1 2 3 4 5 6 6 5 4 3 2 1
OUTPUT
1 2 3 4 5 6 6 5 4 3 2 1 6
*/
// Iterative C++ program to reverse an array
#include <bits/stdc++.h>
using namespace std;

/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start]; 
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	} 
}	 

/* Utility function to print an array */
void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";

cout << endl;
} 

/* Driver function to test above functions */
int main() 
{
  int no;
  int arr[10];
  cin>>no;
  for (int i=0;i<no;i++)
  {
    cin>>arr[i];
  }
  // To print original array 
	//printArray(arr, no);
	
	// Function calling
	rvereseArray(arr, 0, no-1);
	
	//cout << "Reversed array is" << endl;
	
	// To print the Reversed array
	printArray(arr, no);
	
	return 0;
}
