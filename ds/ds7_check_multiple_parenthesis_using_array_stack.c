#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Stack {
    char* arr;
    int size;
    int top;
}Stack;

int isFull(Stack* s) {
    if(s->top == s->size - 1) {
        return 1;
    }
    return 0;
}

int isEmpty(Stack* s) {
    if(s->top == -1) {
        return 1;
    }
    return 0;
}

void push(Stack* s, char ch) {
    if(isFull(s)) {
        printf("OverFlow");
    }
    else {
        s->top++;
        s->arr[s->top] = ch;
    }
}

char pop(Stack *s) {
    if(isEmpty(s)) {
        return 0;
    }
    else {
        int data;
        data = s->arr[s->top];
        s->top--;
        return data;
    }
}

int checkParenthesis(char exp[]) {
    Stack *s;
    s->arr = (char*)malloc(strlen(exp));
    s->top = -1;
    s->size = strlen(exp);
    for(int i = 0; exp[i] != '\0'; i++) {
        if(exp[i] == '[' || exp[i] == '{' || exp[i] == '(') {
            if(isFull(s)) {
                return 0;
            }
            push(s, exp[i]);
        }
        else if(exp[i] == ')') {
            if(isEmpty(s) || pop(s) != '(') {
                return 0;
            }
        }
        else if(exp[i] == '}') {
            if(isEmpty(s) || pop(s) != '{') {
                return 0;
            }
        }
        else if(exp[i] == ']') {
            if(isEmpty(s) || pop(s) != '[') {
                return 0;
            }
        }      
    }
    if(isEmpty(s)) {
        return 1;
    }
    return 0;
}

int main() {
    char* str;
    printf("Enter a expression : ");
    scanf("%s",str);
    printf("Size : %d",strlen(str));
    if(checkParenthesis(str)) {
        printf("\nParenthesis is Matching\n");
    }
    else {
        printf("\nParenthesis is not Matching\n");

    }
    return 0;
}