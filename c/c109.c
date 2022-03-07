/* WAP to find input year is leap year or not. */
#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	printf("enter year to find it leap year or not:\n");
	scanf("%d",&year);
	if(year%4==0)
		printf("%d is leap year",year);
	else
		printf("%d is not a leap year",year);
	getch();
}