// 46)WAP to input any character and it is uppercase & lower case & number & symbol.
#include <stdio.h>
void main()
{
	char ch;
	printf("enter charaters:");
	scanf("%c", &ch);
	if (ch >= 'a' && ch <= 'z')
		printf("lower case");

	else if (ch >= 'A' && ch <= 'Z')
		printf("upper case");

	else if (ch >= 0)
		printf("number");

	else
		printf("special symbol");
}