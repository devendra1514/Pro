// 167)Write a program using a function that calculates the sum and 
// average of two numbers. Use pointers and print the values of sum and 
// average in main().
#include<stdio.h>
#include<conio.h>
float fun(int *p,int *q)
{
    float x=(*p+*q)/2.0;
    return (x);
}
void main()
{
    int a=5,b=6;
    float avg=0;
    avg=fun(&a,&b);
    printf("the average is %.3f\n",avg);
    printf("The sum of %d and %d is %d",a,b,(int)(avg*2));  
}