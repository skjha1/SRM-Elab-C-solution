/*
Return the count of positives numbers and the sum of negative numbers for the given array
TEST CASE 1

INPUT
15
1 2 3 4 5 6 7 8 9 10 -11 -12 -13 -14 -15
OUTPUT
Positive Count=10
Negative Sum=-65
TEST CASE 2

INPUT
5
1 2 3 4 -4
OUTPUT
Positive Count=4
Negative Sum=-4
*/
#include<stdio.h>
int main ()
{
  int a[100],i,no,pcount=0,nsum=0;
  scanf("%d",&no);
  for (i=0;i<no;i++)
  {
    scanf("%d",&a[i]);
    {
      if (a[i]>=0)
      {
        pcount++;
      }
      else 
        nsum+=a[i];
    }
  }
  printf("Positive Count=%d",pcount);
  printf("\nNegative Sum=%d",nsum);
  return 0;
}

        
      
        