#include <stdio.h>
#include <stdlib.h>

typedef struct Array {
    int total_size;
    int used_size ;
    int *arr;
}Array;
void show(Array);

void createArray(Array* ptr, int t_size) {
    ptr->total_size = t_size;
    ptr->used_size = -1;
    ptr->arr = (int*)malloc(t_size * sizeof(int));
}

void insert(Array* ptr) {
    if(ptr->used_size < ptr->total_size -1){
        int data;
        printf("\nEnter a element : ");
        scanf("%d",&data);
        if(ptr->used_size == -1) {
            ptr->used_size++;
            ptr->arr[ptr->used_size] = data;
        }
        else{
            show(*ptr);
            int loc;
            printf("Enter location : ");
            scanf("%d",&loc);
            if(loc >=0 && loc <= ptr->used_size + 1) {
                if(loc == ptr->used_size+1) {
                    ptr->used_size++;
                    ptr->arr[ptr->used_size] = data;
                }
                else {
                    ptr->used_size++;
                    for(int i = ptr->used_size; i >= 0; i--) {
                        ptr->arr[i + 1] = ptr->arr[i];
                        if(loc == i) {
                            ptr->arr[i] = data;
                            break;
                        }
                    }
                }
            }
            else if(loc < 0){
                printf("Location not found!!!!!\n");
            }
            else {
                printf("\nEnter location out of used size !!!!!\n");
            }
        }
    }
    else {
        printf("\nOverflow !!!!!\n");
    }
}

void delete(Array* ptr) {
    if(ptr->used_size == -1) {
        printf("\nArray is empty !!!!!\n");
    }
    else {
        int data;
        show(*ptr);
        printf("Enter the element : ");
        scanf("%d",&data);
        for(int i = 0; i <= ptr->used_size; i++) {
            if(ptr->arr[i] == data) {
                for(int j = i; j < ptr->used_size; j++) {
                    ptr->arr[j] = ptr->arr[j+1];
                }
                ptr->used_size--;
                break;
            }
            else if(i == ptr->used_size) {
                printf("\nElement not found !!!!!\n");
            }
        }
    }
}

void sort(Array *ptr) {
    int temp;
    for(int i = 0; i < ptr->used_size; i++) {
        for(int j = 0; j < ptr->used_size - i; j++){
            if(ptr->arr[j] > ptr->arr[j+1]) {
                temp = ptr->arr[j];
                ptr->arr[j] = ptr->arr[j+1];
                ptr->arr[j+1] = temp;
            }
        }
    }
}

void search(Array ptr) {
    int data;
    printf("\nEnter The Element : \n");
    scanf("%d",&data);
    for(int i = 0; i <= ptr.used_size; i++) {
        if(ptr.arr[i] == data) {
            printf("\nElement present at position %d\n",i);
            break;
        }
        else if(ptr.used_size == i) {
            printf("\nElement Not Found !!!!!\n");
        }
    }
}

void show(Array ptr) {
    if(ptr.used_size == -1) {
        printf("\nArray is empty !!!!!\n");
    }
    else {
        printf("\n");
        for(int i = 0; i <= ptr.used_size; i++) {
            printf("%d.  %d  \n",i,ptr.arr[i]);
        }
    }
}

int main() {
    int size, choice;
    Array ptr;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    createArray(&ptr, size);
    do {
        printf("\n1. Insert\n2. Delete\n3. Sort\n4. Search\n5. Show\n6. Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice) {
            case 1:
                insert(&ptr);
                break;
            case 2:
                delete(&ptr);
                break;
            case 3:
                sort(&ptr);
                break;
            case 4:
                search(ptr);
                break;
            case 5:
                show(ptr);
                break;
            case 6:
                exit(0);   
            default:
                printf("Wrong choice !!!!!\n");
        }
    }while(1);
    return 0;
}