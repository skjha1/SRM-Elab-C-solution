/*Helan had to find a number that must be the sum of two prime numbers. Help him to write a C Program to Check Whether a Number can be Expressed as Sum of Two Prime Numbers
TEST CASE 1

INPUT
35
OUTPUT
NOT
TEST CASE 2

INPUT
34
OUTPUT
34 = 3 + 31
34 = 5 + 29
34 = 11 + 23
34 = 17 + 17

*/
#include <stdio.h>
int prime (int no);
int prime(int n) /* Function to check prime number */
{
    int i, flag=1;
    for(i=2; i<=n/2; ++i)
        if(n%i==0)
            flag=0;
    return flag;
}
int main() 
{
  int no,i,flag=0;
  scanf("%d",&no);
  for (i=2;i<=no/2;++i)
  {
    if (prime (i)!=0)
    {
      if (prime(no-i)!=0)
      {
        printf("%d = %d + %d\n",no,i,no-i);
        flag=1;
      }
    }
  }
  if (flag==0)
  {
    printf("NOT");
  }
	return 0;
}

  
