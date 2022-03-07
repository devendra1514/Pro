#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num==num)                                      
        printf("first if statement: %d",num);
    else if(num==num)
        printf("else if condition %d",num);
    if(num==num)
        printf("\nsecond if statement:%d",num);
    printf("\nboth are same condition");
}
/* if-else end togher 
   but new if execut after if-else statement
*/