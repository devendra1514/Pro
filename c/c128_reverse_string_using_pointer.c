/* WA function to print reverse a string using pointer.*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    void reverse(char *p);
    char ch[20];
    printf("Enter a string:");
    gets(ch);
    reverse(ch);
    printf(ch);
    getch();
}
void reverse(char *p)
{
    int i=0,l=0;
    char swap;
    l=strlen(p);
    for(i=0;i<l/2;i++)
    {
        swap=*(p+i);
        *(p+i)=*(p+l-i-1);
        *(p+l-i-1)=swap;            
    }
}