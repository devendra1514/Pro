/* write a program to read a text file by character by character and write  its content twice in 
    seperate file */
#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE* fp,*temp1,*temp2;
    char ch;
    fp=fopen("c186.txt","r");
    if(fp==NULL){
        printf("File not found");
        fclose(fp);
        exit(1);
    }
    temp1=fopen("c186_1.txt","w");
    temp2=fopen("c186_2.txt","w");
    while(1){
        ch=fgetc(fp);
        if(ch==EOF){
            exit(1);
        }
        fputc(ch,temp1);
        fputc(ch,temp2);
    }
    fclose(fp);
    fclose(temp1);
    fclose(temp2);
}