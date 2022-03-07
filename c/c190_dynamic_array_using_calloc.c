/* WAP to create an array of size n using calloc where n is an interger entered by the user */

#include<stdio.h>
#include<stdlib.h>
void main(){
    float *ptr;
    int element=0;
    printf("How many element you enter :\n");
    scanf("%d",&element);
    ptr=(float*)calloc(element,sizeof(float));
    if(ptr==NULL){
        printf("Memory not allocated");
        exit(1);
    }
    for(int i=0;i<element;i++){
        printf("Enter %d element : ",i+1);
        scanf("%f",(ptr+i));
    }
    for(int i=0;i<element;i++){
        printf("%.2f\n",*(ptr+i));
    }
    free(ptr);
}