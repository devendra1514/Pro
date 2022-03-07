/* WA function to swap two number using pointer.*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,sum;
    void swap(int *p,int *q);
    printf("Enter two number:");
    scanf("%d%d",&n1,&n2);
    printf("before swapping the number:");
    printf("\nn1=%d,n2=%d",n1,n2);
    swap(&n1,&n2);
    printf("\nafter swapping the number:");
    printf("\nn1=%d,n2=%d",n1,n2);    
    getch();
}
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}