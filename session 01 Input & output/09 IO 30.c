/*
Write a program to read the address of a user. Display the result by breaking it into multiple lines

Input and Output Format:

Refer sample input and output for formatting specification.

All float values are displayed correct to 2 decimal places.

All text in bold corresponds to input and the rest corresponds to output
TEST CASE 1

INPUT
3489
SRMChennai
603203
OUTPUT
Address
House Number:3489
Area:SRMChennai
Pin Code:603203
TEST CASE 2

INPUT
1234
SRMDELHI
123456
OUTPUT
Address
House Number:1234
Area:SRMDELHI
Pin Code:123456

code By shivendra 

*/
#include<stdio.h>
int main() {
int HN,PIN;
char CLG[20];
scanf("%d %s %d",&HN,CLG,&PIN);
printf("Address\n");
printf("House Number:%d\nArea:%s\nPin Code:%d",HN,CLG,PIN);
return 0;
}
