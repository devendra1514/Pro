// 30)WAP to input cost & selling price of an item and to calculate and print profit 
// & lose if the user has earn the profit also print profit value other wise 
// print lose and also print loss value.
#include<stdio.h>
#include<conio.h>
void main()
{
	 
	float cost,sell,profit,lose;
	printf("enter cost price:");
	scanf("%f",&cost);
	printf("enter selling price:");
	scanf("%f",&sell);
	profit=sell-cost;
	lose=cost-sell;
	(sell>cost)?printf("profit:%f",profit):printf("lose:%f",lose);
	getch();
}