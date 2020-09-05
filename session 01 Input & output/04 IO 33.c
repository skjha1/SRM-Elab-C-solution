/*Raj deposit Rupees 10000 into a bank account paying 7% simple interest per year. He left the deposited money in the account for 5 years. Find the interest earned and the amount at the end of those 5 years by Raj? Help him to find the interest and amount resided in bank after 5 years?

STEP 1: Find an interest by using the formula I=P<=i<=t, where I is interest, P is total principal, i is rate of interest per year, and t is total time in years.

STEP 2: Find an amount by using the formula A=P+I, where A stands for Amount

Input and Output Format:

Refer sample input and output for formatting specification.

All float values are displayed correct to 2 decimal places.

All text in bold corresponds to input and the rest corresponds to output.
TEST CASE 1

INPUT
10000
7
5
OUTPUT
Interest=3500.00
Amount=13500.00
TEST CASE 2

INPUT
20000
8
4
OUTPUT
Interest=6400.00
Amount=26400.00

code by shivendra 
*/

#include<stdio.h>
int main ()
{
  int p,r,t;
  float si,a;
  scanf("%d%d%d",&p,&r,&t);
  si=p*r*t/100;
  a=si+p;
  printf("Interest=%.2f\n",si);
  printf("Amount=%.2f",a);
  return 0;
}
