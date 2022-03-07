// WAP to read an integer from file using fscanf() function.
#include<stdio.h>
void main(){
    FILE* fp;
    int num;
    fp=fopen("c180_fprintf_integer.txt","r");
    if(fp==NULL){
        printf("File not fount");
    }
    else{
        fscanf(fp,"%d",&num);
        printf("%d",num);
    }
}