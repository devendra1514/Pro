// 77)WAP to print the following pattern and print its sum:
// 1+11+111+1111+1111
#include<stdio.h>
void main()
{
	long int num=1,sum=0,no=1,i;
	printf("enter no:");
	scanf("%ld",&num);
	for(i=1;i<=num;i++)
	{
		printf("%ld+",no);
		sum=sum+no;
		no=(no*10)+1;
	}
	printf("\nsum:%ld",sum);
}

