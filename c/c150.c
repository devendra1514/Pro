// 150)Write a program to take argument in main function and run on command prompt.
#include<stdio.h>
void main(int arg,char *argc[])
{
    for(int i=0;i<arg;i++)
    {
        printf("\n%s",argc[i]);
    }
}