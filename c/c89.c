// 89)WAP to input weak day number and print its equivalent day in a characters
#include<stdio.h>

void main()
{
	int num;
	printf("enter eny weak day:");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("sunday");
			break;
		case 2:
			printf("monday");
			break;
		case 3:
			printf("tuesday");
			break;
		case 4:
			printf("wednesday");
			break;
		case 5:
			printf("thursday");
			break;
		case 6:
			printf("friday");
			break;
		case 7:
			printf("saturday");
			break;
		default:
			printf("wrong weak day");
	}
	getch();
}