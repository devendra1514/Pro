/* WAP to input three string in array and print it */

#include<stdio.h>
#include<conio.h>
void main()
{
    char ch[3][20];
    int i,j;
    printf("Enter three string:");
    for(i=0;i<3;i++)
    {
        scanf("%s",&ch[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;ch[i][j]!='\0';j++)
            printf("%c",ch[i][j]);
    printf("\n");
    }   
    getch();
}