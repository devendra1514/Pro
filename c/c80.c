// 80)WAP to input any number & find its table up to given an integer.
#include<stdio.h>
void main()
{
	int num,i,j;
	printf("enter no:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d",i*j);
			printf("\t");
		}
		printf("\n");
	}
}