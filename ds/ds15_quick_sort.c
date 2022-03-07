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

// int partition(int *arr, int low, int high) {
//     int pivot = arr[low];
//     int i = low+1;
//     int j = high;
//     do{
//         while(arr[i] <= pivot && i < high) {
//             printf("%d",i);
//             i++;
//         }
//         while(arr[j] > pivot) {
//             j--;
//         }
//         if(i < j) {
//             int temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//         }
//     }while(i < j);

//     int temp = arr[j];
//     arr[j] = arr[low];
//     arr[low] = temp;
//     return j;
// }

//Second method for partition
int partition(int *arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    int j = low;
    while (j < high)
    {
        if (arr[j] <= pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        j++;
    }
    int temp = arr[high];
    arr[high] = arr[i + 1];
    arr[i + 1] = temp;
    return i + 1;
}

void quickSort(int *arr, int low, int high)
{
    int partition_index;

    if (low < high)
    {
        partition_index = partition(arr, low, high);
        quickSort(arr, low, partition_index - 1);
        quickSort(arr, partition_index + 1, high);
    }
}

int main()
{
    int size;
    printf("Enter Size of Array : ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));

    printf("Enter %d Element : ", size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Your Array : ");
    printArray(arr, size);

    quickSort(arr, 0, size - 1);

    printf("\nSorted Array : ");
    printArray(arr, size);
    return 0;
}