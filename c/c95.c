// 95)WAP to print following:
// 5
// 54
// 543
// 5432
// 54321
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int num,i,j;
	printf("enter no:");
	scanf("%d",&num);
	for(i=num;i>=1;i--)
	{
		for(j=num;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}