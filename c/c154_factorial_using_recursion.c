/* write a program to find factorial using recurtion*/
#include<stdio.h>
#include<conio.h>
int fact(int num)
{
    if(num==1||num==0)
    {
        return (1);
    }
    return(num*fact(num-1));
}
int main()
{
    int num;
    printf("Enter number to find its factorial:");
    scanf("%d",&num);
    printf("factorial of %d is %ld",num,fact(num));
    getch();
}