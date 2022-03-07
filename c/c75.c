// 75)WAP to input any 10 different number and find minimum number.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int num,min,a,i=1;
	printf("enter any 10 different no:\n");
	while(i<=10)
	{
		scanf("%d",&num);
		if(i==1)
			min=num;
		if(num<min)
			min=num;
		i=i+1;
	}
	printf("minimum:%d",min);
	getch();
}