/* 
Solve C Questions
QUESTION
SESSION: Input & Ouput
Q. 9: Find and print
QUESTION DESCRIPTION

Shiv and Luv are friends. Luv give a series to shiv and ask him to write a code to find the print the following series

2, 5, 10, 17 up to nth term.

Input:
Input should contain the value of the limit n
Output:
It should print the above series upto n limit

Guess the series
TEST CASE 1

INPUT
4
OUTPUT
2 5 10 17
TEST CASE 2

INPUT
7
OUTPUT
2 5 10 17 26 37 50

code by shivendra 

*/
#include <stdio.h>
int main() {
	int no,i,c;
  scanf("%d",&no);
  for(i=1;i<=no;i++){
    c=i*i+1;
    printf("%d ",c);
  }
	return 0;
}
