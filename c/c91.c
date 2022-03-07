// 91)WAP to input any mathematical symbol & calculate equivalent operation to given symbol.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int n1,n2;
	char symbol;

	printf("enter first no:");
	scanf("%d",&n1);
	printf("enter second no:");
	scanf("%d",&n2);
	fflush(stdin);
	printf("enter mathimaticaly symbol");
	scanf("%c",&symbol);


	switch(symbol)
	{
		case '+':
			printf("sum:%d",n1+n2);
			break;
		case '-':
			printf("subsraction:%d",n1-n2);
			break;
		case '*':
			printf("multiplication:%d",n1*n2);
			break;
		case '/':
			printf("divide:%d",n1/n2);
			break;
		default:
			printf("wrong symbol");
	}
	getch();
}