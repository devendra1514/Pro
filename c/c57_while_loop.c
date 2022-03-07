// 57)WAP to print the number from 1 to 10.
#include <stdio.h>
#include <conio.h>
void main()
{

	int num, i = 1;
	printf("enter no:");
	scanf("%d", &num);
	while (i <= num)
	{
		printf("%d", i);
		i = i + 1;
		printf("\t");
	}
	getch();
}
