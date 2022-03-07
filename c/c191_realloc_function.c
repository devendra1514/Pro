/* WAP to create memory using malloc() and its size increase by realloc */

#include<stdio.h>
#include<stdlib.h>
void main(){
    int *ptr;
    ptr=(int*)malloc(3*sizeof(int));
    printf("Enter 3 element:");
    for(int i=0;i<3;i++){
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<3;i++){
        printf("%d\n",ptr[i]);
        printf("%d\n",&ptr[i]);
    }
    ptr = realloc(ptr,5*sizeof(int));
    printf("Enter 5 element:");
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d\n",ptr[i]);
        printf("%d\n",&ptr[i]);
    }
}