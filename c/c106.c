// 106)WAP to print table of a number enter by user using (goto) keyword.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	start:
	int num,i=1;
	char ch;
	printf("enter no to find its table :");
	scanf("%d",&num);
	while(i<=10)
	{
		printf("%d",num*i);
		i=i+1;
		printf("\n");
	}
	fflush(stdin);
	printf("enter e to exit  and  and  c to continue: ");
	scanf("%c",&ch);
	if(ch=='e')
	{
		printf("enter any key to exit:");
		goto end;
	}
	else if(ch=='c')
		goto start;
	else
	{
		printf("wrong input");
		goto end;
	}

	end:
	getch();
}