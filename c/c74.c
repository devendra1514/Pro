// 74)WAP to input any 10 different number & find out summation of even & odd number.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int num,add=0,sum=0,i=1;
	printf("enter any 10 different no:");
	while(i<=10)
	{
		scanf("%d",&num);
		if(num%2==0)
		{
			add=add+num;
		}
		else
		{
			sum=sum+num;
		}
		i=i+1;
	}
	printf("sum of even no:%d",add);
	printf("\nsum of odd no:%d",sum);
	getch();
}