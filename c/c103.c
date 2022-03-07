// 103)Greatest of three number.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int num,max=0,i;
	printf("enter 3 different no:");
	for(i=1;i<=3;i++)
	{
		scanf("%d",&num);
		if(num>max)
			max=num;
	}
	printf("greatest value:%d",max);
	getch();
}