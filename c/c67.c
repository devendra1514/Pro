// 67)WAP to print the following pattern
// 1  2  3  4  5
// 6
// 7
// 8
// 9
// 10
// 11 12 13 14 15
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int i=1;
	while(i<=15)
	{
		if(i<=5)
		{
			printf("%d",i);
			printf("\t");
		}
		else if(i>=6&&i<=10)
		{
			printf("\n");
			printf("%d",i);
		}
		else
		{
			printf("%d",i);
			printf("\t",i);
		}
		i=i+1;
	}
	getch();
}
