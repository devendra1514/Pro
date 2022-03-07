// 96)WAP to create & array of 5 element and initialize within different element 
// and character addition of first and last variable.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int add,num[5]={10,20,30,40,50};
	printf("array of five element:");
	for(int i=0;i<=5-1;i++)
	{
		printf("\n%d",num[i]);
	}
	printf("\naddition of first and last element:%d",num[0]+num[4]);

	getch();
}