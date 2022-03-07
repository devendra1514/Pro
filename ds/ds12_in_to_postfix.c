#include <stdio.h>
#include <stdlib.h>
typedef struct Stack {
    int top;
    char* arr;
}Stack;

void createStack(Stack* s, int size) {
    s->top = -1;
    s->arr = (char*) malloc (size * sizeof(char));
}

int isOperator(char ch) {
    if(ch == '^' || ch == '%' || ch == '*' || ch == '/' || ch == '+' || ch == '-' || ch == '(' || ch == ')') {
        return 1;
    }
    return 0;
}

int prece(char ch) {
    if(ch == '^') {
        return 4;
    }
    else if(ch == '*' || ch == '/' || ch == '%') {
        return 3;
    }
    else if(ch == '+' || ch == '-') {
        return 2;
    }
    else {
        return 1;
    }
}

int isEmpty(Stack* s) {
    if(s->top == -1) {
        return 1;
    }
    else {
        return 0;
    }
}

void push(Stack* s, char ch) {
    s->top++;
    s->arr[s->top] = ch;
}

char pop(Stack* s) {
    char ch;
    ch = s->arr[s->top];
    s->top--;
    return ch;
}

// void print(Stack *s) {
//     printf("\n");
//     printf("%d\n",s->top);
//     for(int i = 0; i <= s->top; i++) {
//         printf("%c",s->arr[i]);
//     }
// }

char* inToPost(char* infix) {
    int i = 0;
    int j = 0;

    char* postfix = (char*)malloc(sizeof(infix) * sizeof(char));

    Stack *s = (Stack*) malloc (sizeof(Stack));

    createStack(s, sizeof(infix));

    while(infix[i] != '\0') {
        if(!isOperator(infix[i])) {
            postfix[j] = infix[i];
            j++;
        }
        else {
            if(infix[i] == '(' ) {
                push(s, infix[i]);
            }
            else if(infix[i] == ')') {
                char ch = pop(s);
                while(ch != '(') {
                    postfix[j] = ch;
                    j++;
                    ch = pop(s);
                }
            }
            else if(prece(infix[i]) > prece(s->arr[s->top])) {
                push(s, infix[i]);
            }
            else {
                while(prece(infix[i]) <= prece(s->arr[s->top])) {
                    postfix[j] = pop(s);
                    j++;
                }
                push(s, infix[i]);
            }
        }
        
        i++;
        postfix[j] = '\0';
    }
    while(!isEmpty(s)) {
        postfix[j] = pop(s);
        j++;
    }
    postfix[j] = '\0';

    return postfix;
}

int main() {
    char* infix;
    printf("Enter a Infix Expression : ");
    scanf("%s",infix);

    printf("\nPostFix Expression : %s",inToPost(infix));

    return 0;
}