/* WAP to input 5 element of array and print it using *pointer. */

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[5],*p;
    p=&a[0];
    printf("Enter 5 number:");
    for(i=0;i<5;i++)
        scanf("%d",(p+i));
    for(i=0;i<5;i++)
        printf("%d\n",*(p+i));

    getch();
}