// WAP to input all even no from 1 to 100 but if the number 
// is 20 scan than the loop will be terminate.
#include<stdio.h>
void main()
{
	int i;
	for(i=0;i<=100;i=i+2)
	{
		printf("%d\n",i);
		if(i==20)
		{
			break;
		}
	}
}