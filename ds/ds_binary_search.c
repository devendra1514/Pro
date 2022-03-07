#include <stdio.h>

int binarySearch(int*, int , int);

int main() {
    int arr[] = {9, 12, 15, 24, 30, 36, 45, 70};
    int data;
    printf("Enter element : ");
    scanf("%d", &data);
    int size = sizeof(arr) / sizeof(int);
    int location = binarySearch(arr, size, data);

    if(location == -1) {
        printf("Element not available !!!!!\n");
    }
    else {
        printf("Element available at location %d\n", location);
    }
    return 0;
}

int binarySearch(int *arr, int size, int data) {

    if(data < arr[0] || data > arr[size-1]) {

        return -1;
    }
    else {

        int start = 0, end = size - 1, mid;
        while(start <= end) {

            mid = (start + end) / 2;

            printf("%d\n",mid);
            
            if(data == arr[mid]) {

                return mid;
            }
            else if(data > arr[mid]) {

                start = mid + 1;
            }
            else if(data < arr[mid]) {

                end = mid - 1;
            }
        }
        return -1;
    }
}