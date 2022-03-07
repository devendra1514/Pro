// 78)WAP to print the following pattern 
// *
// **
// ***
// ****
// *****
#include <stdio.h>
void main()
{
	int i, j, num;
	printf("enter no to print star:");
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}