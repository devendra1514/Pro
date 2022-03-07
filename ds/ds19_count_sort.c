#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int size) {
    printf("\n");
    for(int i = 0; i < size; i++) {
        printf("%d, ",arr[i]);
    }
    printf("\n");
}

int findGreatestElement(int* arr, int size) {
    int data = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] > data) {
            data = arr[i];
        }
    }
    return data;
}

void countSort(int* arr, int size) {
    int count_size = findGreatestElement(arr, size) + 1;

    int *count_arr = (int*)malloc(count_size * sizeof(int));

    for(int i = 0; i < count_size; i++) {
        count_arr[i] = 0;
    }

    for(int i = 0; i < size; i++) {
        count_arr[arr[i]]++;
    }

    for(int i = 0, k = 0; i < count_size; i++) {
        if(count_arr[i] != 0) {
            for(int j = count_arr[i]; j > 0; j--) {
                arr[k] = i;
                k++;
            printf("Hello");
            }
        }
        else
            printf("Hello");
    }
}

int main() {
    int size = 0;
    printf("Enter Size of Array : ");
    scanf("%d",&size);

    int* arr = (int*)malloc(size * sizeof(int));

    printf("Enter %d Element : ",size);
    for(int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }

    printf("\nYour Array : ");
    printArray(arr, size);
    
    countSort(arr, size);

    printf("\nSorted Array : ");
    printArray(arr, size);

    return 0;
}