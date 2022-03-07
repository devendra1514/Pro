// WAP to input any no and find out the number is positive or 
// negative using conditional (ternary) operator.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int num;
	printf("enter first no:");
	scanf("%d",&num);
	(num>0)?printf("positive"):printf("negative");
	getch();
}