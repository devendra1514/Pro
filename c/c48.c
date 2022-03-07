// 48)WAP to input any number and to check the number is positive or negative using single if.
#include<stdio.h>

void main()
{
	int num;
	printf("enter any number:");
	scanf("%d",&num);
	if(num>=0)
		printf("no is positive");
	if(num<0)
		printf("no is negative");
}