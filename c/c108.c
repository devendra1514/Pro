/*  WAP to print following pattern
      * * * * * *
      *         *
      *         *
      *         *
      * * * * * *
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,j;
    printf("enter size of square:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(i==1)
        {
            for(j=1;j<=num;j++)
            {
                printf("* ");                
            }
        }
        else if(i>1&&i<num)
        {
            for(j=1;j<=num;j++)
            {
                if(j==1)
                    printf("* ");
                else if(j>1&&j<num)
                    printf("  ");
                else if(j==num)
                    printf("*");                  
            }
        }
        else if(i==num)
        {
            for(j=1;j<=num;j++)
            {
                printf("* ");
            }
        }
        printf("\n");        
    }
    getch();
}