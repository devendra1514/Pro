#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int size)
{
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
}

void insertionSort(int *arr, int size)
{
    int data;
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element : ", i + 1);
        scanf("%d", &data);
        int j = i - 1;
        while (j >= 0 && data < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = data;
    }
}

int main()
{
    int size;

    printf("Enter Size of Array : ");
    scanf("%d", &size);

    int *arr = (int *)malloc(sizeof(size) * sizeof(int));

    insertionSort(arr, size);
    printArray(arr, size);
    return 0;
}