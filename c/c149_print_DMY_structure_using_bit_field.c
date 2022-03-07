/*Write a program to create a structure to print date,month,year and use of bit field for size.*/
#include<stdio.h>
#include<conio.h>
typedef struct 
{
    unsigned int d:5;      //    5 bit consumed in 4 byte         
    unsigned int m:4;      //    4 bit consumed in 4 byte
    unsigned int y;         //4 byte
}date;
void main()
{
    date d1={22,3,2020};
    printf("size of d1 is %d byte",sizeof(d1));
    printf("\n%d/%d/%d",d1.d,d1.m,d1.y);
}