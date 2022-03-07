// 53)WAP to input quality , price of an item and give to discount by the condition 
// if the quality is ‘a’ grade and quantity greater than 100 then five the discount 
// 10% or if the quality is ‘a’ grade but the quantity is less than 100 then give 
// the discount 5% but if the quality not grade ‘a’ then nothing to give. 
// Finally calculate net amount.

#include<stdio.h>
#include<conio.h>
void main()
{
	char qual;
	int quan;
	float price,total,net,dis;
	printf("enter quality:");
	scanf("%c",&qual);
	printf("enter quantity:");
	scanf("%d",&quan);
	printf("enter price:");
	scanf("%f",&price);
	total=price*quan;
	if(qual=='a'||qual=='A')
	{
		if(quan>100)
		{
			dis=total*10/100;
			net=total-dis;

			printf("net amount:%f",net);
		}
		else
		{
			dis=total*5/100;
			net=total-dis;
			printf("net amount:%f",net);
		}
	}
	getch();
}