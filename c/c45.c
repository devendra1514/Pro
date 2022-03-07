// 45)WAP to input any character and find out it alphabet or not.
#include<stdio.h>
void main()
{
	char ch;
	printf("enter any characters:");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
	{
		printf("alphabet");
	}
	else
	{
		printf("not a alphabet");
	}
}