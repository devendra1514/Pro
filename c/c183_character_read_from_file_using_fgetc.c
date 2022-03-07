// 183)WAP to read a character from file using fgetc() function.
#include<stdio.h>

void main(){
    FILE* fp;
    fp=fopen("c182_fputc.txt","r");
    char ch=fgetc(fp);
    printf("The character is %c",ch);
    fclose(fp);
}