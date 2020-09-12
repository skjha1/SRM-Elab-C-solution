/*A certain grade of steel is graded according to the following conditions.

Hardness must be greater than 50.
Carbon content must be less than 0.7.
Tensile strength must be greater than 5600.
The grades are as follows:

Grade is 10 if all three conditions are met.

Grade is 9 if conditions (i) and (ii) are met.
Grade is 8 if conditions (ii) and (iii) are met.
Grade is 7 if conditions (i) and (iii) are met.
Grade is 6 if only one condition is met.
Grade is 5 if none of three conditions are met.
Write a program, if the user gives values of hardness, carbon content and tensile strength of the steel under consideration and display the grade of the steel.
TEST CASE 1

INPUT
2
53 0.7 5602
55 0 5499
OUTPUT
Grade 10
Grade 9
TEST CASE 2

INPUT
5
49 0.8 5599
55 0.6 5602
45 0 5601
60 0.2 5700
55 0.5 5500
OUTPUT
Grade 5
Grade 10
Grade 8
Grade 10
Grade 9
*/

#include <stdio.h>
int main() {
	int t;
  scanf("%d",&t);
  while (t--)
  {
    int a,b;
    float c;
    scanf("%d %f %d",&a,&c,&b);
    if (a>50&& c<0.7 && b>5600)
      printf("Grade 10\n");
    else if (a>50&& c<0.7)
      printf("Grade 9\n");
   else  if (c<0.7 && b>5600)
      printf("Grade 8\n");
   else  if (a>50 && b>5600)
      printf("Grade 7\n");
    else if (a>50|| c<0.7 || b>5600)
      printf("Grade 6\n");
    else 
      printf("Grade 5\n");
  }
	return 0;
}