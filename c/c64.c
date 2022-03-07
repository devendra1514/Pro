// 64)WAP to input following no.
// 1, 4, 9, 16, 25, 36, 49, 64, 81, 100
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int i=1;
	while(i<=10)
	{
		printf("%d",i*i);
		printf("\t");
		i=i+1;
	}
	getch();
}