// 102)Greatest  of two number.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int num1,num2;
	printf("enter the first no:");
	scanf("%d",&num1);
	printf("enter the second no:");
	scanf("%d",&num2);
	if(num1>num2)
		printf("first no is greater than second no");
	else
		printf("second no is greater than first no");
	getch();
}