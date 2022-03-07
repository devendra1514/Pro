// 69)WAP to display a cube of a number upto given an integer.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int num,i=1;
	printf("enter no:");
	scanf("%d",&num);

	while(i<=num)
	{
		printf("\n%d",i*i*i);
		i++;
	}
	getch();
}