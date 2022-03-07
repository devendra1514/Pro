// 47)WAP a program to input your age and you are eligible for voting.
#include <stdio.h>
void main()
{
	int age;
	printf("enter your age:");
	scanf("%d", &age);
	if (age >= 18)
		printf("you are eligible for vote");
	else
		printf("you are not eligible for vote");
}