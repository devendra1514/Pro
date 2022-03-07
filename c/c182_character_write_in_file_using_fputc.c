// 182)WAP to write a character in file using fputc() function.
#include<stdio.h>
void main(){
    FILE* fp;
    char ch;
    fp=fopen("c182_fputc.txt","w");
    printf("Enter a character :");
    ch=getchar();
    fputc(ch,fp);
    fclose(fp);
}