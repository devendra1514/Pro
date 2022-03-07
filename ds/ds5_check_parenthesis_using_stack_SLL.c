#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Stack {
    char parenthesis;
    struct Stack* next;
}Stack;

int isFull(Stack* top) {
    Stack* n = (Stack*)malloc(sizeof(Stack));
    if(n == NULL) {
        return 1;
    }
    return 0;
}

int isEmpty(Stack* top) {
    if(top == NULL) {
        return 1;
    }
    return 0;
}

void push(Stack** top, char ch) {
    Stack* temp = (Stack*)malloc(sizeof(Stack));
    temp->parenthesis = ch;
    temp->next = NULL;
    if(isFull(*top)) {
        printf("\nOverflow !!!!!\n");
    }
    else {
        temp->next = *top;
        *top = temp;
    }
}

int pop(Stack** top) {
    if(isEmpty(*top)) {
        printf("\nUnderflow !!!!!\n");
    }
    else {
        printf("%c",(*top)->parenthesis);
        *top = (*top)->next;
    }
}

int checkParenthesis(char str[]) {
    Stack* top = NULL;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == '(') {
            push(&top, str[i]);
        }
        else if(str[i] == ')') {
            if(isEmpty(top)) {
                return 0;
            }
            pop(&top);
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
    free(str);
    return 0;
}