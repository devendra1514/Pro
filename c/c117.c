/* WAP in c to read n number of value in an array and display it in reverse order.*/

#include<stdio.h>
#include<conio.h>
void main()
{
    char ch[100];
    int sum=0;
    printf("Enter any number:");
    scanf("%s",&ch);
    int i=0;
    while(ch[i]!='\0')
    {
        sum=sum+1;
        i++;
    }
    for(i=sum-1;i>=0;i--)
    {
        printf("%c",ch[i]);
    }
    getch();
}