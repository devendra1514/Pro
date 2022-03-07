// 93)WAP menu raven program to following format:
// 1.Area of circle
// 2.Square root
// 3.Table
// 4.Factorial
// 5.Exit.
// Enter your choice.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{        
	jump:
	int num;
	printf("\n\n1. area of circlr");
	printf("\n2. square root");
	printf("\n3. table");
	printf("\n4. factorial");
	printf("\n5. exit");
	printf("\n\nenter your choice:");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
		{
			int r;
			float area;
			printf("enter radius of circle:");
			scanf("%d",&r);
			area=3.14*r*r;
			printf("area:%f",area);
			break;
		}
		case 2:
		{
			int num;
			float sq;
			printf("enter no:");
			scanf("%d",&num);
			sq=sqrt(num);
			printf("square root:%f",sq);
			break;
		}
		case 3:
		{
			int num,i;
			printf("enter no:");
			scanf("%d",&num);
			for(i=1;i<=10;i++)
			{
				printf("\n%d",num*i);
			}
			break;
		}
		case 4:
		{
			int fact=1,num;
			printf("enter no:");
			scanf("%d",&num);
			for(int i=1;i<=num;i++)
			{
				fact=fact*i;
			}
			printf("factorial:%d",fact);
			break;
		}
		case 5:
		{       printf("are you went to exit");
			goto end;
		}
	}
	goto jump;
	end:
	getch();
}

