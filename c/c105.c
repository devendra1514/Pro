// 105)WAP to print “Happy” user define times without using loop.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int i=1;
	jump:
	printf("\nHappy Birthday");
	i=i+1;
	if(i==6)
		goto end;
	goto jump;
	end:
	getch();
}