// WAP to print A to Z.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	char ch='A';
	printf("All characters:");
	printf("\n");
	while(ch<='Z')
	{
		printf("%c",ch);
		ch=ch+1;
		printf("\t");
	}
	getch();
}