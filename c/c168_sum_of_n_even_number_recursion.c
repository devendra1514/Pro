/* Write a recursive program to sum of n even number */

#include<stdio.h>
#include<conio.h>
int even(int n)
{
    
    if(n==0)
    {
        return 0;
    }
    return(n+even(n-2));
}
void main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    printf("sum of %d even number is %d",num,even(num*2));
}