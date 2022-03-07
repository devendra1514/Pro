#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int size) {
    printf("\n");
    for(int i = 0; i < size; i++) {
        printf("%d  ",arr[i]);
    }
}

void sortedArray(int *arr, int size) {
    int isSorted = 0;
    int temp;
    for(int i = 0; i < size-1; i++) {
        isSorted = 1;
        printf("\nHello");
        for(int j = 0; j < size-1-i; j++) {     
            if(arr[j] > arr[j+1]) {              //if arr is sorted form then if condition not execute
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted) {            
            return;
        }
    }
}

int main() {
    int size;
    printf("Enter size  : ");
    scanf("%d",&size);
    int *arr = (int*)malloc(sizeof(size)*sizeof(int));

    printf("Enter %d Element : ",size);
    for(int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }

    printArray(arr, size);
    sortedArray(arr, size);
    printArray(arr, size);
    
    return 0;
}