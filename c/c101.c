/* WAP to input any 10 different element  and find 
   minimum number using array */

   
#include<stdio.h>
#include<conio.h>
void main()
{
    int num[10],min=0;
    printf("enter any 10 differet number and find which number is minmum:");
    for(int i=0;i<=10-1;i++)
    {
        scanf("%d",&num[i]);
        if(i==0)
        {
            min=num[0];
        }
        if(num[i]<min)
        {
            min=num[i];
        }
    }
    printf("Minimum : %d",min);
    getch();
}