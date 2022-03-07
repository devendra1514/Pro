// 5)WAP to calculate simple interest.
#include<stdio.h>
#include<conio.h>
void main()
{
    float principal,time,rate;
    printf("Enter principal:");
    scanf("%f",&principal);
    printf("Enter rate:");
    scanf("%f",&rate);
    printf("Enter time:");
    scanf("%f",&time);
    printf("Principal :%f\n",principal);
    printf("Rate      :%f\n",rate);
    printf("Time      :%f\n",time);
    printf("\nSimple interest : %.2f",(float)(principal*rate*time)/100);
}