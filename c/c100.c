// 100)WAP to create an array of 1-D and input any 20 number and print 
// the addition or even or odd number.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int even=0,odd=0,num[20];
	printf("enter 20 different no:");
	for(int i=0;i<=20-1;i++)
	{
		scanf("%d",&num[i]);
	}
	for(int i=0;i<=20-1;i++)
	{
		if(num[i]%2==0)
			even=even+num[i];
		else
			odd=odd+num[i];
	}
	printf("sum of even no:%d",even);
	printf("sum of odd no:%d",odd);
	getch();
}