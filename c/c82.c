// 82)WAP to print and calculation summation of given series:
// (1^2)+(2^2)+(3^2)+(4^2)+(5^2)………n term
#include<stdio.h>
void main()
{
	int i,j,num,sum=0;
	printf("enter no:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum=sum+(i*i);
	}
	printf("sum:%d",sum);
}