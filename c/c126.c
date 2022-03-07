/* WAP to input a string and print its lenght using function and pointer. */

#include<stdio.h>
#include<conio.h>
void main()
{
    char* rev(char*);
    int len(char*);
    char ch[20];
    int lenght=0;
    printf("Enter a string:");
    gets(ch);
    lenght=len(ch);
    printf("lenght of string:%d\n",lenght);
    rev(ch);
    getch();
}
int len(char *p)
{
    int i,sum=0;
    for(i=0;*(p+i)!='\0';i++)
        sum=sum+1;
    return sum;
}
char* rev(char *c)
{
    int i,t=0;
    for(i=0;*(c+i)!='\0';i++)               // we can written *(c+i) in the place of *(c+i)!='\0'
        t=t+1;                     // because address wahi tak ja sakta he jaha tak uska address hoga
    printf("reverse of string:");
    for(i=t;i>=0;i--)
        printf("%c",*(c+i));
}