/*
    WAP to print following pattern
        1
       232
      34543
     4567654
    567898765
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,j,k,no=0,sum=0,m=0,a,b;
    printf("enter no and see the magic:");
    scanf("%d",&num);
    for(i=1;i<=num;i++,no++)
    {
        for(j=num;j>i;j--)
        {
            printf(" ");
        }
        sum=i+no;
        for(k=1;k<=sum;k++)
        {
            a=sum/2;
            b=sum-a;
            if(k<=b)
            {                          
                printf("%d",++m); 
            }
            else 
            {
                printf("%d",--m);                
            }
        }
        printf("\n");
    }
    getch();
}