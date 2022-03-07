// WAP to write a string in file using fprintf() function.
#include<stdio.h>
void main()
{
    FILE* fp;
    char ch[20];
    printf("Enter your first name :");
    scanf("%s",&ch);              //only one string read  at the time by scanf() function
    printf("Your name is stored in c178_fprintf.txt file");
    fp=fopen("c178_fprintf_string.txt","w"); //if file is not exist then "w" is create a file
                                     // if the file exist content will be overwritten
    fprintf(fp,"%s",ch);
    fclose(fp);
}