/* The mathematics teacher has recently taught the formula for computing the distance between 2 points to her students. She gave them an asssignment on calculating the distance between the points. In order to prevent copying, she gave each student a different set of questions. But she found it very difficult to correct all 100 assignments. She seeks your help. Can you please help her out?


Given the vertices of a triangle ABC, determine the sides of the triangle AB, BC and AC. Can you write a C program to calculate the sides?


Input Format

Input consists of 6 integers. The first 2 integers correspond to the x-coordinate and y-coordinate of vertex A. The next 2 integers correspond to the x-coordinate and y-coordinate of vertex B. The next 2 integers correspond to the x-coordinate and y-coordinate of vertex C.


Output Format:

Refer Sample Input and Output for exact formatting specifications.

[All floating point values are displayed correct to 1 decimal place]
TEST CASE 1

INPUT
5 10
10 10
8 4
OUTPUT
Length of side AB is 5.0
Length of side BC is 6.3
Length of side AC is 6.7
TEST CASE 2

INPUT
3 4
4 5
5 6
OUTPUT
Length of side AB is 1.4
Length of side BC is 1.4
Length of side AC is 2.8

code by shivendra 

*/

#include <stdio.h>
#include<math.h>
int main() {
	
  int x1,y1,x2,y2,x3,y3;
  float a,b,c;
  scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
  a=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
  b=((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3));
  c=((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3));
  printf("Length of side AB is %.1f\n",sqrt(a));
  printf("Length of side BC is %.1f\n",sqrt(b));
  printf("Length of side AC is %.1f",sqrt(c));
    return 0;
}