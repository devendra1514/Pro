/*49)WAP to input price of an item quality of an item and to calculate 
net amount with given condition if a quantity is greater than 100 give 
the discount 10% other wise nothing. */
#include<stdio.h>
void main()
{
	int quan;
	float price,dis,total,net;
	printf("enter price:");
	scanf("%f",&price);
	printf("enter quantity:");
	scanf("%d",&quan);
	total=price*quan;

	if(quan>=100)
	{
		dis=total*10/100;
	}
	net=total-dis;
	printf("\nprice:%f",price);
	printf("\nquantity:%d",quan);
	printf("\ntotal:%f",total);
	printf("\ndiscount:%f",dis);
	printf("\nnet amount:%f",net);
}