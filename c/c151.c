/* Write a program to store a value in constant variable and change the value.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    const int x=6;
    int *p;
    p=&x;
    printf("x=%d",x);
    ++(*p);
    printf("x=%d",x);
    getch();
}