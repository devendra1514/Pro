#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int size) {
    printf("\n");
    for(int i = 0; i < size; i++) {
        printf("%d  ",arr[i]);
    }
}

void selectionSort(int *arr, int size) {

    for(int i = 0; i < size-1; i++) {
        int key = i;
        for(int j = i+1; j < size; j++) {
            if(arr[j] < arr[key]) {
                key = j;
            }
        }
        int data = arr[key];
        arr[key] = arr[i];
        arr[i] = data;
    }
}

int main() {
    int size;

    printf("Enter Size of Array : ");
    scanf("%d",&size);

    int *arr = (int*)malloc(size * sizeof(int));

    printf("Enter %d Element : ",size);

    for(int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }

    printf("Your Array : ");
    printArray(arr, size);

    selectionSort(arr, size);
    
    printf("\nSorted Array : ");
    printArray(arr, size);

    return 0;
}