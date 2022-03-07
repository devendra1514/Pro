// 63)WAP to print following pattern 
// 1 2 3 4 5 
// 6
// 7
// 8
// 9
// 10
// Using loop.
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
			printf("\t");
		}
		else
		{
			printf("%d",i);
			printf("\n");
		}
		i=i+1;
	}
	getch();
}