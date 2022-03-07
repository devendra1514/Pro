/* Write a program to find the number is prime or not number input by user */
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,prime=0;
    printf("Enter number to find prime or not:");
    scanf("%d",&num);
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            prime=1;
        }
    }
    if(num==1)
    {
        printf("prime");
    }
    else if(prime==1)
    {
        printf("not prime");
    }
    else
    {
        printf("prime");
    }
    getch();
}