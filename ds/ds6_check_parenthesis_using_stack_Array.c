#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Stack {
    char* arr;
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
    s->arr = (char*)malloc(size * sizeof(char));
    s->top = -1;
    s->size = size;
}

void push(Stack* s, char ch) {
    if(isFull(s)) {
        printf("\nOverFlow !!!!!\n");
    }
    else {
        s->top++;
        s->arr[s->top] = ch;
    }
}

void pop(Stack* s) {
    if(isEmpty(s)) {
        printf("\nUnderFlow !!!!!\n");
    }
    else {
        s->top--;
    }
}

int checkParenthesis(char str[]) {
    Stack* top;
    createArray(top, strlen(str));
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == '(') {
            push(top, str[i]);
        }
        else if(str[i] == ')') {
            if(isEmpty(top)) {
                return 0;
            }
            pop(top);
        }
    }
    if(isEmpty(top)) {
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    char* str;
    printf("Enter a expression : ");
    scanf("%s",str);
    printf("%d",strlen(str));
    if(checkParenthesis(str)) {
        printf("\nParenthesis is Matching\n");
    }
    else {
        printf("\nParenthesis is not Matching\n");

    }
    return 0;
}