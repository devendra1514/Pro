/* WAP to read three integer from a file */

#include<stdio.h>
#include<stdlib.h>
void main(){
    int num1,num2,num3;
    FILE* fp;
    fp=fopen("c184.txt","r");
    if(fp==NULL){
        printf("File not foung");
        exit(1);
    }
    fscanf(fp,"%d%d%d",&num1,&num2,&num3);
    printf("%d\n",num1);
    printf("%d\n",num2);
    printf("%d\n",num3);
}