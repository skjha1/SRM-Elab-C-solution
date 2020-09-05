/*Sneha got a single integer as an input , and her task to perform all assignment operations in with the given input . Let us help her to solve with the following conditions met,

To Perform ,

Assign an input the new the variable and display
Using addition assignment operation(c+=3;c=c+3)
Using Subtraction assignment operation
Using division assignment operation
Using modulus assignment operation
Input and Output Format:

Refer sample input and output for formatting specification.

All float values are displayed correct to 2 decimal places.

All text in bold corresponds to input and the rest corresponds to output.

TEST CASE 1

INPUT
3
OUTPUT
c=3
c+=6
c-=3
c*=9
c/=3
c%=0
TEST CASE 2

INPUT
7
OUTPUT
c=7
c+=14
c-=7
c*=49
c/=7
c%=0
*  code by shivendra/


#include <stdio.h>
int main  ()
{
  int c;
  scanf("%d",&c);
  printf("c=%d\n",c);
  printf("c+=%d\n",c+c);
  printf("c-=%d\n",c+c-c);
  printf("c*=%d\n",c*c);
  printf("c/=%d\n",c*c/c);
  printf("c%c=%d",'%',c%c);
return 0;
}
  