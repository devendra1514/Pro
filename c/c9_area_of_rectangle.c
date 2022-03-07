// 9)WAP to program to calculate area of rectangle.
#include <stdio.h>

void main()
{
	int lenght, width, area;
	printf("enter lenght:");
	scanf("%d", &lenght);
	printf("enter width:");
	scanf("%d", &width);
	area = lenght * width;
	printf("area:%d", area);
}