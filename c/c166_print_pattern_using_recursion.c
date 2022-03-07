/* print following pattern using recursion 
   input: 3
   *
   ***
   *****
   */
#include<stdio.h>
#include<conio.h>
void pattern(int );
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    pattern(num);
}
void pattern(int num)
{
    if(num==0)
    {
        return;
    }
    pattern(num-1);
    for(int i=0;i<(2*num-1);i++)
    {
        printf("*");
    }
    printf("\n");
}