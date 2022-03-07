// 62)WAP to print the number in following pattern:
// 1
// 2
// 3
// 4
// 5
// 6 7 8 9 10
// Using while loop.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int i=1;
	while(i<=10)
	{
		if(i<=5)
		{
			printf("%d",i);
			printf("\n");
		}
		else
		{
			printf("%d",i);
			printf("\t");
		}
		i=i+1;
	}
	getch();
}