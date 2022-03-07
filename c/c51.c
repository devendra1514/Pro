/* 51)WAP to input cost price and selling price of an item person has 
earned profit or lose and print them and also print how much . 
using if….. else statement. */
#include <stdio.h>
void main()
{
	float cost, sell, pro, lose;
	printf("enter cost price:");
	scanf("%f", &cost);
	printf("enter selling price:");
	scanf("%f", &sell);
	if (cost > sell)
	{
		lose = cost - sell;
		printf("lose:%f", lose);
	}
	else
	{
		pro = sell - cost;
		printf("profit:%f", pro);
	}
}