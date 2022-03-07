// 68)WAP to input any five digit number & print it reverse order.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	long int num,rev=0,temp;
	printf("enter no:");
	scanf("%ld",&num);
	while(num!=0)
	{
		temp=num%10;
		rev=rev*10+temp;
		num=num/10;
	}
	printf("reverse:%ld",rev);
	getch();
}