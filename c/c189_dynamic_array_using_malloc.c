/* WAP to to create a dynamic array of n int element using malloc */

#include<stdio.h>
#include<stdlib.h>
void main(){
    int *ptr,element=0;
    printf("How many element you enter in array : ");
    scanf("%d",&element);
    ptr=(int*)malloc(sizeof(int)*element);
    if(ptr==NULL){
        printf("Memory not allocated!!!!!!");
        exit(1);
    }
    printf("Enter %d element : \n",element);
    for(int i=0;i<element;i++){
        scanf("%d",ptr+i);       //or  &ptr[i]
    }
    for(int i=0;i<element;i++){
        printf("%d\n",*(ptr+i));   //or  ptr[i]
    }
    free(ptr);
}