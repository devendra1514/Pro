// 86)WAP to input the following pattern
// 54321
// 4321
// 321
// 21
// 1
#include<stdio.h>
void main()
{
	int i,j,num;
	printf("enter no:");
	scanf("%d",&num);
	for(i=num;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}