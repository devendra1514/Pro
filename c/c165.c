/* Write a recursive function to calculate the sum of first n natural numbers.*/
#include<stdio.h>
#include<conio.h>
int sum(int num)
{
    if(num==1)
        return (1);
    return(num+sum(num-1));
}
int main()
{
    int num;
    printf("Enter a number to find sum of n natural number:");
    scanf("%d",&num);
    printf("sum of 1 to %d is %d",num,sum(num));
    getch();
}