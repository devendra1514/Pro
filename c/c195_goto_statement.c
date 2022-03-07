// 195)Use goto statement.
#include<stdio.h>
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
}