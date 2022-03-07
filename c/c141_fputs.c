/* WAP to write a string to a file. use fputs() to write  content to the file.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    char str[20];
    FILE *fp;
    fp=fopen("file.txt","w");
    printf("Enter string:");
    gets(str);
    fputs(str,fp);
    fclose(fp);
}