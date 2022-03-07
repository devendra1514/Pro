// 83)WAP to summation of is pattern
// (1)+(1+2)+(1+2+3)+(1+2+3+4)+(1+2+3+4+5)
#include <stdio.h>
#include <conio.h>
void main()
{
	int i, j, num, sum = 0;
	printf("enter any no:");
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d+", j);
			sum = sum + j;
		}
	}
	printf("\n");
	printf("sum:%d", sum);
}