/* fibonacii series using recursion*/
#include<stdio.h>
#include<conio.h>
int fib(int num)
{
    if(num==0)
    {
        return 0;
    }
    else if(num==1||num==2)
    {
        return(1);
    }
    return(fib(num-1)+fib(num-2));
}
int main()
{
    int num;
    printf("Enter nth term of fibonacci series:");
    scanf("%d",&num); 
    for(int i=0;i<=num;i++)
    {                             
        printf("%d\n",fib(i));          //pass nth term of fibonacci series and it return value
    }
    getch();
}
