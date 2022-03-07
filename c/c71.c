// 71)WAP to input any ten number and find out maximum number.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int num,max=0,i=1;
	printf("enter any 10 different no:");
	while(i<=10)
	{
		scanf("%d",&num);
		if(num>=max)
		{
			max=num;
		}
		i++;
	}
	printf("maximum:%d",max);
	getch();
}