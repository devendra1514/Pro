/* WAP ro read content from a file using fgetc() function. */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    char ch;
    FILE *fp;
    fp=fopen("file.txt","r");
    if(fp==NULL)
    {
        printf("file not found");
        exit(1);
    }
    do
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    while(!feof(fp));
    fclose(fp); 
    getch();
}