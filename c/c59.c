// 59)WAP to print all even number from 1 to 100.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int i=2;
	while(i<=100)
	{
		printf("%d",i);
		i=i+2;
		printf("\t");
	}
	getch();
}