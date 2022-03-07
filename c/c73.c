/* WAP to input any string & print one by one 
   character to given string 
   input: dev
   output: 
   d
   e
   v */
#include<stdio.h>
#include<conio.h>
void main()
{
    
    char ch[20];
    printf("enter any string to print one by one:");
    gets(ch);

    for(int i=0;ch[i]!='\0';i++)
    {
        printf("%c",ch[i]);
        printf("\n");
    }
    getch();
}