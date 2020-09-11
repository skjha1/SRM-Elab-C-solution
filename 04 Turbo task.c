/*A task is given to 3 persons to complete it within a particular time. If the person exceeds the time limit he will be disqualified. Only those who complete it within the given time limit is qualified. Among the qualified persons, the person who completes the task first will be rewarded.

Write a program to find the person who is rewarded.


Input Format:

First input corresponds to the Time limit for the task in hours. Second,Third and Fourth Inputs correspond to the number of hours Taken by the first , second and third persons respectively to complete the task.

Output Format:

Display the person who Completes first.

[All text in bold corresponds to input and the rest corresponds to output]
TEST CASE 1

INPUT
10
5
6
4
OUTPUT
Third person wins
TEST CASE 2

INPUT
4
9
6
7
OUTPUT
No person wins
*/

#include<stdio.h>
int main ()
{
  int time,f,s,t;
  scanf("%d%d%d%d",&time,&f,&s,&t);
  if (time>f && f<s && f<t)
    printf("first wins");
  else if (time >s && s<f && s<t )
    printf("second wins");
  else if (time >t && t<f && t<s)
    printf("third wins");
  else 
    printf("No one wins");
  return 0;
}