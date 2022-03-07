/* WAP to print following pattern
        *******
        *** ***
        **   **
        *     *
*/ 

#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,j,k=1;
    printf("Enter any number:");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
    {
        if(i==num)
        {
            for(j=1;j<=num*2-1;j++)
            {
                printf("*");
            }
        }
        else
        {
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
            for(j=1;j<=k;j++)
            {
                printf(" ");
            }
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
            k+=2;
        }
        printf("\n");
    }
    getch();  
}