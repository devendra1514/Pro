#include <stdio.h>
#include <stdlib.h>

typedef struct Array {
    int size, *arr;
}Array;

void set(Array *ptr) {
    scanf("%d",&ptr->size);
    ptr->arr = (int*)malloc(ptr->size*sizeof(int));
    for(int i = 0; i < ptr->size; i++) {
        scanf("%d",&ptr->arr[i]);
    }
}

int main() {
    int size, query;
    scanf("%d%d",&size,&query);
    Array *ptr;
    ptr = (Array*)malloc(size*sizeof(Array));
    for(int i = 0; i < size; i++) {
        set(&ptr[i]);
    }
    // for(int i = 0; i < size; i++) {
    //     for(int j = 0; j < ptr[i].size; j++) {
    //         printf("%d ",ptr[i].arr[j]);
    //     }
    //     printf("\n");
    // }
    int row,column;
    int arr[query][2];
    for(int i = 0; i < query; i++) {
        scanf("%d%d",&row,&column);
        arr[i][0] = row;
        arr[i][1] = column;
    }
    for(int i = 0; i < query; i++) {
        printf("%d ",ptr[arr[i][0]].arr[arr[i][1]]);
    }
    free(ptr);
    return 0;
}