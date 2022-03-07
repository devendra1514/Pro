/*  WAP to generate multiplication table of a given number in text format. make sure
    that the file is readable and well formatted. */
#include<stdio.h>
void main(){
    int num;
    FILE* fp;
    printf("Enter a number to save its multiplication table in file :");
    scanf("%d",&num);
    fp=fopen("c185_multiplication_table.txt","w");
    for(int i=1;i<=10;i++){
        fprintf(fp,"%d * %d = %d\n",num,i,num*i);
    }
    fclose(fp);
}