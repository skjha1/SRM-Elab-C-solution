/*Write a program to find the mode of a given list of integers. Mode of a number is defined as the number which is most frequently occurred.
For example:

L = {1,2,2,3} // Here mode is 2(most frequently occurred)

It is possible that multiple answers are possible for a list. In that case print all possible answers in non-increasing order.

Input:
First Line of input contains an integer t representing the number of test cases, Where first line of each test case has an integers N - number of integers in list, Next line contains N integers.

Output:
print all the possible modes in non-increasing order.

Constraints:
1<=t<=100
1<=N<100000
1<=a[i]<=1000000
TEST CASE 1

INPUT
3
5
1 1 1 1 2
7
2 2 3 3 4 4 4
10
1 1 1 1 1 1 4 4 4 4
OUTPUT
1 4 1
TEST CASE 2

INPUT
2
3
1 1 2
7
3 3 4 4 4 4 5
OUTPUT
1 4
*/

#include <stdio.h>
int main()
{	int testCase;
 	scanf("%d",&testCase);
 	while(testCase--){
	 int n,i,hash[10]={0};
      scanf("%d",&n);
      int array[n];
      //hash table
      for(i=0;i<n;i++){
      	scanf("%d",&array[i]);
        hash[array[i]]++;
       }
      //find the max element in the hash array and print it's index
     int max=0,c;
      for(i=0;i<10;i++){
			 	if(max<hash[i]){
                  	max=hash[i];
                	c=i;	  	
                }
			
      }
		printf("%d ",c);  
   
    }
      
	return 0;
}