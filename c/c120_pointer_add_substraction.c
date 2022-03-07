/* pointer substraction and adding. */

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int x=5,y=10;
    int *i,*j;
    i=&x;
    j=&y;
    printf("%d\n",sizeof(x));
    printf("i=%u  j=%u\n",i,j);
    printf("%u\n",i-j);            //pointer1-pointer2=literal substraction/sizeof(type of pointer)
    printf("%u",i-5);              //pointer+n=pointer+sizeof(type of pointer)*n
    getch();
}