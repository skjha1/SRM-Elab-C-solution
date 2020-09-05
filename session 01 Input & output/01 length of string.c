/*Q. 1: Length of the String
QUESTION DESCRIPTION

Program which will accept string from the user and find the length of the string
TEST CASE 1

INPUT
welcome
OUTPUT
7
TEST CASE 2

INPUT
input
OUTPUT
5
*/

code By shivendra 


#include<stdio.h>
int main ()
{
  int i,len;
  char s[10];
  scanf("%s",s);
  
  for (i=0;s[i]!='\0';i++)
  {
    len++;
  }
  printf("%d",len);
  return 0;
}
  
    