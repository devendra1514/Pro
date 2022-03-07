/* Greatest commom divisor with recursion */
#include<stdio.h>
#include<conio.h>
int GCD(int a,int b)
{
    if(a==b)
        return(a);
    if(a%b==0)
        return(b);
    if(b%a==0)
        return(a);
    if(a>b)
        return(GCD(a%b,b));
    else
        return(GCD(a,b%a));
}
void main()
{
    int n1,n2;
    printf("Enter two number to find greatest commom divisor:");
    scanf("%d%d",&n1,&n2);
    printf("%d",GCD(n1,n2));
    getch();
}