/*C Program to Count number of digits in number without using mod operator
TEST CASE 1

INPUT
1234
OUTPUT
Number of Digits:4
TEST CASE 2

INPUT
874527
OUTPUT
Number of Digits:6
*/
#include <stdio.h>
int main() {
	int no,count=0;
  scanf("%d",&no);
  do
  {
    count++;
    no=no/10;
  }while (no!=0);
  printf("Number of Digits:%d",count);
	return 0;
}