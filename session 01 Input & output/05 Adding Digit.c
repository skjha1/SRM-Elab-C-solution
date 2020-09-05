/* 
QUESTION DESCRIPTION

Lally is very weak in mathematics. So Raju challenges Lally to add each digit of a number, if she adds correctly she will get a chocolate. Will you help her to get a choci?
TEST CASE 1

INPUT
531
OUTPUT
9
TEST CASE 2

INPUT
623
OUTPUT
11
code by Shivendra
*/
#include<stdio.h>
int main ()
{
  int no,rem,sum=0;
  scanf("%d",&no);
  while (no>0)
  {
    rem=no%10;
    sum+=rem;
    no=no/10;
  }
  printf("%d",sum);
  return 0;
}