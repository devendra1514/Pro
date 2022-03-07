
#include<stdio.h>
#include<conio.h>
void main()
{
    const int x=5;
    const int *p=&x;    
    printf("x=%d",x);
    ++(*p);
    printf("x=%d",x);
    getch();
}