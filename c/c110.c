/* WAP to enter a number to find perfect or not  */

#include<stdio.h>
#include<conio.h>
void main()
{
    int num,sum=0;
    printf("enter number to find perfect or not:");
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
            sum=sum+i;
    }
    if(num==sum)
        printf("%d is perfect number",num);
    else
        printf("%d is not a perfect number",num);

    getch();
}