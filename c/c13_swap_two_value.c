// 13)WAP to swapping of two number without using third variable.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
	printf("enter first no n1:");
	scanf("%d",&n1);
	printf("enter second no n2:");
	scanf("%d",&n2);
	printf("before swapping the no:\nn1=%d\nn2=%d",n1,n2);
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	printf("\nafter swapping the no:\nn1=%d\nn2=%d",n1,n2);
	getch();
}