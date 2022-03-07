// WAP to find out perimeter of rectangle.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	int l,w;
	float area;
	printf("enter lenght:");
	scanf("%d",&l);
	printf("enter width:");
	scanf("%d",&w);
	area=(l+w)*1/2;
	printf("perimeter of ractangle:%f",area);
	getch();
}