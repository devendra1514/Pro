// 81)WAP to print following pattern 
// 1
// 12
// 123
// 1234
// 12345
#include <stdio.h>
void main()
{
	int num, i, j;
	printf("enter any no:");
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}