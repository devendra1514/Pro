// 58)WAP to print number from 10 to 1.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int num,i;
	printf("enter no:");
	scanf("%d",&num);
	i=num;
	while(i>=1)
	{
		printf("%d",i);
		i=i-1;
		printf("\t");
	}
	getch();
}