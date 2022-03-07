/* 15)WAP to input cost price of an item and selling price of an 
    item and quantity of item and calculate net amount.  */
#include<stdio.h>
#include<conio.h>
void main()
{   
    double cost,sel;
    int qua;
    printf("enter cost amount:");
    scanf("%lf",&cost);
    printf("enter selling amount:");
    scanf("%lf",&sel);
    printf("enter quantity:");
    scanf("%d",&qua);
    double dis,tot,total;
    tot=sel*qua;
    dis=sel*10/100;
    total=sel-dis;
    printf("\ncost amount:%ld",cost);
    printf("\nselling amount:%ld",sel);
    printf("\nquantity:%d",qua);
    printf("\nnet amount:%ld",tot);
    printf("\ndiscount:%ld",dis);
    printf("\ntotal amount:%ld",total);
}
