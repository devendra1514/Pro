// 44)WAP to input any character and find its is vowel or consonant.
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("enter characters:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("vowel");
	}
	else
	{
		printf("consonent");
	}
}