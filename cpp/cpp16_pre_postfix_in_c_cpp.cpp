/* Write a program to difference between c and c++ on prefix and postfix. */

#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a=0,b=0;
    printf("a=%d\n",a);
    printf("this is print by printf() function:\n");
    printf("a = %d  ++a = %d  a++ = %d\n",a,++a,a++);       //left to right print
    printf("a++ = %d  ++a = %d  a = %d   a++ = %d\n",a++,++a,a,a++);
    printf("this is why because the printf() functon first executed the pre and postfix operator\n");
    cout<<"\nthis is print by cout:\n";
    cout<<"b="<<b<<endl;
    cout<<"b = "<<b<<"  ++b = "<<++b<<"  b++ = "<<b++<<"  ++b="<<++b;          //right to left
    return 0;
}