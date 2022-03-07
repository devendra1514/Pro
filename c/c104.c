// 104)Sum of number in a given range.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int num,sum=0,i;
	printf("enter no to find addition:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum=sum+i;
	}
	printf("sum:%d",sum);
	getch();
}