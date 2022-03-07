// 112)WAP to print the table of number enter by user using simple program.  
// 5*1=5
// 5*2=10
// 5*3=15
// 5*4=20
// 5*5=25
// 5*6=30
// 5*7=35
// 5*8=40
// 5*9=45
// 5*10=50
#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("enter the number you want multiplication table:\n");
	scanf("%d",&num);
	printf("table of %d:",num);
	printf("\n%d*1=%d",num,num*1);
	printf("\n%d*2=%d",num,num*2);
	printf("\n%d*3=%d",num,num*3);
	printf("\n%d*4=%d",num,num*4);
	printf("\n%d*5=%d",num,num*5);
	printf("\n%d*6=%d",num,num*6);
	printf("\n%d*7=%d",num,num*7);
	printf("\n%d*8=%d",num,num*8);
	printf("\n%d*9=%d",num,num*9);
	printf("\n%d*10=%d",num,num*10);
	getch();
}