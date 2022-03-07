/* WA structure to input date, month and year and print it .*/

#include<stdio.h>
#include<conio.h>
struct date
{
    int d,m,y;
};
void main()
{
    struct date today,d1;
    printf("Enter today's date/month/year: ");
    scanf("%d/%d/%d",&today.d,&today.m,&today.y);
    printf("date:%d/%d/%d",today.d,today.m,today.y);
    printf("\ncopy of data in other variable:");
    d1=today;
    printf("\n%d/%d/%d",d1.d,d1.m,d1.y);
    getch();
}