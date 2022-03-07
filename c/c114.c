/* WAP to print the following patter 
    input=3 
    -3,-2,-1,0,1,2,3  */

#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i;
    printf("Enter any number and see the number is going - to + :");
    scanf("%d",&num);
    if(num>=0)
    {
        for(i=-num;i<=num;i++)
        {
            printf("%d,",i);
        }
    }
    else
    {
        for(i=num;i<=-(num);i++)
        {
            printf("%d,",i);
        }
    }
    getch();
}