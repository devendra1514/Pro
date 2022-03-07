// 66)WAP to input any number and find out its factorial.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int num,fact=1;
	printf("enter no:");
	scanf("%d",&num);
	while(num>=1)
	{
		fact=fact*num;
		num=num-1;
	}
	printf("factorial:%d",fact);
	getch();
}