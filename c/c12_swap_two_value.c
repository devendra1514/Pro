/* WAP to store any two value in a two variable and swipe 
	the value between them using third variable. */
#include <stdio.h>
#include <conio.h>

void main()
{
	int n1, n2, t;
	printf("enter first no n1:");
	scanf("%d", &n1);
	printf("enter second no n2:");
	scanf("%d", &n2);
	printf("before swapping the no:\nn1=%d\nn2=%d", n1, n2);
	t = n1;
	n1 = n2;
	n2 = t;
	printf("\nafter swapping the no:\nn1=%d\nn2=%d", n1, n2);
	getch();
}