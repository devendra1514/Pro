// 65)WAP to print of table of any digit input by user.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int num,i=1;
	printf("enter no:");
	scanf("%d",&num);
	while(i<=10)
	{
		printf("%d",num*i);
		i=i+1;
		printf("\n");
	}
	getch();
}