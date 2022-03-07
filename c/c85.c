// 85)WAP to print following pattern:
// 1
// 23
// 456
// 78910
#include <stdio.h>
void main()
{
	int i, j, num, k = 1;
	printf("enter no:\n");
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d", k++);
		}
		printf("\n");
	}
}