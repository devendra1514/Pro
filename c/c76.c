// 76)WAP to input base value & power value and print answer.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int base,power,calcu=1;
	printf("enter base value:");
	scanf("%d",&base);
	printf("enter power value:");
	scanf("%d",&power);
	while(power>=1)
	{
		calcu=calcu*base;
		power--;
	}
	printf("answer:%d",calcu);
	getch();
}