// 88)WAP to print the following pattern:
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int i,j,num,no,k;
	printf("enter no:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	no=num-1;
	for(k=1;k<=no;k++)
	{
		for(j=no;j>=k;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}