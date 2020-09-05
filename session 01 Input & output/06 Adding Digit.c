/*
Gowri asks Reshmi to write a code to read n numbers (Xi) from the user and print out their average and standard deviation.

Convert all the final answers to integer.
TEST CASE 1

INPUT
5
600 470 170 430 300
OUTPUT
Mean=394
SD=147
TEST CASE 2

INPUT

6
75 83 96 100 121 125
OUTPUT
Mean=100
SD=18
code by shivendra

*/

#include <stdio.h>
#include<math.h>
int main() {
	int a[10],b[10],mean,sd,i,no,sum=0,sum2=0,temp;
  scanf("%d",&no);
  for (i=0;i<no;i++){
    scanf("%d",&a[i]);
  sum+=a[i];}
  mean=sum/no;
  for(i=0;i<no;i++){
    	temp=a[i]-mean;
      	b[i]=temp*temp;
      	sum2+=b[i];}
    sd=sqrt(sum2/no);
    printf("Mean=%d\n",mean);
    printf("SD=%d",sd);
  
	return 0;
}