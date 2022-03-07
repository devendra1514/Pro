/* WAP to input a string and print character of string in ascending order.*/

#include<stdio.h>
#include<conio.h>
void main()
{
    char* sort(char *p);
    char ch[20];
    printf("enter a string :");
    gets(ch);
    sort(ch);
    for(int i=0;ch[i]!='\0';i++)
        printf("%c",ch[i]);
    getch();
}
char* sort(char *p)
{
    int i,r,swap,t=0;
    for(i=0;*(p+i)!='\0';i++)
    {
        t=t+1;
    }
    for(r=1;r<t;r++)
    {
        for(i=0;i<t-1;i++)
        {
            if(*(p+i)>*(p+i+1))
            {
                swap=*(p+i);
                *(p+i)=*(p+i+1);
                *(p+i+1)=swap;
            }
        }
    }
}