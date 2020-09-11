/*

Suman and Sugan are playing together.The game is they have to arrange number of similar color balls in same row.The arrangement of balls should be in sequential order
TEST CASE 1

INPUT
3
OUTPUT
1 
1 2 
1 2 3
TEST CASE 2

INPUT
4
OUTPUT
1 
1 2 
1 2 3 
1 2 3 4
*/
#include <stdio.h>
int main() {
  int j,i,no;
  scanf("%d",&no);
  for (i=1;i<=no;i++)
    {
      for (j=1;j<=i;j++)
      {
        printf("%d ",j);
      }
    printf("\n");
      
   }
    

  
	return 0;
}