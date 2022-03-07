// 70)WAP to input any digit and print multiplication table with a table formula.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int num,i=1;
	printf("enter no:");
	scanf("%d",&num);
	while(i<=10)
	{
		printf("%d*%d=%d",num,i,num*i);
		i=i+1;
		printf("\n");
	}
	getch();
}