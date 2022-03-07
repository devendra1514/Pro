/*program all pemutation of a string with recursion*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
void swap(char *x,char *y)
{
    char ch;
    ch=*x;
    *x=*y;
    *y=ch;
}
void p(char *s,int i,int n)
{
    static int count;
    int j;
    if(i==n)
    {
        count++;
        printf("(%d) %s\n",count,s);
    }
    else
    {
        for(j=i;j<=n;j++)
        {
            swap((s+i),(s+j));
            p(s,i+1,n);
            swap((s+i),(s+j));
        }
    }
}
void main()
{
    char *ch;
    printf("Enter a string:");
    gets(ch);
    p(ch,0,strlen(ch)-1);
    getch();
}