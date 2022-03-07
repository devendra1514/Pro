#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int size) {
    printf("\n");
    for(int i = 0; i < size; i++) {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}

void merge(int *arr, int low, int mid, int high) {
    int i = low;
    int j = mid+1;
    int k = 0;
    int *temp = (int*)malloc(((high - low) + 1) * sizeof(int));
    while(i <= mid && j <= high){
        if(arr[i] <= arr[j]) {
            temp[k] = arr[i];
            k++;
            i++;
        }
        else if(arr[j] < arr[i]) {
            temp[k] = arr[j];
            k++;
            j++;
        }
    }

    while(i <= mid) {
        temp[k] = arr[i];
        k++;
        i++;
    }
    while(j <= high) {
        temp[k] = arr[j];
        k++;
        j++;
    }
    for(int l = 0, m = low; m <= high; l++, m++) {
        arr[m] = temp[l];
    }
    free(temp);
}

void mergeSort(int *arr, int low, int high) {
    
    if(low < high) {
        int mid = (low + high)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
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

    mergeSort(arr, 0, size-1);
    
    printf("\nSorted Array : ");
    printArray(arr, size);

    return 0;
}