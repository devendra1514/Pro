/* WAP to write a content in the file using fputc() function.*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    int i;
    char s[20];
    FILE *fp;
    fp=fopen("file.txt","w");
    if(fp==NULL)
    {
        printf("file not open");
        exit(1);
    }
    printf("Enter a string:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        fputc(s[i],fp);
    }
    fclose(fp);
}