/*Program which will accept string from the user and find the length of the string
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
Ans :
*/

#include <stdio.h>
int main()
{
char s[1000], i;
  scanf("%s", s);
  for(i= 0 ; s[i] !='\0' ; ++i);
  {
    printf(" %d",i);
  }
	return 0;
}