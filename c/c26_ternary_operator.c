// 26)WAP to input any two number and which no is greater using conditional 
// (ternary) operator.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int num1,num2;
	printf("enter first no:");
	scanf("%d",&num1);
	printf("enter second no:");
	scanf("%d",&num2);
	(num1>num2)?printf("num1 is greater than num2"):printf("num2 is greater than num1");
	getch();
}