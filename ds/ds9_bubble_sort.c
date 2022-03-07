#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int size) {
    printf("\n");
    for(int i = 0; i < size; i++) {
        printf("%d  ",arr[i]);
    }
}

void bubbleSort(int *arr, int size) {
    int count = 0;
    int temp;
    for(int i = 0; i < size-1; i++) {
        for(int j = 0; j < size-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count++;
            }
            count++;
        }
    }
    printf("Total round : %d", count);
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
    bubbleSort(arr, size);
    printArray(arr, size);
    free(arr);
    return 0;
}