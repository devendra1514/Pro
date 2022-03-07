/* WAP to read content from a file and display on screen. use fgets() to read string from a file */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char str[10];
    fp=fopen("file.txt","r");
    if(fp==NULL)
    {
        printf("file not found");
        exit(1);
    }
    while(fgets(str,9,fp)!=NULL)
    {
        printf("%s",str);
    }
    fclose(fp);
}