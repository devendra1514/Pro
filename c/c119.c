/* basic question of pointer */

#include<stdio.h>
#include<conio.h>
void main()
{
    int x=5,*p,**q,***r;
    p=&x;
    q=&p;
    r=&q;
    printf("%d\t%d\n",x,p);
    printf("%d\t%d\n",*p,q);
    printf("%d\t%d\n",*q,r);
    printf("%d",*r);
    getch();
}