// 87)WAP to input the following pattern:
// 1
// 13
// 135
// 1357
// 13579
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int i,j,num;
	printf("enter no:");
	scanf("%d",&num);
	for(i=1;i<num*2;i=i+2)
	{
		for(j=1;j<=i;j+=2)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}