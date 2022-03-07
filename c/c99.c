// 99)WAO to input 10 element in a array and print out its addition.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int num[10],max=0;
	printf("enter any 10 diffrent:");
	for(int i=0;i<=10-1;i++)
	{
		scanf("%d",&num[i]);
	}
	for(int i=0;i<=10-1;i++)
	{
		printf("\n%d",num[i]);
		if(num[i]>max)
			max=num[i];
	}
	printf("\nmaximum:%d",max);
	getch();
}