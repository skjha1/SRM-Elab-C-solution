/*Help for Raju to Check the given number is Narcissistic Number. It is similar to an Armstrong Number.If the Sum of Digits of a Number raised to the power of the number of digits is equal to the Number/Integer, then it is a Narcissistic Number.
TEST CASE 1

INPUT
153
OUTPUT
Narcissistic Number
TEST CASE 2

INPUT
143
OUTPUT
NOT Narcissistic Number
*/

#include <stdio.h>
int main() {
	int no,temp,sum=0,r;
  scanf("%d",&no);
  temp=no;
    while (no>0)
    {
      r=no%10;
      sum=sum+(r*r*r);
      no=no/10;
    }
  if (sum==temp)
    printf("Narcissistic Number");
  else 
    printf("NOT Narcissistic Number");
	return 0;
}