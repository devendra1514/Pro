/* WAP to input a string and print its length using user defined massage.*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int lenght(char c[]),len=0;
    char ch[20];
    printf("Enter string:");
    scanf("%s",&ch);
    printf("Lenght of string using user defined function : %d",lenght(ch));
    printf("\nLenght of string from strlen() is %d",strlen(ch));
}
int lenght(char c[])
{
    int i,sum=0;
    for(i=0;c[i]!='\0';i++)
    {
        sum=sum+1;
    }
    return sum;
}
