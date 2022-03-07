/* WAP to print the following pattern
    input:code
    output: 
           c
            o
             d
              e
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char ch[20];
    int i=0,j;
    printf("Enter any characters:");
    gets(ch);
    while(ch[i]!='\0')
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        printf("%c",ch[i]);
        i++;
        printf("\n");
    }
    getch();
}