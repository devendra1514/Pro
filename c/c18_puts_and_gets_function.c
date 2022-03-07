// 18)WAP to input and print string gets and puts function.
#include<stdio.h>
void main()
{
    char name[20];
    printf("Enter your full name:");
    gets(name);
    printf("You name is ");
    puts(name);
}