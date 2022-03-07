/* use of enum keyword */

#include<stdio.h>
#include<conio.h>
enum boolean
{
    true,false
};
enum boolean even(int x)
{
    if(x%2==0)
        return(true);
    else
        return(false);
}
void main()
{
    int num;
    enum boolean result;
    printf("Enter a number:");
    scanf("%d",&num);
    even(num);
    if(even(num)==true)
        printf("even");
    else
        printf("odd");
    getch();
}