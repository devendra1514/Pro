// 54)WAP to input gender of a person & age of person & print the statement by 
// given condition if person is male & his age is greater than 18 then print 
// person is male & he is eligible for voting. But person is male but not age 
// is less than 18 ten print the person is male but his not eligible for voting. 
// Or but if the person is female than same is above condition.
#include<stdio.h>
#include<conio.h>
void main()
{
	char xender;
	int age;
	printf("enter person xender:");
	scanf("%c",&xender);
	printf("enter person age:");
	scanf("%d",&age);
	if(xender=='m'||xender=='M')
	{
		if(age>=18)
			printf("person is male and he is eligible for vote");

		else
			printf("person is male but he is not eligible for vote");

	}
	else if(xender=='f'||xender=='F')
	{
		if(age>=10)
			printf("person is female and she is eligible for vote");

		else
			printf("person is female and she is not eligible gor vote");
	}
	else
		printf("wrong expression");
	getch();
}