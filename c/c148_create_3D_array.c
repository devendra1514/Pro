/* Writwe a program to create 3-D array and value input by user and print it.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[2][2][3];
    printf("Enter 12 element of matrix:");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<3;k++)
            {
                scanf("%d",&a[i][j][k]);
            }
        }
    }
    printf("you enter:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<3;k++)
            {
                printf("%d ",a[i][j][k]);
            }
        }
    }
    getch();
}