// 94)WAP to input any digit & print to its equivalent word.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int num;
	printf("enter the no:");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("one");
			break;
		case 2:
			printf("two");
			break;
		case 3:
			printf("three");
			break;
		case 4:
			printf("four");
			break;
		case 5:
			printf("five");
			break;
		case 6:
			printf("six");
			break;
		case 7:
			printf("seven");
			break;
		case 8:
			printf("eight");
			break;
		case 9:
			printf("nine");
			break;
		default:
			printf("no is high");
	}
	getch();
}