// 55)WAP to input weak day digit and print its equivalent day in a character 
// using if… else if statement.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int day;
	printf("enter any weak day no:");
	scanf("%d",&day);
	if(day==1)
		printf("sunday");
	else if(day==2)
		printf("monday");
	else if(day==3)
		printf("tuesday");
	else if(day==4)
		printf("wednesday");
	else if(day==5)
		printf("thursday");
	else if(day==6)
		printf("friday");
	else if(day==7)
		printf("saturday");
	else
		printf("wrong day");
	getch();
}