/*
QUESTION DESCRIPTION

Anjali is naughty girl. She always used to challenge others. She challenges Swathi to Count number of digits in a given number without using mod operator.Help swathi to do this work
TEST CASE 1

INPUT
4523
OUTPUT
4
TEST CASE 2

INPUT
852
OUTPUT
3
code by Shivendra
*/
#include <stdio.h>
int main() {
  int no,count =0,i;
  
  scanf("%d",&no);
  for (i=0;i<no;i++)
  {
    count++;
    no=no/10;
  }
  printf("%d",count );
  return 0;
  
  
}