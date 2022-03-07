/* Program Printing all binary strings of n length with recursion*/
#include<stdio.h>
#include<conio.h>
void bin(int n,char A[])
{
    if(n<1)
    {
        printf("%s\n",A);
    }
    else
    {
        A[n-1]='0';
        bin(n-1,A);
        A[n-1]='1';
        bin(n-1,A);
    }
}
void main()
{
    char A[4];
    A[3]='\0';
    bin(3,A);
    getch();
}