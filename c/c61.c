// 61)WAP to input start number and stop number print the number to start to stop.

#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int start,stop,i;
	printf("enter start no:");
	scanf("%d",&start);
	printf("enter stop no:");
	scanf("%d",&stop);
	if(start<stop)
	{
		while(start<=stop)
		{
			printf("%d",start);
			start=start+1;
			printf("\t");
		}
	}
	else if(start>stop)
	{
		while(start>=stop)
		{
			printf("%d",start);
			start=start-1;
			printf("\t");
		}
	}
	else
		printf("%d",start);
	getch();
}