// 179)WAP to read a string from a file using fscanf() function.

#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *fp;
    char ch[20];
    fp=fopen("c178_fprintf_string.txt","r");

    if(fp==NULL){
        printf("File not fount");
        exit(1);
    }
    else{
        fscanf(fp,"%s",ch); //fscanf() function read one string at the time
        printf("%s",ch);
    }
    fclose(fp);
}