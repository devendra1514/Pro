#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
    int* arr;
    int top;
    int size;
}Stack;

int isEmpty(Stack* s) {
    if(s->top == -1) {
        return 1;
    }
    else {
        return 0;
    }
}

int isFull(Stack* s) {
    if(s->top == (s->size - 1)) {
        return 1;
    }
    else {
        return 0;
    }
}

void createArray (Stack* s, int size) {
    s->arr = (int*)malloc(size * sizeof(int));
    s->top = -1;
    s->size = size;
}

void push(Stack* s) {
    if(isFull(s)) {
        printf("\nOverFlow !!!!!\n");
    }
    else {
        int data;
        printf("Enter Element : ");
        scanf("%d", &data);
        s->top++;
        s->arr[s->top] = data;
    }
}

void pop(Stack* s) {
    if(isEmpty(s)) {
        printf("\nUnderFlow !!!!!\n");
    }
    else {
        printf("\nYour data is : %d\n", s->arr[s->top]);
        s->top--;
    }
}

void peek(Stack *s) {
    if(isEmpty(s)) {
        printf("\nUnderFlow !!!!!\n");
    }
    else {
        printf("\nYour data is : %d\n", s->arr[s->top]);
    }
}

int main() {
    int choice;
    int size;
    Stack *s;
    printf("Enter size of stack : ");
    scanf("%d", &size);
    createArray(s, size);
    do{
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Exit");
        printf("\nEnter Your choice : ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                push(s);
                break;
            case 2:
                pop(s);
                break;
            case 3:
                peek(s);
                break;
            case 4:
                exit(1);
            default:
                printf("\nWrong Choice !!!!!\n");
        }
    }while(choice >= 1 && choice <= 4);
    return 0;
}