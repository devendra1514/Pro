// 98)WAO to input 10 element in a array and print out its addition.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int sum=0,num[10];
	printf("enter any 10 different no:");
	for(int i=0;i<=10-1;i++)
	{
		scanf("%d",&num[i]);
		sum=sum+num[i];
	}
	printf("addition of 10 element enter by you:%d",sum);
	getch();
}