#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Queue {
    int* arr;
    int front, rear;
    int size;
}Queue;

void createQueue(Queue *q, int size) {
    q->arr = (int*)malloc(size * sizeof(int));
    q->size = size;
    q->front = 0;
    q->rear = 0;
}

int isFull(Queue* q) {
    if((q->rear +1)%q->size == q->front) {
        return 1;
    }
    return 0;
}

int isEmpty(Queue* q) {
    if(q->front == q->rear) {
        return 1;
    }
    return 0;
}

void enqueue(Queue* q) {
    if(isFull(q)) {
        printf("\nQueue is Full !!!!!");
    }
    else {
        q->rear = (q->rear +1)%q->size;
        printf("\nEnter a Element : ");
        scanf("%d",&q->arr[q->rear]);
    }
}

void dequeue(Queue* q) {
    if(isEmpty(q)) {
        printf("\nQueue is Empty !!!!!");
    }
    else {
        q->front = (q->front +1)%q->size;
    }
}

int main() {
    int choice;
    int size;
    Queue q;
    printf("Enter The Size of Queue : ");
    scanf("%d",&size);
    createQueue(&q, size +1);
    do {
        printf("\n_______________________");
        printf("\n|1. enqueue    |");
        printf("\n|2. dequeue    |");
        printf("\n|3. Exit       |");
        printf("\n-----------------------");
        printf("\n>>>Enter Your Choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                enqueue(&q);
                break;
            case 2:
                dequeue(&q);
                break;
            case 3:
                exit(1);
            default:
                printf("\nWrong choice !!!!!");
        }
    }while(choice > 0 && choice <= 3);
    return 0;
}